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

void parser::on_line_textEdited(const QString &arg1)
{
}

void parser::on_pushButton_clicked()
{
  try {
    QString text = ui->line->text();
    double result = InterpreteExperssion(text.toStdWString());
    ui->result->setText(QString::number(result));
  } catch (...) {
    ui->result->setText("Ошибка в выражении");
  }
}
