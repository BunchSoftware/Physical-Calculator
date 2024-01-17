#include "parser.h"
#include "ui_parser.h"
#include "interpreter.h"

using namespace Interpreter;
using namespace std;

parser::parser(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::parser)
{
  ui->setupUi(this);

}

parser::~parser()
{
  delete ui;
}

void parser::on_pushButton_clicked()
{
  try {
    std::wstring text = ui->line->text().toStdWString();
    double result = InterpreteExperssion(text);
    ui->result->setText("Результат: " + QString::number(result));
  }
  catch (...) {
    ui->result->setText("Ошибка в выражении");
  }
}
