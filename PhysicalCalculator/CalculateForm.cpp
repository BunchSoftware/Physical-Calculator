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

    if(button->text() == "=")
    {
        ui->result->setText("");
        ui->expression->setText(QString::number(result));
    }
    if(button->text() == "C")
    {
        ui->result->setText("");
        ui->expression->setText("");
        result = 0;
    }
    if(button->text() == "Del")
    {
         ui->expression->text().chop(1);
    }
    else
    {
        try {
          result = InterpreteExperssion(ui->expression->text().toStdWString());
          ui->result->setText(QString::number(result));
        }
        catch (...)
        {
          ui->result->setText("Ошибка в выражении");
        }
    }
}


