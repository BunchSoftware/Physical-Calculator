#include "graf.h"
#include "ui_graf.h"
#include "mainwindow.h"
#include <math.h>
int indexx1;

graf::graf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::graf)
{
    ui->setupUi(this);
    h=0.1;
    xBegin = -3;
    xEnd =3+h;
    ui->widget->xAxis->setRange(-6,6);
    ui->widget->yAxis->setRange(0,12);
    N=(xEnd-xBegin)/h+2;


}

graf::~graf()
{
    delete ui;
}

void graf::on_pushButton_clicked()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(TimerSlot()));
    ui->widget->clearGraphs();
    timer->start(20);
    X=xBegin;
    x.clear();
    y.clear();
}

void graf::TimerSlot()
{
        if (indexx1==0){
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
        else if (indexx1==1){
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

void graf::on_comboBox_activated(int index)
{
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
        indexx1=0;

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
        indexx1=1;

    }
}

void graf::on_pushButton_2_clicked()
{

    this->close();
    emit grafWindow();
}
