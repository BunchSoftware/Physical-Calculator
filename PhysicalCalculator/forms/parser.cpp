#include "parser.h"
#include "ui_parser.h"
#include "library/interpreter.h"

using namespace Interpreter;
using namespace std;

parser::parser(QObject *parent) : QObject(parent)
{

}

QString parser::textOutput()
{
  return m_textOutput;
}

QString parser::textInput()
{
  return m_textInput;
}

void parser::setTextOutput(QString value)
{
  if(m_textOutput != value)
  {
      m_textInput = value;
      emit textOutputChanged();
  }
}

void parser::setTextInput(QString value)
{
  if(m_textInput != value)
  {
         qDebug("123");
      m_textInput = value;
      emit textInputChanged();
    }
}

void parser::calculate()
{
  qDebug("Что");
  try {
    std::wstring text = textInput().toStdWString();
    double result = InterpreteExperssion(text);
    setTextOutput("Результат: " + QString::number(result));
  }
  catch (...) {
    setTextOutput("Ошибка в выражении");
  }
}
