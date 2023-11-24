#include "fisic.h"
#include "ui_fisic.h"
#include <cstdio>
#include <math.h>
#include <QPixmap>
#include "dialog.h"

#include "mainwindow.h"
#include <physical_library.h>
int indexx;
int a;
int sex;

fisic::fisic(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fisic)

{
    ui->setupUi(this);

    UpdateLableAndLineInWindow("","","","","");

    ui->pushButton->hide();
    ui->pushButton_2->show();
    ui->radioButton->hide();
    ui->radioButton_2->hide();
    ui->label_6->hide();
    ui->label_7->hide();

   this->setFixedSize(760,565);

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
    ui->pushButton->show();
    ui->pushButton_2->show();
    ui->radioButton->hide();
    ui->radioButton_2->hide();
    ui->label_6->hide();
    ui->label_7->hide();

    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");

    indexx = index;
    this->setFixedSize(760,565);

    if(index==0){
        UpdateLableAndLineInWindow("","","","","");
        UpdateDescription(QPixmap(), "");
        ui->pushButton->hide();
        sex=0;
        this->setFixedSize(250,390);
    }if(index==1){
        this->close();
        UpdateLableAndLineInWindow("","","","","");
        UpdateDescription(QPixmap(), "");
        ui->pushButton->hide();
        emit firstWindow();

    }if (index==2){
        UpdateLableAndLineInWindow("F","m","a","","");
        UpdateDescription(QPixmap("://picters/zaconNut.png"), "Второй закон Нью́то́на — дифференциальный закон механического \nдвижения, описывающий зависимость ускорения тела от \nравнодействующей всех приложенных к телу сил и массы тела.\nОдин из трёх законов Ньютона. Основной закон динамики.\n            F=ma\nF-  сумма всех сил приложенных к телу, Н.\nm-  масса тела, кг.\na – ускорение тела, 〖м/с〗^2.");
        sex=3;
    }if(index==3){
        UpdateLableAndLineInWindow("p","q","V","F","");
        UpdateDescription(QPixmap("://picters/zaconArxim.png"), "Закон Архимеда — закон гидростатики и аэростатики: на тело,\nпогружённое в жидкость или газ, действует выталкивающая сила, \nчисленно равная весу объема жидкости или газа, вытесненного телом.\n             F_a= ρgV\nF_a – сила Архимеда, [Н]. \nρ- плотность жидкости или газа, [ 〖кг/м〗^2].\ng – ускорение свободного падения, [ м/с^2].\nV- объем части тела, погруженной в жидкость или газ, [ м^3]. ");
        sex=4;
    }if(index==4){
        UpdateLableAndLineInWindow("порядок спектра","лямбда","разность хода","","");
        UpdateDescription(QPixmap(), "");
        ui->radioButton->show();
        ui->radioButton_2->show();
        sex=3;
        this->setFixedSize(250,565);
    }if(index==5){
        UpdateLableAndLineInWindow("U","R","I","","");
        UpdateDescription(QPixmap("://picters/zaconOma.png"), "Сила тока в проводнике прямо пропорциональна напряжению на \nконцах проводника\n           R=  U/I\nR - сопротивление\nU - напряжение\nI – сила тока");
        //QPixmap pix(":/new/prefix1/картинки/silatoka.png");
        sex=3;
    }if(index==6){
        UpdateLableAndLineInWindow("E","m","","","");
        UpdateDescription(QPixmap("://picters/otnosilmas.png"), "Увеличение массы при увеличении скорости относительно массы \nтела в покое\n               E_0=〖mc〗^2 \nE_0 - энергия\nm - масса\nc - скорость света");
        sex=2;
    }
    if(index==7){
        UpdateLableAndLineInWindow("Fam","B","I","l","a");
        UpdateDescription(QPixmap("://picters/silaAmpera.png"), "Это сила, с которой магнитное поле действует на помещенный в него\nпроводник с током.\n            F=B*I*L*sin ⁡a\nB – магнитное поле\nI – сила тока\nL –длин fпроводника\nsin a – угол падения на магнитное поле");
        sex=5;
    }
    if(index==8){
        UpdateLableAndLineInWindow("Ek","m","v","","");
        UpdateDescription(QPixmap("://picters/kinenergia.png"), "Физическая величина, характеризующая состояние тела или системы \nтел по их движению \n              E=  〖mV〗^2/2 \nE – кинетическая энергия \nm – масса тела \nV – скорость тела ");
        sex=3;
    }
    if(index==9){
        UpdateLableAndLineInWindow("Заряд 1 тела","Заряд 2 тела","Расстояние между\nтелами","Сила Кулона * 9*10^9","");
        UpdateDescription(QPixmap("://picters/zas.png"), "Величина электрической силы между двумя точечными зарядами в \nвакууме прямо пропорциональна произведению модулей зарядов и\nобратно пропорциональна квадрату расстояния между ними.\nF=k  (q1*q2)/r^2 \nF – сила Кулона \nk -  коэффициент пропорциональности\nq1, q2 - взаимодействующие тела\nr - расстояние между телами");
        sex=4;
    }
    if (index==10){
        UpdateLableAndLineInWindow("Угол","Индуктивность (B)","Скорость (v)","Заряд (q)","Сила (F)");
        UpdateDescription(QPixmap("://picters/silalorans.png"), "Сила, с которой магнитное поле действует на заряженную частицу, \nдвижущуюся в этом поле\n          F=q(E +VB)\nq - заряд частицы\nE - напряженность электрического поля\nV - скорость частицы\nB - магнитная индукция");
        sex=5;
    }
    if(index==11){
        UpdateLableAndLineInWindow("Частота (V)","Период (Т)","","","");
        UpdateDescription(QPixmap("://picters/chast.png"), "Частота колебаний — число полных колебаний тела за одну секунду \n               v=  1/T \nv – частота колебаний \nT – период колебаний ");
        sex=2;
    }
    if(index==12){
        UpdateLableAndLineInWindow("индуктивность контура","емкость контура","колебания в контуре","","");
        UpdateDescription(QPixmap("://picters/zacontomsa.png"), "Формула Томсона — математическое выражение связывающее \nсобственную частоту, индуктивность и ёмкость электрических или \nэлектромагнитных колебаний в электрическом колебательном контуре\n       T₀ = 1/f₀ = 2π√LC = 2π/w₀ = 2π/(1/√LC) = 2π √LC\nf₀ - частота собственных колебаний\nw₀ - угловая частота собственных колебаний\nL – индуктивность\nС – ёмкость");
        sex=3;
    }
    if(index==13){
        UpdateLableAndLineInWindow("m","k","T","","");
        UpdateDescription(QPixmap("://picters/mazt.png"), "Период колебания пружинного маятника – зависит от жесткости \nпружины: с увеличением коэффициента жесткости пружины период \nколебания маятника уменьшается\n               T=2*pi*sqrt(m/k)\n               T=2 * √(m*k)\nT – период колебания пружинного маятника\n - постоянная\nm – масса груза\nk – жесткость пружины");
        sex=3;
    }
    if(index==14){
        UpdateLableAndLineInWindow("t","h","","","");
        UpdateDescription(QPixmap("://picters/serrr.png"), "");
        sex=2;
    }
    if(index==15){
        UpdateLableAndLineInWindow("t","v","","","");
        UpdateDescription(QPixmap("://picters/serrr.png"), "");
    }
    if(index==16){
        UpdateLableAndLineInWindow("N","No","t","T","");
        UpdateDescription(QPixmap("://picters/period.png"), "Время в течении которого количество частиц  и интенсивность \nреакции распада уменьшаются в двое\n             N=N0×(1/2)^t/T\nN0- исходное кол-во вещества \nt- время прошедшее с начала распада \nT- период полураспада ");
        sex=4;
    }
    //Длина волны
    if (index==17)
    {
        UpdateLableAndLineInWindow("T ="," u =","lam =","","");
        UpdateDescription(QPixmap("://picters/dlinavoln.png"), "длина волны, которая проявляется у всех частиц в квантовой \nмеханике согласно корпускулярно-волновому дуализму, и \nопределяющая плотность вероятности обнаружения объекта в \nзаданной точке конфигурационного пространства. Длина волны де \nБройля обратно пропорциональна импульсу частицы\n                   λ= h/p\n λ – длина волны\nh - постоянная планка\np – конечный импульс");
        sex=3;
    }
    //Средняя скорость и ускорение тела
    if (index==18)
    {
        UpdateLableAndLineInWindow("S =","t =","v =","","");
        UpdateDescription(QPixmap("://picters/serp.png"), "Отношениее растояние, пройденного тола и времени, затраченого на путь\n            v=S/t\nv-скорость\nS-растояние\nT-время");
        sex=3;
    }
    //Абсолютная температура
    if (index==19)
    {
        UpdateLableAndLineInWindow("t =","T =","","","");
        UpdateDescription(QPixmap("://picters/abs.png"), "Это температура измеряеемая в кельвинах\n         T=t+T0\nt-температура в С\nT0=273К");
        sex=2;
    }
    //Кол-во вещества
    if (index==20)
    {
        UpdateLableAndLineInWindow("m =","M =","v =","","");
        UpdateDescription(QPixmap("://picters/kolpp.png"), "Кол-во однотипных структурных едениц содержащихся в веществе \n        v=m/M\nm-масса веществ\nM-молярная масса ");
        sex=3;
    }
    //Концентрация молекул(атомов)
    if (index==21)
    {
        UpdateLableAndLineInWindow("N =","V =","n =","","");
        UpdateDescription(QPixmap("://picters/kolvesch.png"), "величина, количественно характеризующая содержание компонента \nотносительно всей смеси.\n                       Cм=  m/(M*V)\nCм –молярная концентрация\nm – масса растворенного в растворе вещества\nM – молярная масса растворенного вещества \nV – объем рествора");
        sex=3;
    }
    if (index==22)
    {
        UpdateLableAndLineInWindow("λ =","V =","T =","","");
        UpdateDescription(QPixmap("://picters/rasprot.png"), "расстояние, на которое распространяется волна в еденицу времени\n                    V = λ/T\nλ - длина волны\nT - период колебаний\nV - скорость ее распространения ");
        sex=3;
    }
    if(index==23){
        UpdateLableAndLineInWindow("Начальная координата","Время падения","","","");
        UpdateDescription(QPixmap("://picters/kord.png"), "");
        sex=2;
    }
    if(index==24){
        UpdateLableAndLineInWindow("Расстояние","Начальная скорость","Время","","");
        UpdateDescription(QPixmap("://picters/dalnost.png"), "");
        sex=3;
    }
    if(index==25){
        UpdateLableAndLineInWindow("Потенциальная энергия","Масса","Высота","","");
        UpdateDescription(QPixmap("://picters/dal.png"), "");
        sex=3;
    }
    if(index==26){
        UpdateLableAndLineInWindow("Сила тяжести","Масса","","","");
        UpdateDescription(QPixmap("://picters/silataz.png"), "");
        sex=2;
    }
    if(index==27){
        UpdateLableAndLineInWindow("Количество теплоты","Теплоемкость","Начальная температура","Конечная температура","");
        UpdateDescription(QPixmap("://picters/koll.png"), "");
        sex=5;
    }
    if(index==28){
        UpdateLableAndLineInWindow("Количество теплоты","Удельная теплота плавления","Масса","","");
        UpdateDescription(QPixmap("://picters/plsav.png"), "");
        sex=3;
    }
    if(index==29){
        UpdateLableAndLineInWindow("Количество теплоты","Удельная теп. парооб.","Масса","","");
        UpdateDescription(QPixmap("://picters/par.png"), "");
        sex=3;
    }
    if(index==30){
        UpdateLableAndLineInWindow("Количество теплоты","Удельная теп. сгорания","Масса","","");
        UpdateDescription(QPixmap("://picters/topliv.png"), "физико-химический процесс перехлда из исходного  вещества в \nпродукты сгорания сопровождающийся интенивным выделением \nтепла \n                              Q = q*m\nq - удельная теплота сгорания \nm - масса вещества  ");
        sex=3;
    }
    if(index==31){
        UpdateLableAndLineInWindow("Сопротивление","Удельное сопротивление","Длина проводника","Площадь попереч. сеч.","");
        UpdateDescription(QPixmap("://picters/opp.png"), "");
        sex=4;
    }

}


void fisic::on_radioButton_2_clicked()
{
    a=1;///минимум
    UpdateDescription(QPixmap("://picters/mininter.png"), "Если разность хода волн равна нечетному числу полуволн, то в \nточке наложения этих волн образуется интерференционный минимум.\nПри сложении колебаний с разной частотой происходит обнуление");
}


void fisic::on_radioButton_clicked()
{
    a=2;///максимум
    UpdateDescription(QPixmap("://picters/maxinter.png"), "Разность хода волн равна целому числу длин волн (иначе чётному \nчислу длин полуволн) \nПри сложении колебаний с равной частотой происходит обнуление ");
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

void fisic::UpdateLableAndLineInWindow(QString textLabel1, QString textLabel2, QString textLabel3, QString textLabel4, QString textLabel5){
    if(textLabel1.isEmpty()){
     ui->lineEdit->hide();
     ui->label->hide();
    }
    else{
    ui->label->show();
    ui->label->setText(textLabel1);
    ui->lineEdit->show();
    }
    if(textLabel2.isEmpty()){
    ui->lineEdit_2->hide();
     ui->label_2->hide();
    }
else{
ui->label_2->show();
    ui->label_2->setText(textLabel2);
ui->lineEdit_2->show();
}
    if(textLabel3.isEmpty()){
    ui->lineEdit_3->hide();
    ui->label_3->hide();
    }
else{
ui->label_3->show();
    ui->label_3->setText(textLabel3);
ui->lineEdit_3->show();
}
    if(textLabel4.isEmpty()){
    ui->lineEdit_4->hide();
    ui->label_4->hide();
    }
else{
ui->label_4->show();
    ui->label_4->setText(textLabel4);
ui->lineEdit_4->show();
}
    if(textLabel5.isEmpty()){
    ui->lineEdit_5->hide();
    ui->label_5->hide();
    }
else{
ui->label_5->show();
    ui->label_5->setText(textLabel5);
ui->lineEdit_5->show();
}
}
void fisic::UpdateDescription(QPixmap image, QString textLabel){
    if(image.isNull()){
      ui->label_6->hide();
    }
    else{
      ui->label_6->show();
      ui->label_6->setPixmap(image);
    }
    if(textLabel.isEmpty()){
        ui->label_7->hide();
    }
    else{
      ui->label_7->show();
      ui->label_7->setText(textLabel);
    }
    ui->label_7->show();
}
void fisic::UpdateLineEdit(QString textLineEdit1, QString textLineEdit2, QString textLineEdit3, QString textLineEdit4, QString textLineEdit5){
    if (ui->lineEdit->text().isEmpty()) {
        ui->lineEdit->setText(textLineEdit1);
    }
    else if (ui->lineEdit_2->text().isEmpty()){
        ui->lineEdit_2->setText(textLineEdit2);
    }
    else if (ui->lineEdit_3->text().isEmpty()){
        ui->lineEdit_3->setText(textLineEdit3);
    }
    else if (ui->lineEdit_4->text().isEmpty()){
       ui->lineEdit_4->setText(textLineEdit4);
    }
    else if(ui->lineEdit_5->text().isEmpty()){
       ui->lineEdit_5->setText(textLineEdit5);
    }
}
