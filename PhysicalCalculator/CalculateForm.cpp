#include "CalculateForm.h"
#include "ui_CalculateForm.h"
#include "PhysicalCalculateForm.h"
#include <cstdio>
#include "PlottingForm.h"
#include <math.h>
#include "QPushButton"
#include "interpreter.h"

using namespace Interpreter;

CalculateForm::CalculateForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculateForm)
{
    ui->setupUi(this);
    for (int i = 0; i < ui->GroupButton->children().count() - 1; i++)
    {
        if(ui->GroupButton->children()[i+1]->metaObject()->className() == QString("QPushButton")){
            QPushButton *button = qobject_cast<QPushButton*>(ui->GroupButton->children()[i+1]);
            Q_ASSERT(button != nullptr );
            connect(button,SIGNAL(clicked()),this,SLOT(operations()));
        }
    }
}

CalculateForm::~CalculateForm()
{
    delete ui;
}

void CalculateForm::operations()
{
    QPushButton *button= (QPushButton *)sender();
    double result = 0;

    if(button->text() == "Del")
    {
         QString text = ui->expression->text();
         text.chop(1);
         ui->expression->setText(text);

         if(ui->expression->text().isEmpty())
           ui->result->setText("");
    }
    else if(button->text() == "1/x")
      ui->expression->setText("1/" + ui->expression->text());
    else if(button->text() == "sqrt")
      ui->expression->setText(ui->expression->text() + "sqrt(");
    else
    {
        ui->expression->setText(ui->expression->text() + button->text());
    }

    try {
       result = InterpreteExperssion(ui->expression->text().toStdWString());
       ui->result->setText(QString::number(result));
    }
    catch (...)
    {
      ui->result->setText("");
    }

    if(button->text() == "=")
    {
         ui->expression->setText(QString::number(result));
         ui->result->setText("");
    }

    if(button->text() == "C")
    {
        ui->result->setText("");
        ui->expression->setText("");
        result = 0;
    }
}


