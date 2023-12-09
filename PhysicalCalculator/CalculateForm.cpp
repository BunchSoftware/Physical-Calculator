#include "CalculateForm.h"
#include "ui_CalculateForm.h"
#include "PhysicalCalculateForm.h"
#include <cstdio>
#include "PlottingForm.h"
#include <math.h>

double num_first;
int index;
int index1;
int index2=0;

CalculateForm::CalculateForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculateForm)
{

    ui->setupUi(this);
    setWindowTitle("Physical Calculator");
    setWindowIcon(QIcon(":/picters/icon-calculator.png"));

    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_plus_min,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->pushButton_delit,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_plus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_minus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_X,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_kor,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->pushButton_stel,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->pushButton_step,SIGNAL(clicked()),this,SLOT(operations()));

    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_X->setCheckable(true);
    ui->pushButton_delit->setCheckable(true);
    ui->pushButton->setCheckable(true);

}

CalculateForm::~CalculateForm()
{
    delete ui;
}

void CalculateForm::digits_numbers()
{
    QPushButton *button= (QPushButton *)sender();

    double all_numbers;
    QString new_label;
    if (index==1){
        ui->label_2->setText("");
        index=0;
        if (ui->label_2->text().contains(".")&& button->text()=="0"){
            new_label=ui->label_2->text()+button->text();
        }else{
            all_numbers= (ui->label_2->text()+button->text()).toDouble();
            new_label=QString::number(all_numbers,'g',15);
        }
    }else{
        if (ui->label_2->text().contains(".")&& button->text()=="0"){
            new_label=ui->label_2->text()+button->text();
        }else{
            all_numbers= (ui->label_2->text()+button->text()).toDouble();
            new_label=QString::number(all_numbers,'g',15);
        }
    }
    ui->label_2->setText(new_label);
}


void CalculateForm::on_pushButton_dot_clicked()
{
    if (!(ui->label_2->text().contains('.'))){
        ui->label_2->setText( ui->label_2->text()+".");
    }
}

void CalculateForm::math_operations()
{
    QPushButton *button= (QPushButton *)sender();

    num_first=ui->label_2->text().toDouble();
    ui->label_2->setText("");
    button->setChecked(true);
    QString new_label;

    if (ui->pushButton_plus->isChecked()){
        new_label=QString::number(num_first,'g',15);

        ui->label->setText(new_label + "+");



    }else if (ui->pushButton_X->isChecked()){
        new_label=QString::number(num_first,'g',15);

        ui->label->setText(new_label + "*");


    }else if (ui->pushButton_minus->isChecked()){
        new_label=QString::number(num_first,'g',15);

        ui->label->setText(new_label + "-");


    }else if (ui->pushButton_delit->isChecked()){

        new_label=QString::number(num_first,'g',15);

        ui->label->setText(new_label + "/");
    }
}

void CalculateForm::operations()
{
    QPushButton *button= (QPushButton *)sender();
    double all_numbers1 , all_numbers2;
    QString new_label1,new_label;


    if(button->text()=="+/-"){
        all_numbers1= (ui->label_2->text()).toDouble();
        all_numbers1= all_numbers1 * -1;
        new_label1=QString::number(all_numbers1,'g',15);

        ui->label_2->setText(new_label1);
        index=1;
    }
    if(button->text()=="%"){   
        all_numbers1= (ui->label_2->text()).toDouble();
        all_numbers2= (ui->label_2->text()).toDouble();
        all_numbers1= all_numbers1 * 0.01;
        index1=1;
        new_label1=QString::number(all_numbers1,'g',15);
        ui->label_2->setText(new_label1);


    }
    if(button->text()=="√(x)"){
        all_numbers1= (ui->label_2->text()).toDouble();
        all_numbers2= (ui->label_2->text()).toDouble();
        all_numbers1= sqrt(all_numbers1) ;
        new_label=QString::number(all_numbers2,'g',15);
        new_label1=QString::number(all_numbers1,'g',15);

        ui->label->setText("√("+ new_label +")");
        ui->label_2->setText(new_label1);
        index=1;
    }
    if(button->text()=="1/x"){
        all_numbers1= (ui->label_2->text()).toDouble();
        if (all_numbers1==0){
            ui->label_2->setText("0");
        }else{
            all_numbers1= 1/all_numbers1;
            all_numbers2= (ui->label_2->text()).toDouble();
            new_label=QString::number(all_numbers2,'g',15);
            new_label1=QString::number(all_numbers1,'g',15);

            ui->label->setText("1/"+ new_label);
            ui->label_2->setText(new_label1);

           }
        index=1;
    }
    if(button->text()=="X^2"){
        all_numbers1= (ui->label_2->text()).toDouble();
        all_numbers2= (ui->label_2->text()).toDouble();
        all_numbers1= pow(all_numbers1,2) ;
        new_label=QString::number(all_numbers2,'g',15);
        new_label1=QString::number(all_numbers1,'g',15);

        ui->label->setText("sqr("+ new_label +")");
        ui->label_2->setText(new_label1);
        index=1;
    }
}



void CalculateForm::on_pushButton_ravn_clicked()
{
    double LabelNumber , num_second, num_second2;
    QString new_label ,new_label1,new_label2 ;

    num_second = ui->label_2->text().toDouble();

    if (ui->pushButton_plus->isChecked()){

        if (index1==1){
            num_second2=num_first*num_second;
            LabelNumber = num_first + num_second2;
            new_label=QString::number(LabelNumber,'g',15);
            new_label1=QString::number(num_first,'g',15);
            new_label2=QString::number(num_second2,'g',15);

            ui->label_2->setText(new_label);
            ui->label->setText("");
            ui->label->setText(new_label1+'+'+new_label2+'=');
            ui->pushButton_plus->setChecked(false);
            index=1;
            index1=0;

        }
        else{
            LabelNumber = num_first + num_second;
            new_label=QString::number(LabelNumber,'g',15);
            new_label1=QString::number(num_first,'g',15);
            new_label2=QString::number(num_second,'g',15);

            ui->label_2->setText(new_label);
            ui->label->setText("");
            ui->label->setText(new_label1+'+'+new_label2+'=');
            ui->pushButton_plus->setChecked(false);
            index=1;

        }


    }else if (ui->pushButton_X->isChecked()){
        LabelNumber = num_first * num_second;
        new_label=QString::number(LabelNumber,'g',15);
        new_label1=QString::number(num_first,'g',15);
        new_label2=QString::number(num_second,'g',15);

        ui->label_2->setText(new_label);
        ui->label->setText("");
        ui->label->setText(new_label1+'*'+new_label2+'=');
        ui->pushButton_X->setChecked(false);
        index=1;


    }else if (ui->pushButton_minus->isChecked()){
        if (index1==1){
            num_second2=num_first*num_second;
            LabelNumber = num_first - num_second2;
            new_label=QString::number(LabelNumber,'g',15);
            new_label1=QString::number(num_first,'g',15);
            new_label2=QString::number(num_second2,'g',15);

            ui->label_2->setText(new_label);
            ui->label->setText("");
            ui->label->setText(new_label1+'-'+new_label2+'=');
            ui->pushButton_plus->setChecked(false);
            index=1;
            index1=0;
        }else {
            LabelNumber = num_first - num_second;
            new_label=QString::number(LabelNumber,'g',15);
            new_label1=QString::number(num_first,'g',15);
            new_label2=QString::number(num_second,'g',15);

            ui->label_2->setText(new_label);
            ui->label->setText("");
            ui->label->setText(new_label1+'-'+new_label2+'=');
            ui->pushButton_minus->setChecked(false);
            index=1;
        }

    }else if (ui->pushButton_delit->isChecked()){
            if (num_second==0){
                ui->label_2->setText("0");
            }else{
            LabelNumber = num_first / num_second;
            new_label=QString::number(LabelNumber,'g',15);
            new_label1=QString::number(num_first,'g',15);
            new_label2=QString::number(num_second,'g',15);

            ui->label_2->setText(new_label);
            ui->label->setText("");
            ui->label->setText(new_label1+'/'+new_label2+'=');
            }
            ui->pushButton_delit->setChecked(false);
            index=1;

    }

}


void CalculateForm::on_pushButton_C_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_delit->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_X->setChecked(false);
    ui->label_2->setText("");
    ui->label->setText("");

}


void CalculateForm::on_pushButton_fisic_cal_clicked()
{
   this->close();
   MainWindow *mainWindow = new MainWindow();
   mainWindow->show();
}


void CalculateForm::on_pushButton_C_2_clicked()
{
    QString new_label;
      new_label = ui->label_2->text();
      new_label.chop(1);
      if (new_label.isEmpty()){
          new_label="0";
      }
      ui->label_2->setText(new_label);
}

