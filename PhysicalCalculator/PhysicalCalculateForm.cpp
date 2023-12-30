#include "PhysicalCalculateForm.h"
#include "ui_PhysicalCalculateForm.h"
#include <cstdio>
#include <math.h>
#include <QPixmap>
#include "ErrorForm.h"
#include "CalculateForm.h"
#include <QLineEdit>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFile>
#include <vector>
#include "interpreter.h"

using namespace Interpreter;
int indexChoose;

PhysicalCalculateForm::PhysicalCalculateForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PhysicalCalculateForm)
{
    setWindowTitle("Physical Calculator");
    setWindowIcon(QIcon(":/picters/icon-calculator.png"));

    ui->setupUi(this);
    ui->pushButton->show();

    QJsonArray jsonArray = GetJsonObject(":/source.json")["arrayData"].toArray();
    for (int i = 0; i < jsonArray.count(); i++) {
        QJsonObject object = jsonArray[i].toObject();
        ui->comboBox->addItem(object["header"].toString());
    }

    on_comboBox_activated(0);

}
double logbase(double a, double base)
{
   return log(a) / log(base);
}

PhysicalCalculateForm::~PhysicalCalculateForm()
{
    delete ui;
}

void PhysicalCalculateForm::on_pushButton_clicked()
{
    for (int i = 0; i < ui->EditGroup->children().count() - 1; i++) {
        if(ui->EditGroup->children()[i]->metaObject()->className() == QString("QLineEdit") && ui->EditGroup->children()[i+1]->metaObject()->className() == QString("QLineEdit")){
            QLineEdit *lineEdit = qobject_cast<QLineEdit*>(ui->EditGroup->children()[i]);
            QLineEdit *lineEdit2 = qobject_cast<QLineEdit*>(ui->EditGroup->children()[i+1]);
            Q_ASSERT( lineEdit != nullptr );
            Q_ASSERT( lineEdit2 != nullptr );
            if(lineEdit->isVisible() && lineEdit2->isVisible())
            {
                if(lineEdit->text().isEmpty() && lineEdit2->text().isEmpty()){
                    Error();
                    return;
                }
            }
        }
    }
    Calclulate();
}

void PhysicalCalculateForm::Error(){
    ErrorForm errorForm;
    errorForm.setModal(true);
    errorForm.exec();
}


void PhysicalCalculateForm::on_comboBox_activated(int index)
{
    indexChoose = index;
    QJsonArray jsonArray = GetJsonObject(":/source.json")["arrayData"].toArray();

    if(index <= jsonArray.count())
    {
        QJsonObject object = jsonArray[index].toObject();
        ui->radioButton->setHidden(!object["radioButton"].toBool());
        ui->radioButton_2->setHidden(!object["radioButton2"].toBool());
        UpdateDescription(QPixmap(object["path"].toString()), object["description"].toString());
        UpdateLableAndLineInWindow(object["symbolFormul"].toArray());
        QJsonArray jsonArray1 = object["symbolFormul"].toArray();
    }
}

void PhysicalCalculateForm::Calclulate()
{
  std::vector<double> value;
  std::vector<double> result;
  // Получаем массив данных
  QJsonArray jsonArray = GetJsonObject(":/source.json")["arrayData"].toArray();
  if(indexChoose <= jsonArray.count())
  {
      // Берем обьект по индексу
      QJsonObject object = jsonArray[indexChoose].toObject();
      // Берем массив значений переменных
      QJsonArray mathValueSymbolFormul = object["mathValueSymbolFormul"].toArray();
      // Берем массив формул
      QJsonArray formulExpression = object["formulExpression"].toArray();
      // Берем массив символов формул
      QJsonArray symbolFormul = object["symbolFormul"].toArray();

      for (int i = 0; i < ui->EditGroup->children().count() - 1; i++)
      {
          // Проверяем, если переменная равна нулю, то записываем значение из строки, иначе берем переменную из файла
          if(mathValueSymbolFormul[i].toDouble() == 0)
          {
            if(ui->EditGroup->children()[i+1]->metaObject()->className() == QString("QLineEdit")){
                QLineEdit *lineEdit = qobject_cast<QLineEdit*>(ui->EditGroup->children()[i+1]);
                Q_ASSERT(lineEdit != nullptr );
                value.push_back(lineEdit->text().toDouble());
            }
          }
          else
          {
             value[i] = mathValueSymbolFormul[i].toDouble();
          }
      }
      if(formulExpression.count() == symbolFormul.count())
      {
          for (int i = 0; i < formulExpression.count(); i++)
          {
              QString expression = formulExpression[i].toString();
              for (int j = 0; j < value.size(); j++)
              {
                  if(symbolFormul[j].toString().isEmpty())
                    continue;
                  else
                    expression.replace(symbolFormul[j].toString(), QString::number(value[j]));
              }
              result.push_back(InterpreteExperssion(expression.toStdWString()));
          }
      }
      else
      {
          throw std::logic_error("Количество переменных не равно количесту значений переменных. Исправьте JSON файл");
      }
  }
  CheckLineEditIsEmpty(result);

//    if (indexChoose==0){
//        float F = ui->lineEdit->text().toFloat();
//        float m = ui->lineEdit_2->text().toFloat();
//        float a = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(a*m), FromFloatToString(F/a),FromFloatToString(F/m),"","");
//    }else if (indexChoose==1){
//        float p = ui->lineEdit->text().toFloat();
//        float g = ui->lineEdit_2->text().toFloat();
//        float V = ui->lineEdit_3->text().toFloat();
//        float F = ui->lineEdit_4->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(F/g/V), FromFloatToString(F/p/V),FromFloatToString(F/p/g),FromFloatToString(p*g*V),"");
//    }else if (indexChoose==2){
//        float k = ui->lineEdit->text().toFloat();
//        float l = ui->lineEdit_2->text().toFloat();
//        float d = ui->lineEdit_3->text().toFloat();
//        if (ui->radioButton_2->isCheckable()){///минимум
//            CheckLineEditIsEmpty(FromFloatToString(((d/(l/2))-1)/2), FromFloatToString((d/((2*k)+1))*2),FromFloatToString(((2*k)+1)*(l/2)),"","");
//        }else if(ui->radioButton->isCheckable()){///максимум
//            CheckLineEditIsEmpty(FromFloatToString(d/l), FromFloatToString(d/k),FromFloatToString(k*l),"","");
//        }
//    }else if (indexChoose==3){
//        float U = ui->lineEdit->text().toFloat();
//        float R = ui->lineEdit_2->text().toFloat();
//        float I = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(I*R), FromFloatToString(U/I),FromFloatToString(U/R),"","");
//    }else if (indexChoose==4){
//        float E_0 = ui->lineEdit->text().toFloat();
//        float m = ui->lineEdit_3->text().toFloat();
//        int c=3*pow(10,8);
//        CheckLineEditIsEmpty(FromFloatToString(m*pow(c,2)), FromFloatToString(E_0/pow(c,2)),"","","");

//    }else if (indexChoose==5){
//        float Fam = ui->lineEdit->text().toFloat();
//        float B = ui->lineEdit_2->text().toFloat();
//        float I = ui->lineEdit_3->text().toFloat();
//        float l = ui->lineEdit_4->text().toFloat();
//        float a = ui->lineEdit_5->text().toFloat();
//        float x = (a * 3.14)/180;
//        CheckLineEditIsEmpty
//                (FromFloatToString(B * I * l * sin(x)),
//                 FromFloatToString(Fam/(I*l*I*sin(x))),
//                 FromFloatToString(Fam/(B*l*sin(x))),
//                 FromFloatToString(Fam/(B*I*sin(x))),
//                 FromFloatToString((180 * asin(Fam/(B*l*I)))/3.14f));
//    }
//    else if (indexChoose==6) {
//        float Ek = ui->lineEdit->text().toFloat();
//        float m = ui->lineEdit_2->text().toFloat();
//        float v = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString((m*v*v)/2), FromFloatToString((2*Ek)/(v*v)),FromFloatToString(sqrt(2*Ek/(m))),"","");
//    }
//    else if (indexChoose==7) {
//        float r1  = ui->lineEdit->text().toFloat();
//        float r2 = ui->lineEdit_2->text().toFloat();
//        float l = ui->lineEdit_3->text().toFloat();
//        float f = ui->lineEdit_4->text().toFloat();
//        CheckLineEditIsEmpty
//                (FromFloatToString(((r1 * r2) / pow(l, 2))),
//                 FromFloatToString(((f * pow(l,2)) / r1)),
//                 FromFloatToString(((f * pow(l,2)) / r2)),
//                 FromFloatToString(sqrt((r1 * r2) / f)),"");
//    }
//    else if (indexChoose==8) {
//        float A = ui->lineEdit->text().toFloat();
//        float B = ui->lineEdit_2->text().toFloat();
//        float v = ui->lineEdit_3->text().toFloat();
//        float q = ui->lineEdit_4->text().toFloat();
//        float F = ui->lineEdit_5->text().toFloat();
//        CheckLineEditIsEmpty
//                (FromFloatToString((asin(F/(q*B*v)))*180/3.14),
//                 FromFloatToString(F/(sin(A*(3.14/180))*v*q)),
//                 FromFloatToString(F/(B*v*sin(A*(3.14/180)))),
//                 FromFloatToString(q*B*v*sin(A*(3.14/180))),"");
//    }
//    else if (indexChoose==9) {
//        float V = ui->lineEdit->text().toFloat();
//        float T = ui->lineEdit_2->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(1/V), FromFloatToString(1/T),"","","");
//    }
//    else if (indexChoose==10) {
//        float p =3.14159;
//        float L = ui->lineEdit->text().toFloat();
//        float C = ui->lineEdit_2->text().toFloat();
//        float T = ui->lineEdit_3->text().toFloat();
//        float F = T/(2*p);
//        CheckLineEditIsEmpty(FromFloatToString(2*p*sqrt(L*C)), FromFloatToString(pow(F,2)/L),FromFloatToString(pow(F,2)/C),"","");
//    }
//    else if (indexChoose==11) {
//        float k = ui->lineEdit_2->text().toFloat();
//        float m = ui->lineEdit->text().toFloat();
//        float T = ui->lineEdit_3->text().toFloat();
//        float pi = 3.14159;
//        CheckLineEditIsEmpty
//                (FromFloatToString(m/pow(T/(2*pi) , 2)),
//                 FromFloatToString(pow(T/(2*pi) , 2)*k),
//                 FromFloatToString(2*pi*sqrt(m/k)),"","");
//    }
//    else if (indexChoose==12) {
//        float g = 9.8;
//        float h = ui->lineEdit_2->text().toFloat();
//        float t = ui->lineEdit->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(sqrt(2*h/g)), FromFloatToString(g*pow(t,2)/2),"","","");
//    }
//    else if (indexChoose==13) {
//        float g = 9.8;
//        float t = ui->lineEdit->text().toFloat();
//        float v = ui->lineEdit_2->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(v/g), FromFloatToString(g*t),"","","");
//    }
//    else if (indexChoose==14) {
//        float N = ui->lineEdit->text().toFloat();
//        float No = ui->lineEdit_2->text().toFloat();
//        float t = ui->lineEdit_3->text().toFloat();
//        float T = ui->lineEdit_4->text().toFloat();
//        CheckLineEditIsEmpty
//                (FromFloatToString(No*pow(2,-t/T)),
//                 FromFloatToString(N/pow(2,-t/T)),
//                 FromFloatToString(logbase(N/No,2)* -T),
//                 FromFloatToString(logbase(N/No,2)* -t),"");
//    }
//    //Длина волны
//    else if(indexChoose==15)
//    {
//        float T  = ui->lineEdit->text().toFloat();
//        float u = ui->lineEdit_2->text().toFloat();
//        float lam = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(lam/u), FromFloatToString(lam/T),FromFloatToString(u*T),"","");
//    }
//    //Средняя скорость и ускорение тела
//    else  if(indexChoose==16)
//    {
//        float S = ui->lineEdit->text().toFloat();
//        float t = ui->lineEdit_2->text().toFloat();
//        float v = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(v*t), FromFloatToString(S/v),FromFloatToString(S/t),"","");
//    }
//    //Абсолютная температура
//    else   if(indexChoose==17)
//    {
//        float t = ui->lineEdit->text().toFloat();
//        float T = ui->lineEdit_2->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(round(T-273.15)), FromFloatToString(t+273.15),"","","");
//    }
//    //Кол-во вещества
//    else  if(indexChoose==18)
//    {
//        float m = ui->lineEdit->text().toFloat();
//        float M = ui->lineEdit_2->text().toFloat();
//        float v = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(v*M), FromFloatToString(m/v),FromFloatToString(m/M),"","");
//    }
//    //Концентрация молекул(атомов)
//    else    if(indexChoose==19)
//    {
//        float N = ui->lineEdit->text().toFloat();
//        float V = ui->lineEdit_2->text().toFloat();
//        float n = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(n*V), FromFloatToString(N/n),FromFloatToString(N/V),"","");
//    }
//    //Скорость распространения волны
//    else  if(indexChoose==20)
//    {
//        float lam  = ui->lineEdit->text().toFloat();
//        float v = ui->lineEdit_2->text().toFloat();
//        float u = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(u/v), FromFloatToString(u/lam),FromFloatToString(lam*v),"","");
//    }
//    else if (indexChoose==21){
//        float h = ui->lineEdit->text().toFloat();
//        float t = ui->lineEdit_2->text().toFloat();
//        float g = 9.8;
//        CheckLineEditIsEmpty(FromFloatToString((g*pow(t,2))/2), FromFloatToString(sqrt((h*2)/g)),"","","");
//    }
//    else if(indexChoose==22){
//        float s = ui->lineEdit->text().toFloat();
//        float v = ui->lineEdit_2->text().toFloat();
//        float t = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(v*t), FromFloatToString(s/t),FromFloatToString(s/v),"","");
//    }
//    else if(indexChoose==23){
//        float e = ui->lineEdit->text().toFloat();
//        float m = ui->lineEdit_2->text().toFloat();
//        float h = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(m*h*9.8), FromFloatToString(e/(h*9.8)),FromFloatToString(e/(m*9.8)),"","");
//    }
//    else if(indexChoose==24){
//        float f = ui->lineEdit->text().toFloat();
//        float m = ui->lineEdit_2->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(m*9.8), FromFloatToString(f/9.8),"","","");
//    }
//    else if(indexChoose==25){
//        float q = ui->lineEdit->text().toFloat();
//        float c = ui->lineEdit_2->text().toFloat();
//        float m = ui->lineEdit_3->text().toFloat();
//        float t1 = ui->lineEdit_4->text().toFloat();
//        float t2 = ui->lineEdit_5->text().toFloat();
//        CheckLineEditIsEmpty
//                (FromFloatToString(c*m*(t1-t2)),
//                 FromFloatToString(q/(m*(t1-t2))),
//                 FromFloatToString(q/(c*(t1-t2))),
//                 FromFloatToString((q/(c*m))+t2),
//                 FromFloatToString(t1-(q/(c*m))));
//    }
//    else if(indexChoose==26){
//        float q = ui->lineEdit->text().toFloat();
//        float l = ui->lineEdit_2->text().toFloat();
//        float m = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(l*m), FromFloatToString(q/m),FromFloatToString(q/l),"","");
//    }
//    else if(indexChoose==27){
//        float q = ui->lineEdit->text().toFloat();
//        float L = ui->lineEdit_2->text().toFloat();
//        float m = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(L*m), FromFloatToString(q/m),FromFloatToString(q/L),"","");
//    }
//    else if(indexChoose==28){
//        float e = ui->lineEdit->text().toFloat();
//        float qq = ui->lineEdit_2->text().toFloat();
//        float m = ui->lineEdit_3->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString(qq*m), FromFloatToString(e/m),FromFloatToString(e/qq),"","");
//    }
//    else if(indexChoose==29){
//        float r = ui->lineEdit->text().toFloat();
//        float p = ui->lineEdit_2->text().toFloat();
//        float l = ui->lineEdit_3->text().toFloat();
//        float s = ui->lineEdit_4->text().toFloat();
//        CheckLineEditIsEmpty(FromFloatToString((p*l)/s), FromFloatToString((r*s)/l),FromFloatToString((r*s)/p),FromFloatToString((p*l)/r),"");
//    }
}
void PhysicalCalculateForm::UpdateLableAndLineInWindow(QJsonArray arrayData){
  for (int i = 0; i < arrayData.count(); i++) {
      if(arrayData[i].toString() == ""){
          if(ui->LabelEditGroup->children()[i+1]->metaObject()->className() == QString("QLabel")){
              QLabel *label = qobject_cast<QLabel*>(ui->LabelEditGroup->children()[i+1]);
              Q_ASSERT( label != nullptr );
              label->setText("");
              label->hide();
              if(ui->EditGroup->children()[i+1]->metaObject()->className() == QString("QLineEdit")){
                  QLineEdit *lineEdit = qobject_cast<QLineEdit*>(ui->EditGroup->children()[i+1]);
                  Q_ASSERT(lineEdit != nullptr );
                  lineEdit->hide();
              }
          }
        }
      else
        {
          if(ui->LabelEditGroup->children()[i+1]->metaObject()->className() == QString("QLabel")){
              QLabel *label = qobject_cast<QLabel*>(ui->LabelEditGroup->children()[i+1]);
              Q_ASSERT( label != nullptr );

              label->setText(arrayData[i].toString());
              label->show();

              if(ui->EditGroup->children()[i+1]->metaObject()->className() == QString("QLineEdit")){
                  QLineEdit *lineEdit = qobject_cast<QLineEdit*>(ui->EditGroup->children()[i+1]);
                  Q_ASSERT(lineEdit != nullptr );
                  lineEdit->show();
              }
          }
        }
    }
  }
  void PhysicalCalculateForm::UpdateDescription(QPixmap image, QString textLabel){
      if(image.isNull()){
        ui->DescriptionImage->hide();
      }
      else{
        ui->DescriptionImage->show();
        ui->DescriptionImage->setPixmap(image);
      }
      if(textLabel.isEmpty()){
          ui->Description->hide();
      }
      else{
        ui->Description->setText(textLabel);
        ui->Description->show();
      }
    }
QString PhysicalCalculateForm::FromFloatToString(float value){
    return QString::number(value);
}
void PhysicalCalculateForm::CheckLineEditIsEmpty(std::vector<double> result)
{
  for (int i = 0; i < ui->EditGroup->children().count() - 1; i++)
     {
          if(ui->EditGroup->children()[i+1]->metaObject()->className() == QString("QLineEdit")){
              QLineEdit *lineEdit = qobject_cast<QLineEdit*>(ui->EditGroup->children()[i+1]);
              Q_ASSERT(lineEdit != nullptr );
              if(lineEdit->text().isEmpty())
              {
                ui->lineEdit->setText(QString::number(result[i]));
                return;
              }
          }
      }
}
QJsonObject PhysicalCalculateForm::GetJsonObject(QString path){
  QFile file(path);
  file.open(QIODevice::ReadOnly | QIODevice::Text);
  QString jsonValue = file.readAll();
  QJsonDocument doc = QJsonDocument::fromJson(jsonValue.toUtf8());
  return doc.object();
}
