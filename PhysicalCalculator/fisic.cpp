#include "fisic.h"
#include "ui_fisic.h"
#include <cstdio>
#include <math.h>
#include <QPixmap>
#include "dialog.h"

#include "mainwindow.h"
int indexx;
int a;
int sex;

fisic::fisic(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fisic)

{
    ui->setupUi(this);
    ui->lineEdit->hide();
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();
    ui->lineEdit_3->hide();
    ui->lineEdit_4->hide();
    ui->lineEdit_5->hide();
    ui->pushButton->hide();
    ui->pushButton_2->show();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->radioButton->hide();
    ui->radioButton_2->hide();
    ui->label_6->hide();
    ui->label_7->hide();

    window1 = new graf();
    connect(window1,&graf::grafWindow,this,&MainWindow::show);






}
double logbase(double a, double base)
{
   return log(a) / log(base);
}

fisic::~fisic()
{
    delete ui;
}

void fisic::on_pushButton_clicked()
{
    if (sex==5){
        if (ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()){
            Dialog window2;
            window2.setModal(true);
            window2.setFixedSize(376,123);
            window2.setWindowTitle("Ошибка");
            window2.exec();
        }
        else if (ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()){
            Dialog window2;
            window2.setModal(true);
            window2.setFixedSize(376,123);
            window2.setWindowTitle("Ошибка");
            window2.exec();
        }
        else if(ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()){

            Dialog window2;
            window2.setModal(true);
            window2.setFixedSize(376,123);
            window2.setWindowTitle("Ошибка");
            window2.exec();
        }
        else if(ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()||
                 ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()||
                 ui->lineEdit_4->text().isEmpty()&&ui->lineEdit_5->text().isEmpty()){
            Dialog window2;
            window2.setModal(true);
            window2.setFixedSize(376,123);
            window2.setWindowTitle("Ошибка");
            window2.exec();
        }

        else{
            ras();

        }
    }else if (sex==4){
        if (ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()){
            Dialog window2;
            window2.setModal(true);
            window2.setFixedSize(376,123);
            window2.setWindowTitle("Ошибка");
            window2.exec();
        }
        else if (ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()||
                 ui->lineEdit->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()||
                 ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()||
                 ui->lineEdit_3->text().isEmpty()&&ui->lineEdit_4->text().isEmpty()){
            Dialog window2;
            window2.setModal(true);
           window2.setFixedSize(376,123);
            window2.setWindowTitle("Ошибка");
            window2.exec();
        }
        else{
            ras();
        }
    }
    else if (sex==3){
        if (ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()){
            Dialog window2;
            window2.setModal(true);
            window2.setFixedSize(376,123);
            window2.setWindowTitle("Ошибка");
            window2.exec();
        }
        else if(ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()||ui->lineEdit_2->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()||ui->lineEdit->text().isEmpty()&&ui->lineEdit_3->text().isEmpty()){
            Dialog window2;
            window2.setModal(true);
            window2.setFixedSize(376,123);
            window2.setWindowTitle("Ошибка");
            window2.exec();
        }
        else{
            ras();
        }
    }
    else if (sex==2){
        if (ui->lineEdit->text().isEmpty()&&ui->lineEdit_2->text().isEmpty()){
            Dialog window2;
            window2.setModal(true);
           window2.setFixedSize(376,123);
            window2.setWindowTitle("Ошибка");
            window2.exec();
        }
        else {
            ras();
        }

    }

}


void fisic::on_comboBox_activated(int index)
{

    if(index==0){
        ui->lineEdit->hide();
        ui->lineEdit->hide();
        ui->lineEdit_2->hide();
        ui->lineEdit_3->hide();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->pushButton->hide();
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->label_6->hide();
        sex=0;
        this->setFixedSize(250,387);
    }if(index==1){
        this->close();
        ui->lineEdit->hide();
        ui->lineEdit->hide();
        ui->lineEdit_2->hide();
        ui->lineEdit_3->hide();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->pushButton->hide();
        ui->pushButton_2->show();
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->label_6->hide();
        ui->label_7->hide();
        emit firstWindow();

    }if (index==2){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label->setText("F");
        ui->label_2->show();
        ui->label_2->setText("m");
        ui->label_3->show();
        ui->label_3->setText("a");
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/zaconNut.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->label_7->show();
        ui->label_7->setText("Второй закон Нью́то́на — дифференциальный закон механического \nдвижения, описывающий зависимость ускорения тела от \nравнодействующей всех приложенных к телу сил и массы тела.\nОдин из трёх законов Ньютона. Основной закон динамики.\n            F=ma\nF-  сумма всех сил приложенных к телу, Н.\nm-  масса тела, кг.\na – ускорение тела, 〖м/с〗^2.");
        this->setFixedSize(761,564);
        indexx=2;
        sex=3;
    }if(index==3){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->show();
        ui->lineEdit_5->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label->setText("p");
        ui->label_2->show();
        ui->label_2->setText("q");
        ui->label_3->show();
        ui->label_3->setText("V");
        ui->label_4->show();
        ui->label_4->setText("F");
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/zaconArxim.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=3;
        sex=4;
        ui->label_7->show();
        ui->label_7->setText("Закон Архимеда — закон гидростатики и аэростатики: на тело,\nпогружённое в жидкость или газ, действует выталкивающая сила, \nчисленно равная весу объема жидкости или газа, вытесненного телом.\n             F_a= ρgV\nF_a – сила Архимеда, [Н]. \nρ- плотность жидкости или газа, [ 〖кг/м〗^2].\ng – ускорение свободного падения, [ м/с^2].\nV- объем части тела, погруженной в жидкость или газ, [ м^3]. ");
        this->setFixedSize(761,564);


    }if(index==4){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label->setText("порядок спектра ");
        ui->label_2->show();
        ui->label_2->setText("лямбда");
        ui->label_3->show();
        ui->label_3->setText("разность хода ");
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->show();
        ui->radioButton_2->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        indexx=4;
        sex=3;
        this->setFixedSize(250,564);
    }if(index==5){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label->setText("U ");
        ui->label_2->show();
        ui->label_2->setText("R");
        ui->label_3->show();
        ui->label_3->setText("I ");
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        //QPixmap pix(":/new/prefix1/картинки/silatoka.png");
        QPixmap pix("://picters/zaconOma.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=5;
        sex=3;
        ui->label_7->show();
        ui->label_7->setText("Сила тока в проводнике прямо пропорциональна напряжению на \nконцах проводника\n           R=  U/I\nR - сопротивление\nU - напряжение\nI – сила тока");
        this->setFixedSize(761,564);
    }if(index==6){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->hide();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label->setText("E_0");
        ui->label_2->show();
        ui->label_2->setText("m");
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/otnosilmas.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=6;
        sex=2;
        ui->label_7->show();
        ui->label_7->setText("Увеличение массы при увеличении скорости относительно массы \nтела в покое\n               E_0=〖mc〗^2 \nE_0 - энергия\nm - масса\nc - скорость света");
        this->setFixedSize(761,564);
    }
    if(index==7){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->show();
        ui->lineEdit_5->show();
        ui->pushButton->show();
        ui->label->show();
        ui->label->setText("Fam");
        ui->label_2->show();
        ui->label_2->setText("B");
        ui->label_3->show();
        ui->label_3->setText("I");
        ui->label_4->show();
        ui->label_4->setText("l");
        ui->label_5->show();
        ui->label_5->setText("a");
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/silaAmpera.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=7;
        sex=5;
        ui->label_7->show();
        ui->label_7->setText("Это сила, с которой магнитное поле действует на помещенный в него\nпроводник с током.\n            F=B*I*L*sin ⁡a\nB – магнитное поле\nI – сила тока\nL –длин fпроводника\nsin a – угол падения на магнитное поле");
        this->setFixedSize(761,564);
    }
    if(index==8){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label->setText("Ek");
        ui->label_2->show();
        ui->label_2->setText("m");
        ui->label_3->show();
        ui->label_3->setText("v");
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->label_7->show();
        ui->label_7->setText("Физическая величина, характеризующая состояние тела или системы \nтел по их движению \n              E=  〖mV〗^2/2 \nE – кинетическая энергия \nm – масса тела \nV – скорость тела ");
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/kinenergia.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=8;
        sex=3;
        this->setFixedSize(761,564);
    }
    if(index==9){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->show();
        ui->lineEdit_5->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        ui->label->setText("Заряд 1 тела");
        ui->label_2->setText("Заряд 2 тела");
        ui->label_3->setText("Расстояние между\nтелами");
        ui->label_4->setText("Сила Кулона * 9*10^9");
        QPixmap pix("://picters/zas.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->label_7->show();
        ui->label_7->setText("Величина электрической силы между двумя точечными зарядами в \nвакууме прямо пропорциональна произведению модулей зарядов и\nобратно пропорциональна квадрату расстояния между ними.\nF=k  (q1*q2)/r^2 \nF – сила Кулона \nk -  коэффициент пропорциональности\nq1, q2 - взаимодействующие тела\nr - расстояние между телами");
        indexx=9;
        sex=4;
        this->setFixedSize(761,564);
    }
    if (index==10){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->show();
        ui->lineEdit_5->show();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->label_5->show();
        ui->label->setText("Угол");
        ui->label_2->setText("Индуктивность (B)");
        ui->label_3->setText("Скорость (v)");
        ui->label_4->setText("Заряд (q)");
        ui->label_5->setText("Сила (F)");
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/silalorans.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=10;
        sex=5;
        ui->label_7->show();
        ui->label_7->setText("Сила, с которой магнитное поле действует на заряженную частицу, \nдвижущуюся в этом поле\n          F=q(E +VB)\nq - заряд частицы\nE - напряженность электрического поля\nV - скорость частицы\nB - магнитная индукция");
        this->setFixedSize(761,564);
    }
    if(index==11){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->hide();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label_7->show();
        ui->label_7->setText("Частота колебаний — число полных колебаний тела за одну секунду \n               v=  1/T \nv – частота колебаний \nT – период колебаний ");
        ui->label->setText("Частота (V)");
        ui->label_2->setText("Период (Т)");
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/chast.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=11;
        sex=2;
        this->setFixedSize(761,564);
    }
    if(index==12){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label->setText("индуктивность контура");
        ui->label_2->setText("емкость контура ");
        ui->label_3->setText("колебания в контуре");
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/zacontomsa.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=12;
        sex=3;
        ui->label_7->show();
        ui->label_7->setText("Формула Томсона — математическое выражение связывающее \nсобственную частоту, индуктивность и ёмкость электрических или \nэлектромагнитных колебаний в электрическом колебательном контуре\n       T₀ = 1/f₀ = 2π√LC = 2π/w₀ = 2π/(1/√LC) = 2π √LC\nf₀ - частота собственных колебаний\nw₀ - угловая частота собственных колебаний\nL – индуктивность\nС – ёмкость");        this->setFixedSize(761,564);
    }
    if(index==13){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label->setText("m");
        ui->label_2->setText("k");
        ui->label_3->setText("T");
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/mazt.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=13;
        sex=3;
        ui->label_7->show();
        ui->label_7->setText("Период колебания пружинного маятника – зависит от жесткости \nпружины: с увеличением коэффициента жесткости пружины период \nколебания маятника уменьшается\n               T=2*pi*sqrt(m/k)\n               T=2 * √(m*k)\nT – период колебания пружинного маятника\n - постоянная\nm – масса груза\nk – жесткость пружины");
        this->setFixedSize(761,564);
    }
    if(index==14){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->hide();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label->setText("t ");
        ui->label_2->show();
        ui->label_2->setText("h");
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/serrr.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=14;
        sex=2;
        ui->label_7->show();
        ui->label_7->setText("");
        this->setFixedSize(761,564);
    }
    if(index==15){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->hide();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label->setText("t ");
        ui->label_2->show();
        ui->label_2->setText("v");
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/serrr.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=15;
        sex=2;
        ui->label_7->show();
        ui->label_7->setText("");
        this->setFixedSize(761,564);
    }
    if(index==16){
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->show();
        ui->lineEdit_5->hide();
        ui->pushButton->show();
        ui->label->show();
        ui->label->setText("N ");
        ui->label_2->show();
        ui->label_2->setText("No");
        ui->label_3->show();
        ui->label_3->setText("t");
        ui->label_4->show();
        ui->label_4->setText("T");
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/period.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        indexx=16;
        sex=4;
        ui->label_7->show();
        ui->label_7->setText("Время в течении которого количество частиц  и интенсивность \nреакции распада уменьшаются в двое\n             N=N0×(1/2)^t/T\nN0- исходное кол-во вещества \nt- время прошедшее с начала распада \nT- период полураспада ");
        this->setFixedSize(761,564);
    }
    //Длина волны
    if (index==17)
    {
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->label->setText("T =");
        ui->label_2->setText("u =");
        ui->label_3->setText("lam =");
        ui->label_4->hide();
        ui->label_5->hide();
        ui->pushButton->show();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        QPixmap pix("://picters/dlinavoln.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        ui->label_7->show();
        ui->label_7->setText("длина волны, которая проявляется у всех частиц в квантовой \nмеханике согласно корпускулярно-волновому дуализму, и \nопределяющая плотность вероятности обнаружения объекта в \nзаданной точке конфигурационного пространства. Длина волны де \nБройля обратно пропорциональна импульсу частицы\n                   λ= h/p\n λ – длина волны\nh - постоянная планка\np – конечный импульс");
        this->setFixedSize(761,564);
        indexx=17;
        sex=3;
    }
    //Средняя скорость и ускорение тела
    if (index==18)
    {
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->pushButton->show();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->label->setText("S =");
        ui->label_2->setText("t =");
        ui->label_3->setText("v =");
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        QPixmap pix("://picters/serp.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->label_7->show();
        ui->label_7->setText("Отношениее растояние, пройденного тола и времени, затраченого на путь\n            v=S/t\nv-скорость\nS-растояние\nT-время");
        this->setFixedSize(761,564);
        indexx=18;
        sex=3;
    }
    //Абсолютная температура
    if (index==19)
    {
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->hide();
        ui->pushButton->show();
        ui->label_3->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->label->setText("t =");
        ui->label_2->setText("T =");
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/abs.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->label_7->show();
        ui->label_7->setText("Это температура измеряеемая в кельвинах\n         T=t+T0\nt-температура в С\nT0=273К");
        this->setFixedSize(761,564);
        indexx=19;
        sex=2;
    }
    //Кол-во вещества
    if (index==20)
    {
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->pushButton->show();
        ui->label_3->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->label->setText("m =");
        ui->label_2->setText("M =");
        ui->label_3->setText("v =");
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/kolpp.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->label_7->show();
        ui->label_7->setText("Кол-во однотипных структурных едениц содержащихся в веществе \n        v=m/M\nm-масса веществ\nM-молярная масса ");
        this->setFixedSize(761,564);
        indexx=20;
        sex=3;
    }
    //Концентрация молекул(атомов)
    if (index==21)
    {
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->pushButton->show();
        ui->label_3->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->label->setText("N =");
        ui->label_2->setText("V =");
        ui->label_3->setText("n =");
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/kolvesch.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->label_7->show();
        ui->label_7->setText("величина, количественно характеризующая содержание компонента \nотносительно всей смеси.\n                       Cм=  m/(M*V)\nCм –молярная концентрация\nm – масса растворенного в растворе вещества\nM – молярная масса растворенного вещества \nV – объем рествора");
        this->setFixedSize(761,564);
        indexx=21;
        sex=3;
    }
    if (index==22)
    {
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->label->show();
        ui->pushButton->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->label->setText("λ=");
            ui->label_2->setText("V =");
        ui->label_3->setText("T =");
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/rasprot.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->label_7->show();
        ui->label_7->setText("расстояние, на которое распространяется волна в еденицу времени\n                    V = λ/T\nλ - длина волны\nT - период колебаний\nV - скорость ее распространения ");
        this->setFixedSize(761,564);
        indexx=22;
        sex=3;
    }
    if(index==23){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->hide();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label->setText("Начальная координата");
        ui->label_2->setText("Время падения");
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        QPixmap pix("://picters/kord.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        indexx=23;
        ui->label_7->show();
        ui->label_7->setText("");
        this->setFixedSize(761,564);
        sex=2;
    }
    if(index==24){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label->setText("Расстояние");
        ui->label_2->setText("Начальная скорость");
        ui->label_3->setText("Время");
        QPixmap pix("://picters/dalnost.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        indexx=24;
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->label_7->show();
        ui->label_7->setText("");
        this->setFixedSize(761,564);
        sex=3;
    }
    if(index==25){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label->setText("Потенциальная энергия");
        ui->label_2->setText("Масса");
        ui->label_3->setText("Высота");
        QPixmap pix("://picters/dal.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        indexx=25;
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->label_7->show();
        ui->label_7->setText("");
        this->setFixedSize(761,564);
        sex=3;
    }
    if(index==26){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->hide();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label->setText("Сила тяжести");
        ui->label_2->setText("Масса");
        QPixmap pix("://picters/silataz.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        indexx=26;
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->label_7->show();
        ui->label_7->setText("");
        this->setFixedSize(761,564);
        sex=2;
    }
    if(index==27){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->show();
        ui->lineEdit_5->show();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->label_5->show();
        ui->label->setText("Количество теплоты");
        ui->label_2->setText("Теплоемкость");
        ui->label_3->setText("Масса");
        ui->label_4->setText("Начальная температура");
        ui->label_5->setText("Конечная температура");
        QPixmap pix("://picters/koll.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        indexx=27;
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->label_7->show();
        ui->label_7->setText("");
        this->setFixedSize(761,564);
        sex=5;
    }
    if(index==28){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label->setText("Количество теплоты");
        ui->label_2->setText("Удельная теплота плавления");
        ui->label_3->setText("Масса");
        indexx=28;
        QPixmap pix("://picters/plsav.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        ui->label_7->show();
        ui->label_7->setText("");
        this->setFixedSize(761,564);
        sex=3;
    }
    if(index==29){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label->setText("Количество теплоты");
        ui->label_2->setText("Удельная теп. парооб.");
        ui->label_3->setText("Масса");
        indexx=29;
        QPixmap pix("://picters/par.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        ui->label_7->show();
        ui->label_7->setText("");
        this->setFixedSize(761,564);
        sex=3;
    }
    if(index==30){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->hide();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label->setText("Количество теплоты");
        ui->label_2->setText("Удельная теп. сгорания");
        ui->label_3->setText("Масса");
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        indexx=30;
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->label_7->show();
        ui->label_7->setText("физико-химический процесс перехлда из исходного  вещества в \nпродукты сгорания сопровождающийся интенивным выделением \nтепла \n                              Q = q*m\nq - удельная теплота сгорания \nm - масса вещества  ");
        this->setFixedSize(761,564);
        QPixmap pix("://picters/topliv.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        sex=3;
    }
    if(index==31){
        ui->pushButton->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->show();
        ui->lineEdit_5->hide();
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->label_5->hide();
        ui->label->setText("Сопротивление");
        ui->label_2->setText("Удельное сопротивление");
        ui->label_3->setText("Длина проводника");
        ui->label_4->setText("Площадь попереч. сеч.");
        indexx=31;
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        QPixmap pix("://picters/opp.png");
        ui->label_6->setPixmap(pix);
        ui->label_6->show();
        ui->radioButton->hide();
        ui->radioButton_2->hide();
        ui->label_7->show();
        ui->label_7->setText("");
        this->setFixedSize(761,564);
        sex=4;
    }

}


void fisic::on_radioButton_2_clicked()
{
    a=1;///минимум
    QPixmap pix("://picters/mininter.png");
    ui->label_6->setPixmap(pix);
    ui->label_7->show();
    ui->label_7->setText("Если разность хода волн равна нечетному числу полуволн, то в \nточке наложения этих волн образуется интерференционный минимум.\nПри сложении колебаний с разной частотой происходит обнуление");
    this->setFixedSize(761,564);
    ui->label_6->show();
}


void fisic::on_radioButton_clicked()
{
    a=2;///максимум
    QPixmap pix("://picters/maxinter.png");
    ui->label_6->setPixmap(pix);
    ui->label_7->show();
    ui->label_7->setText("Разность хода волн равна целому числу длин волн (иначе чётному \nчислу длин полуволн) \nПри сложении колебаний с равной частотой происходит обнуление ");
    this->setFixedSize(761,564);
    ui->label_6->show();
}


void fisic::on_pushButton_2_clicked()
{
    this->close();
    window1->setFixedSize(958,470);
    window1->setWindowTitle("Графики");
    window1->show();
}

void fisic::ras()
{
    if (indexx==2){
        float F = ui->lineEdit->text().toFloat();
        float m = ui->lineEdit_2->text().toFloat();
        float a = ui->lineEdit_3->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            F = a*m;
            ui->lineEdit->setText(QString::number(F));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            m=F/a;
            ui->lineEdit_2->setText(QString::number(m));
        }
        else
        {
            a = F/m;
            ui->lineEdit_3->setText(QString::number(a));
        }
    }else if (indexx==3){
        float p = ui->lineEdit->text().toFloat();
        float g = ui->lineEdit_2->text().toFloat();
        float V = ui->lineEdit_3->text().toFloat();
        float F = ui->lineEdit_4->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            p=F/g/V;
            ui->lineEdit->setText(QString::number(p));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            g=F/p/V;
            ui->lineEdit_2->setText(QString::number(g));
        }
        else if(ui->lineEdit_3->text().isEmpty())
        {
            V=F/p/g;
            ui->lineEdit_3->setText(QString::number(V));
        }

        else(ui->lineEdit_4->text().isEmpty());
        {
            F=p*g*V;
            ui->lineEdit_4->setText(QString::number(F));
        }
    }else if (indexx==4){
        if (a==1){///минимум
            if(ui->lineEdit->text().isEmpty()){
                float k;
                float l = ui->lineEdit_2->text().toFloat();
                float d = ui->lineEdit_3->text().toFloat();
                k=((d/(l/2))-1)/2;
                ui->lineEdit->setText(QString::number(k));

            }else if(ui->lineEdit_2->text().isEmpty()){
                float k = ui->lineEdit->text().toFloat();
                float l;
                float d = ui->lineEdit_3->text().toFloat();
                l=(d/((2*k)+1))*2;
                ui->lineEdit_2->setText(QString::number(l));

            }else if (ui->lineEdit_3->text().isEmpty()) {
                float k = ui->lineEdit->text().toFloat();
                float l = ui->lineEdit_2->text().toFloat();
                float d;
                d=((2*k)+1)*(l/2);
                ui->lineEdit_3->setText(QString::number(d));
            }
        }else if(a==2){///максимум
            if(ui->lineEdit->text().isEmpty()){
                float k;
                float l = ui->lineEdit_2->text().toFloat();
                float d = ui->lineEdit_3->text().toFloat();
                k=d/l;
                ui->lineEdit->setText(QString::number(k));

            }else if(ui->lineEdit_2->text().isEmpty()){
                float k = ui->lineEdit->text().toFloat();
                float l;
                float d = ui->lineEdit_3->text().toFloat();
                l=d/k;
                ui->lineEdit_2->setText(QString::number(l));

            }else if (ui->lineEdit_3->text().isEmpty()) {
                float k = ui->lineEdit->text().toFloat();
                float l = ui->lineEdit_2->text().toFloat();
                float d;
                d=k*l;
                ui->lineEdit_3->setText(QString::number(d));
            }
        }

    }else if (indexx==5){
        float U = ui->lineEdit->text().toFloat();
        float R = ui->lineEdit_2->text().toFloat();
        float I = ui->lineEdit_3->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            U=I*R;
            ui->lineEdit->setText(QString::number(U));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            R=U/I;
            ui->lineEdit_2->setText(QString::number(R));
        }
        else if(ui->lineEdit_3->text().isEmpty())
        {
            I=U/R;
            ui->lineEdit_3->setText(QString::number(I));
        }
    }else if (indexx==6){
        float E_0 = ui->lineEdit->text().toFloat();
        float m = ui->lineEdit_3->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            int c;
            c=3*pow(10,8);
            E_0=m*pow(c,2);
            ui->lineEdit->setText(QString::number(E_0));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            int c;
            c=3*pow(10,8);
            m=E_0/pow(c,2);
            ui->lineEdit_2->setText(QString::number(m));

        }

    }else if (indexx==7){
        float Fam = ui->lineEdit->text().toFloat();
        float B = ui->lineEdit_2->text().toFloat();
        float I = ui->lineEdit_3->text().toFloat();
        float l = ui->lineEdit_4->text().toFloat();
        float a = ui->lineEdit_5->text().toFloat();
        float x = (a * 3.14)/180;
        if(ui->lineEdit->text().isEmpty())
        {
            Fam = B * I * l * sin(x);
            ui->lineEdit->setText(QString::number(Fam));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            B=Fam/(I*l*I*sin(x));
            ui->lineEdit_2->setText(QString::number(B));
        }
        else if(ui->lineEdit_3->text().isEmpty())
        {
            I=Fam/(B*l*sin(x));
            ui->lineEdit_3->setText(QString::number(I));
        }
        else if(ui->lineEdit_4->text().isEmpty())
        {
            l=Fam/(B*I*sin(x));
            ui->lineEdit_4->setText(QString::number(l));
        }
        else if(ui->lineEdit_5->text().isEmpty())
        {
            x=asin(Fam/(B*l*I));
            a=(180*x)/3.14;
            ui->lineEdit_5->setText(QString::number(a));
        }
    }
    else if (indexx==8) {
        float Ek = ui->lineEdit->text().toFloat();
        float m = ui->lineEdit_2->text().toFloat();
        float v = ui->lineEdit_3->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            Ek = (m*v*v)/2;
            ui->lineEdit->setText(QString::number(Ek));

        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            m=(2*Ek)/(v*v);
            ui->lineEdit_2->setText(QString::number(m));
        }
        else if(ui->lineEdit_3->text().isEmpty())
        {
            v=sqrt(2*Ek/(m));
            ui->lineEdit_3->setText(QString::number(v));
        }
    }
    else if (indexx==9) {
        float r1  = ui->lineEdit->text().toFloat();
        float r2 = ui->lineEdit_2->text().toFloat();
        float l = ui->lineEdit_3->text().toFloat();
        float f = ui->lineEdit_4->text().toFloat();
        if(ui->lineEdit_4->text().isEmpty())
        {
            f = ((ui->lineEdit->text().toFloat() * ui->lineEdit_2->text().toFloat()) / pow(ui->lineEdit_3->text().toFloat(), 2));
            ui->lineEdit_4->setText(QString::number(f));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            r2 = ((ui->lineEdit_4->text().toFloat() * pow(ui->lineEdit_3->text().toFloat(),2)) / ui->lineEdit->text().toFloat());
            ui->lineEdit_2->setText(QString::number(r2));
        }
        else if(ui->lineEdit->text().isEmpty())
        {
            r1 = ((ui->lineEdit_4->text().toFloat() * pow(ui->lineEdit_3->text().toFloat(),2)) / ui->lineEdit_2->text().toFloat());
            ui->lineEdit->setText(QString::number(r1));
        }
        else if(ui->lineEdit_3->text().isEmpty())
        {
            l = sqrt((ui->lineEdit->text().toFloat() * ui->lineEdit_2->text().toFloat()) / ui->lineEdit_4->text().toFloat());
            ui->lineEdit_3->setText(QString::number(l));
        }
    }
    else if (indexx==10) {
        float A = ui->lineEdit->text().toFloat();
        float B = ui->lineEdit_2->text().toFloat();
        float v = ui->lineEdit_3->text().toFloat();
        float q = ui->lineEdit_4->text().toFloat();
        float F = ui->lineEdit_5->text().toFloat();
        if (ui->lineEdit->text().isEmpty()){
            A = (asin(F/(q*B*v)))*180/3.14;
            ui->lineEdit->setText(QString::number(A));
        } else if (ui->lineEdit_2->text().isEmpty()) {
            B = F/(sin(A*(3.14/180))*v*q);
            ui->lineEdit_2->setText(QString::number(B));
        } else if (ui->lineEdit_3->text().isEmpty()){
            v = F/(q*B*sin(A*(3.14/180)));
            ui->lineEdit_3->setText(QString::number(v));
        } else if (ui->lineEdit_4->text().isEmpty()) {
            q = F/(B*v*sin(A*(3.14/180)));
            ui->lineEdit_4->setText(QString::number(q));
        } else if (ui->lineEdit_5->text().isEmpty()){
            F = q*B*v*sin(A*(3.14/180));
            ui->lineEdit_5->setText(QString::number(F));
        }
    }
    else if (indexx==11) {
        float V = ui->lineEdit->text().toFloat();
        float T = ui->lineEdit_2->text().toFloat();
        if (ui->lineEdit_2->text().isEmpty()) {
            T = 1/V;
            ui->lineEdit_2->setText(QString::number(T));
        } else if (ui->lineEdit->text().isEmpty()) {
            V = 1/T;
            ui->lineEdit->setText(QString::number(V));
        }
    }
    else if (indexx==12) {
        float p =3.14159;
        float L = ui->lineEdit->text().toFloat();
        float C = ui->lineEdit_2->text().toFloat();
        float T = ui->lineEdit_3->text().toFloat();
        if (ui->lineEdit_3->text().isEmpty()) {
            T=2*p*sqrt(L*C);
            ui->lineEdit_3->setText(QString::number(T));
        } else if (ui->lineEdit_2->text().isEmpty()) {
            float F = T/(2*p);
            C=pow(F,2)/L;
            ui->lineEdit_2->setText(QString::number(C));
        }else if (ui->lineEdit->text().isEmpty()) {
            float F = T/(2*p);
            L=pow(F,2)/C;
            ui->lineEdit->setText(QString::number(L));
        }

    }
    else if (indexx==13) {
        float k = ui->lineEdit_2->text().toFloat();
        float m = ui->lineEdit->text().toFloat();
        float T = ui->lineEdit_3->text().toFloat();
        float pi;
        pi = 3.14159;
        if(ui->lineEdit_2->text().isEmpty())
        {
            k = m/pow(T/(2*pi) , 2);
            ui->lineEdit_2->setText(QString::number(k));
        }
        else if(ui->lineEdit->text().isEmpty())
        {
            m = pow(T/(2*pi) , 2)*k;
            ui->lineEdit->setText(QString::number(m));
        }
        else
        {
            T = 2*pi*sqrt(m/k);
            ui->lineEdit_3->setText(QString::number(T));
        }
    }
    else if (indexx==14) {
        float g = 9.8;
        float h = ui->lineEdit_2->text().toFloat();
        float t = ui->lineEdit->text().toFloat();
        if(ui->lineEdit->text().isEmpty()){
            t = sqrt(2*h/g);
            ui->lineEdit->setText(QString::number(t));
        }
        else
        {
            h = g*pow(t,2)/2;
            ui->lineEdit_2->setText(QString::number(h));
        }
    }
    else if (indexx==15) {
        float g;
        float t = ui->lineEdit->text().toFloat();
        float v = ui->lineEdit_2->text().toFloat();
        g = 9.8;

        if(ui->lineEdit->text().isEmpty()){
            t = v/g;
            ui->lineEdit->setText(QString::number(t));
        }
        else
        {
            v = g*t;
            ui->lineEdit_2->setText(QString::number(v));
        }
    }
    else if (indexx==16) {
        float N = ui->lineEdit->text().toFloat();
        float No = ui->lineEdit_2->text().toFloat();
        float t = ui->lineEdit_3->text().toFloat();
        float T = ui->lineEdit_4->text().toFloat();
        if(ui->lineEdit->text().isEmpty()){
            N = No*pow(2,-t/T);
            ui->lineEdit->setText(QString::number(N));
        }
        else if(ui->lineEdit_2->text().isEmpty()){
            No = N/pow(2,-t/T);
            ui->lineEdit_2->setText(QString::number(No));
        }
        else if(ui->lineEdit_3->text().isEmpty()){
            t = logbase(N/No,2)* -T;
            ui->lineEdit_3->setText(QString::number(t));
        }
        else {
            T = logbase(N/No,2)* -t;
            ui->lineEdit_4->setText(QString::number(T));
        }
    }
    //Длина волны
    else if(indexx==17)
    {
        float T  = ui->lineEdit->text().toFloat();
        float u = ui->lineEdit_2->text().toFloat();
        float lam = ui->lineEdit_3->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            T = lam/u;
            ui->lineEdit->setText(QString::number(T));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            u= lam/T;
            ui->lineEdit_2->setText(QString::number(u));
        }
        else
        {
            lam = u*T;
            ui->lineEdit_3->setText(QString::number(lam));
        }
    }
    //Средняя скорость и ускорение тела
    else  if(indexx==18)
    {
        float S = ui->lineEdit->text().toFloat();
        float t = ui->lineEdit_2->text().toFloat();
        float v = ui->lineEdit_3->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            S = v*t;
            ui->lineEdit->setText(QString::number(S));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            t = S/v;
            ui->lineEdit_2->setText(QString::number(t));
        }
        else
        {
            v = S/t;
            ui->lineEdit_3->setText(QString::number(v));
        }
    }
    //Абсолютная температура
    else   if(indexx==19)
    {
        float t = ui->lineEdit->text().toFloat();
        float T = ui->lineEdit_2->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            t = round(T-273.15);
            ui->lineEdit->setText(QString::number(t));
        }
        else
        {
            T = t+273.15;
            ui->lineEdit_2->setText(QString::number(T));
        }
    }
    //Кол-во вещества
    else  if(indexx==20)
    {
        float m = ui->lineEdit->text().toFloat();
        float M = ui->lineEdit_2->text().toFloat();
        float v = ui->lineEdit_3->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            m = v*M;
            ui->lineEdit->setText(QString::number(m));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            M = m/v;
            ui->lineEdit_2->setText(QString::number(M));
        }
        else
        {
            v = m/M;
            ui->lineEdit_3->setText(QString::number(v));
        }
    }
    //Концентрация молекул(атомов)
    else    if(indexx==21)
    {
        float N = ui->lineEdit->text().toFloat();
        float V = ui->lineEdit_2->text().toFloat();
        float n = ui->lineEdit_3->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            N = n*V;
            ui->lineEdit->setText(QString::number(N));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            V = N/n;
            ui->lineEdit_2->setText(QString::number(V));
        }
        else
        {
            n = N/V;
            ui->lineEdit_3->setText(QString::number(n));
        }
    }
    //Скорость распространения волны
    else   if(indexx==22)
    {
        float lam  = ui->lineEdit->text().toFloat();
        float v = ui->lineEdit_2->text().toFloat();
        float u = ui->lineEdit_3->text().toFloat();
        if(ui->lineEdit->text().isEmpty())
        {
            lam = u/v;
            ui->lineEdit->setText(QString::number(lam));
        }
        else if(ui->lineEdit_2->text().isEmpty())
        {
            v = u/lam;
            ui->lineEdit_2->setText(QString::number(v));
        }
        else
        {
            u = lam*v;
            ui->lineEdit_3->setText(QString::number(u));
        }
    }
    else if (indexx==23){
        float h = ui->lineEdit->text().toFloat();
        float t = ui->lineEdit_2->text().toFloat();
        float g = 9.8;
        if (ui->lineEdit->text().isEmpty()) {
            h = (g*pow(t,2))/2;
            ui->lineEdit->setText(QString::number(h));
        } else if (ui->lineEdit_2->text().isEmpty()){
            t = sqrt((h*2)/g);
            ui->lineEdit_2->setText(QString::number(t));
        }

    }
    else if(indexx==24){
        float s = ui->lineEdit->text().toFloat();
        float v = ui->lineEdit_2->text().toFloat();
        float t = ui->lineEdit_3->text().toFloat();
        if (ui->lineEdit->text().isEmpty()) {
            s=v*t;
            ui->lineEdit->setText(QString::number(s));
        } else if (ui->lineEdit_2->text().isEmpty()){
            v = s/t;
            ui->lineEdit_2->setText(QString::number(v));
        }
        else if (ui->lineEdit_3->text().isEmpty()){
            t = s/v;
            ui->lineEdit_3->setText(QString::number(t));
        }



    }
    else if(indexx==25){
        float e = ui->lineEdit->text().toFloat();
        float m = ui->lineEdit_2->text().toFloat();
        float h = ui->lineEdit_3->text().toFloat();
        if (ui->lineEdit->text().isEmpty()) {
            e=m*h*9.8;
            ui->lineEdit->setText(QString::number(e));
        } else if (ui->lineEdit_2->text().isEmpty()){
            m = e/(h*9.8);
            ui->lineEdit_2->setText(QString::number(m));
        }
        else if (ui->lineEdit_3->text().isEmpty()){
            h = e/(m*9.8);
            ui->lineEdit_3->setText(QString::number(h));
        }
    }
    else if(indexx==26){
        float f = ui->lineEdit->text().toFloat();
        float m = ui->lineEdit_2->text().toFloat();
        if (ui->lineEdit->text().isEmpty()) {
            f=m*9.8;
            ui->lineEdit->setText(QString::number(f));
        }
        else if (ui->lineEdit_2->text().isEmpty()){
            m = f/9.8;
            ui->lineEdit_2->setText(QString::number(m));
        }
    }
    else if(indexx==27){
        float q = ui->lineEdit->text().toFloat();
        float c = ui->lineEdit_2->text().toFloat();
        float m = ui->lineEdit_3->text().toFloat();
        float t1 = ui->lineEdit_4->text().toFloat();
        float t2 = ui->lineEdit_5->text().toFloat();
        if (ui->lineEdit->text().isEmpty()) {
            q=c*m*(t1-t2);
            ui->lineEdit->setText(QString::number(q));
        }
        else if (ui->lineEdit_2->text().isEmpty()){
            c = q/(m*(t1-t2));
            ui->lineEdit_2->setText(QString::number(c));
        }
        else if (ui->lineEdit_3->text().isEmpty()){
            m = q/(c*(t1-t2));
            ui->lineEdit_3->setText(QString::number(m));
        }
        else if (ui->lineEdit_4->text().isEmpty()){
            t1 = (q/(c*m))+t2;
            ui->lineEdit_4->setText(QString::number(t1));
        }
        else if (ui->lineEdit_5->text().isEmpty()){
            t2 = t1-(q/(c*m));
            ui->lineEdit_5->setText(QString::number(t2));
        }
    }
    else if(indexx==28){
        float q = ui->lineEdit->text().toFloat();
        float l = ui->lineEdit_2->text().toFloat();
        float m = ui->lineEdit_3->text().toFloat();
        if (ui->lineEdit->text().isEmpty()) {
            q=l*m;
            ui->lineEdit->setText(QString::number(q));
        }
        else if (ui->lineEdit_2->text().isEmpty()){
            l=q/m;
            ui->lineEdit_2->setText(QString::number(l));
        }
        else if (ui->lineEdit_3->text().isEmpty()){
            m = q/l;
            ui->lineEdit_3->setText(QString::number(m));
        }
    }
    else if(indexx==29){
        float q = ui->lineEdit->text().toFloat();
        float L = ui->lineEdit_2->text().toFloat();
        float m = ui->lineEdit_3->text().toFloat();
        if (ui->lineEdit->text().isEmpty()) {
            q=L*m;
            ui->lineEdit->setText(QString::number(q));
        }
        else if (ui->lineEdit_2->text().isEmpty()){
            L=q/m;
            ui->lineEdit_2->setText(QString::number(L));
        }
        else if (ui->lineEdit_3->text().isEmpty()){
            m = q/L;
            ui->lineEdit_3->setText(QString::number(m));
        }
    }
    else if(indexx==30){
        float e = ui->lineEdit->text().toFloat();
        float qq = ui->lineEdit_2->text().toFloat();
        float m = ui->lineEdit_3->text().toFloat();
        if (ui->lineEdit->text().isEmpty()) {
            e=qq*m;
            ui->lineEdit->setText(QString::number(e));
        }
        else if (ui->lineEdit_2->text().isEmpty()){
            qq=e/m;
            ui->lineEdit_2->setText(QString::number(qq));
        }
        else if (ui->lineEdit_3->text().isEmpty()){
            m = e/qq;
            ui->lineEdit_3->setText(QString::number(m));
        }
    }
    else if(indexx==31){
        float r = ui->lineEdit->text().toFloat();
        float p = ui->lineEdit_2->text().toFloat();
        float l = ui->lineEdit_3->text().toFloat();
        float s = ui->lineEdit_4->text().toFloat();
        if (ui->lineEdit->text().isEmpty()) {
            r=(p*l)/s;
            ui->lineEdit->setText(QString::number(r));
        }
        else if (ui->lineEdit_2->text().isEmpty()){
            p=(r*s)/l;
            ui->lineEdit_2->setText(QString::number(p));
        }
        else if (ui->lineEdit_3->text().isEmpty()){
            l =(r*s)/p ;
            ui->lineEdit_3->setText(QString::number(l));
        }
        else if (ui->lineEdit_4->text().isEmpty()){
            s =(p*l)/r ;
            ui->lineEdit_4->setText(QString::number(s));
        }
    }
}
