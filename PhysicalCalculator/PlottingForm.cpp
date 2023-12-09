#include "PlottingForm.h"
#include "ui_PlottingForm.h"
#include "CalculateForm.h"
#include <math.h>
int indexChoosePlottingForm;

PlottingForm::PlottingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlottingForm)
{
    ui->setupUi(this);
    setWindowTitle("Physical Calculator: Построение графиков");
    setWindowIcon(QIcon(":/picters/icon-calculator.png"));

    h=0.1;
    xBegin = -3;
    xEnd =3+h;
    ui->widget->xAxis->setRange(-6,6);
    ui->widget->yAxis->setRange(0,12);
    N=(xEnd-xBegin)/h+2;

    ui->widget->setInteraction(QCP::iRangeDrag);
    ui->widget->setInteraction(QCP::iRangeZoom);
}

PlottingForm::~PlottingForm()
{
    delete ui;
}

void PlottingForm::on_pushButton_clicked()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(TimerSlot()));
    ui->widget->clearGraphs();
    timer->start(20);
    X=xBegin;
    x.clear();
    y.clear();
}

void PlottingForm::TimerSlot()
{
        if (indexChoosePlottingForm==0){
            float a = ui->lineEdit->text().toFloat();
            float b = ui->lineEdit_2->text().toFloat();
            float p = ui->lineEdit_3->text().toFloat();
            if(time <= 20*N){
                if (X<=xEnd)
                {
                    x.push_back(X);
                    float c= (a*pow(X,2))+b*X+p;
                    y.push_back(c);
                    X+=h;

                 }
                time+=20;
            }
            else{
                time=0;
                timer->stop();
            }
        }
        else if (indexChoosePlottingForm==1){
            float a = ui->lineEdit->text().toFloat();
            float b = ui->lineEdit_2->text().toFloat();
            if(time <= 20*N){
                if (X<=xEnd)
                {
                    x.push_back(X);
                    float c= a*X+b;
                    y.push_back(c);
                    X+=h;

                 }
                time+=20;
            }
            else{
                time=0;
                timer->stop();
            }
        }

    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();
}

void PlottingForm::on_comboBox_activated(int index)
{
    indexChoosePlottingForm = index;
    if(index==0){
        ui->lineEdit->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->pushButton->show();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
       }
    if(index==1){
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->hide();
    }
}
