#include "ErrorForm.h"
#include "ui_ErrorForm.h"

ErrorForm::ErrorForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorForm)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/picters/icon-calculator.png"));
    setWindowTitle("Ошибка");
}

ErrorForm::~ErrorForm()
{
    delete ui;
}

void ErrorForm::on_pushButton_clicked()
{
    this->close();
}

