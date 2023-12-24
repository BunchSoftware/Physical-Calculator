#include "PhysicalCalculateForm.h"
#include "ui_PhysicalCalculateForm.h"
#include <cstdio>
#include <math.h>
#include <QPixmap>
#include "ErrorForm.h"
#include "CalculateForm.h"
#include <QLineEdit>
int indexChoose;

PhysicalCalculateForm::PhysicalCalculateForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PhysicalCalculateForm)
{
    setWindowTitle("Physical Calculator");
    setWindowIcon(QIcon(":/picters/icon-calculator.png"));

    ui->setupUi(this);

    UpdateLableAndLineInWindow("","","","","");
    UpdateDescription(QPixmap(), "");

    ui->pushButton->hide();
    ui->radioButton->hide();
    ui->radioButton_2->hide();

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
    ui->pushButton->show();
    ui->radioButton->hide();
    ui->radioButton_2->hide();

    UpdateLableAndLineInWindow("","","","","");
    UpdateDescription(QPixmap(), "");

    indexChoose = index;

    if (index==0){
        UpdateLableAndLineInWindow("F","m","a","","");
        UpdateDescription(QPixmap("://picters/zaconNut.png"), "Второй закон Нью́то́на — дифференциальный закон механического \nдвижения, описывающий зависимость ускорения тела от \nравнодействующей всех приложенных к телу сил и массы тела.\nОдин из трёх законов Ньютона. Основной закон динамики.\n            F=ma\nF-  сумма всех сил приложенных к телу, Н.\nm-  масса тела, кг.\na – ускорение тела, 〖м/с〗^2.");
    }
    if(index==1){
        UpdateLableAndLineInWindow("p","q","V","F","");
        UpdateDescription(QPixmap("://picters/zaconArxim.png"), "Закон Архимеда — закон гидростатики и аэростатики: на тело,\nпогружённое в жидкость или газ, действует выталкивающая сила, \nчисленно равная весу объема жидкости или газа, вытесненного телом.\n             F_a= ρgV\nF_a – сила Архимеда, [Н]. \nρ- плотность жидкости или газа, [ 〖кг/м〗^2].\ng – ускорение свободного падения, [ м/с^2].\nV- объем части тела, погруженной в жидкость или газ, [ м^3]. ");
    }if(index==2){
        UpdateLableAndLineInWindow("Порядок спектра","Лямбда","Разность хода","","");
        UpdateDescription(QPixmap(), "");
        on_radioButton_2_clicked();
        ui->radioButton->show();
        ui->radioButton_2->show();
        ui->radioButton_2->toggle();
    }if(index==3){
        UpdateLableAndLineInWindow("U","R","I","","");
        UpdateDescription(QPixmap("://picters/zaconOma.png"), "Сила тока в проводнике прямо пропорциональна напряжению на \nконцах проводника\n           R=  U/I\nR - сопротивление\nU - напряжение\nI – сила тока");
        //QPixmap pix(":/new/prefix1/картинки/silatoka.png");
    }if(index==4){
        UpdateLableAndLineInWindow("E","m","","","");
        UpdateDescription(QPixmap("://picters/otnosilmas.png"), "Увеличение массы при увеличении скорости относительно массы \nтела в покое\n               E_0=〖mc〗^2 \nE_0 - энергия\nm - масса\nc - скорость света");
    }
    if(index==5){
        UpdateLableAndLineInWindow("Fam","B","I","l","a");
        UpdateDescription(QPixmap("://picters/silaAmpera.png"), "Это сила, с которой магнитное поле действует на помещенный в него\nпроводник с током.\n            F=B*I*L*sin ⁡a\nB – магнитное поле\nI – сила тока\nL –длин fпроводника\nsin a – угол падения на магнитное поле");
    }
    if(index==6){
        UpdateLableAndLineInWindow("Ek","m","v","","");
        UpdateDescription(QPixmap("://picters/kinenergia.png"), "Физическая величина, характеризующая состояние тела или системы \nтел по их движению \n              E=  〖mV〗^2/2 \nE – кинетическая энергия \nm – масса тела \nV – скорость тела ");
    }
    if(index==7){
        UpdateLableAndLineInWindow("Заряд 1 тела","Заряд 2 тела","Расстояние между\nтелами","Сила Кулона * 9*10^9","");
        UpdateDescription(QPixmap("://picters/zas.png"), "Величина электрической силы между двумя точечными зарядами в \nвакууме прямо пропорциональна произведению модулей зарядов и\nобратно пропорциональна квадрату расстояния между ними.\nF=k  (q1*q2)/r^2 \nF – сила Кулона \nk -  коэффициент пропорциональности\nq1, q2 - взаимодействующие тела\nr - расстояние между телами");
    }
    if (index==8){
        UpdateLableAndLineInWindow("Угол","Индуктивность (B)","Скорость (v)","Заряд (q)","Сила (F)");
        UpdateDescription(QPixmap("://picters/silalorans.png"), "Сила, с которой магнитное поле действует на заряженную частицу, \nдвижущуюся в этом поле\n          F=q(E +VB)\nq - заряд частицы\nE - напряженность электрического поля\nV - скорость частицы\nB - магнитная индукция");
    }
    if(index==9){
        UpdateLableAndLineInWindow("Частота (V)","Период (Т)","","","");
        UpdateDescription(QPixmap("://picters/chast.png"), "Частота колебаний — число полных колебаний тела за одну секунду \n               v=  1/T \nv – частота колебаний \nT – период колебаний ");
    }
    if(index==10){
        UpdateLableAndLineInWindow("Индуктивность контура","Емкость контура","Колебания в контуре","","");
        UpdateDescription(QPixmap("://picters/zacontomsa.png"), "Формула Томсона — математическое выражение связывающее \nсобственную частоту, индуктивность и ёмкость электрических или \nэлектромагнитных колебаний в электрическом колебательном контуре\n       T₀ = 1/f₀ = 2π√LC = 2π/w₀ = 2π/(1/√LC) = 2π √LC\nf₀ - частота собственных колебаний\nw₀ - угловая частота собственных колебаний\nL – индуктивность\nС – ёмкость");
    }
    if(index==11){
        UpdateLableAndLineInWindow("m","k","T","","");
        UpdateDescription(QPixmap("://picters/mazt.png"), "Период колебания пружинного маятника – зависит от жесткости \nпружины: с увеличением коэффициента жесткости пружины период \nколебания маятника уменьшается\n               T=2*pi*sqrt(m/k)\n               T=2 * √(m*k)\nT – период колебания пружинного маятника\n - постоянная\nm – масса груза\nk – жесткость пружины");
    }
    if(index==12){
        UpdateLableAndLineInWindow("t","h","","","");
        UpdateDescription(QPixmap("://picters/serrr.png"), "");
    }
    if(index==13){
        UpdateLableAndLineInWindow("t","v","","","");
        UpdateDescription(QPixmap("://picters/serrr.png"), "");
    }
    if(index==14){
        UpdateLableAndLineInWindow("N","No","t","T","");
        UpdateDescription(QPixmap("://picters/period.png"), "Время в течении которого количество частиц  и интенсивность \nреакции распада уменьшаются в двое\n             N=N0×(1/2)^t/T\nN0- исходное кол-во вещества \nt- время прошедшее с начала распада \nT- период полураспада ");
    }
    //Длина волны
    if (index==15)
    {
        UpdateLableAndLineInWindow("T ="," u =","lam =","","");
        UpdateDescription(QPixmap("://picters/dlinavoln.png"), "Длина волны, которая проявляется у всех частиц в квантовой \nмеханике согласно корпускулярно-волновому дуализму, и \nопределяющая плотность вероятности обнаружения объекта в \nзаданной точке конфигурационного пространства. Длина волны де \nБройля обратно пропорциональна импульсу частицы\n                   λ= h/p\n λ – длина волны\nh - постоянная планка\np – конечный импульс");
    }
    //Средняя скорость и ускорение тела
    if (index==16)
    {
        UpdateLableAndLineInWindow("S =","t =","v =","","");
        UpdateDescription(QPixmap("://picters/serp.png"), "Отношениее растояние, пройденного тола и времени, затраченого на путь\n            v=S/t\nv-скорость\nS-растояние\nT-время");
    }
    //Абсолютная температура
    if (index==17)
    {
        UpdateLableAndLineInWindow("t =","T =","","","");
        UpdateDescription(QPixmap("://picters/abs.png"), "Это температура измеряеемая в кельвинах\n         T=t+T0\nt-температура в С\nT0=273К");
    }
    //Кол-во вещества
    if (index==18)
    {
        UpdateLableAndLineInWindow("m =","M =","v =","","");
        UpdateDescription(QPixmap("://picters/kolpp.png"), "Кол-во однотипных структурных едениц содержащихся в веществе \n        v=m/M\nm-масса веществ\nM-молярная масса ");
    }
    //Концентрация молекул(атомов)
    if (index==19)
    {
        UpdateLableAndLineInWindow("N =","V =","n =","","");
        UpdateDescription(QPixmap("://picters/kolvesch.png"), "величина, количественно характеризующая содержание компонента \nотносительно всей смеси.\n                       Cм=  m/(M*V)\nCм –молярная концентрация\nm – масса растворенного в растворе вещества\nM – молярная масса растворенного вещества \nV – объем рествора");
    }
    if (index==20)
    {
        UpdateLableAndLineInWindow("λ =","V =","T =","","");
        UpdateDescription(QPixmap("://picters/rasprot.png"), "Расстояние, на которое распространяется волна в еденицу времени\n                    V = λ/T\nλ - длина волны\nT - период колебаний\nV - скорость ее распространения ");
    }
    if(index==21){
        UpdateLableAndLineInWindow("Начальная координата","Время падения","","","");
        UpdateDescription(QPixmap("://picters/kord.png"), "");
    }
    if(index==22){
        UpdateLableAndLineInWindow("Расстояние","Начальная скорость","Время","","");
        UpdateDescription(QPixmap("://picters/dalnost.png"), "");
    }
    if(index==23){
        UpdateLableAndLineInWindow("Потенциальная энергия","Масса","Высота","","");
        UpdateDescription(QPixmap("://picters/dal.png"), "");
    }
    if(index==24){
        UpdateLableAndLineInWindow("Сила тяжести","Масса","","","");
        UpdateDescription(QPixmap("://picters/silataz.png"), "");
    }
    if(index==25){
        UpdateLableAndLineInWindow("Количество теплоты","Теплоемкость","Начальная температура","Конечная температура","");
        UpdateDescription(QPixmap("://picters/koll.png"), "");
    }
    if(index==26){
        UpdateLableAndLineInWindow("Количество теплоты","Удельная теплота плавления","Масса","","");
        UpdateDescription(QPixmap("://picters/plsav.png"), "");
    }
    if(index==27){
        UpdateLableAndLineInWindow("Количество теплоты","Удельная теп. парооб.","Масса","","");
        UpdateDescription(QPixmap("://picters/par.png"), "");
    }
    if(index==28){
        UpdateLableAndLineInWindow("Количество теплоты","Удельная теп. сгорания","Масса","","");
        UpdateDescription(QPixmap("://picters/topliv.png"), "физико-химический процесс перехлда из исходного  вещества в \nпродукты сгорания сопровождающийся интенивным выделением \nтепла \n                              Q = q*m\nq - удельная теплота сгорания \nm - масса вещества  ");
    }
    if(index==29){
        UpdateLableAndLineInWindow("Сопротивление","Удельное сопротивление","Длина проводника","Площадь попереч. сеч.","");
        UpdateDescription(QPixmap("://picters/opp.png"), "");
    }
}

void PhysicalCalculateForm::on_radioButton_2_clicked()
{
    UpdateDescription(QPixmap("://picters/mininter.png"), "Если разность хода волн равна нечетному числу полуволн, то в \nточке наложения этих волн образуется интерференционный минимум.\nПри сложении колебаний с разной частотой происходит обнуление");
}


void PhysicalCalculateForm::on_radioButton_clicked()
{
    UpdateDescription(QPixmap("://picters/maxinter.png"), "Разность хода волн равна целому числу длин волн (иначе чётному \nчислу длин полуволн) \nПри сложении колебаний с равной частотой происходит обнуление ");
}

void PhysicalCalculateForm::Calclulate()
{
    if (indexChoose==0){
        float F = ui->lineEdit->text().toFloat();
        float m = ui->lineEdit_2->text().toFloat();
        float a = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(a*m), FromFloatToString(F/a),FromFloatToString(F/m),"","");
    }else if (indexChoose==1){
        float p = ui->lineEdit->text().toFloat();
        float g = ui->lineEdit_2->text().toFloat();
        float V = ui->lineEdit_3->text().toFloat();
        float F = ui->lineEdit_4->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(F/g/V), FromFloatToString(F/p/V),FromFloatToString(F/p/g),FromFloatToString(p*g*V),"");
    }else if (indexChoose==2){
        float k = ui->lineEdit->text().toFloat();
        float l = ui->lineEdit_2->text().toFloat();
        float d = ui->lineEdit_3->text().toFloat();
        if (ui->radioButton_2->isCheckable()){///минимум
            CheckLineEditIsEmpty(FromFloatToString(((d/(l/2))-1)/2), FromFloatToString((d/((2*k)+1))*2),FromFloatToString(((2*k)+1)*(l/2)),"","");
        }else if(ui->radioButton->isCheckable()){///максимум
            CheckLineEditIsEmpty(FromFloatToString(d/l), FromFloatToString(d/k),FromFloatToString(k*l),"","");
        }
    }else if (indexChoose==3){
        float U = ui->lineEdit->text().toFloat();
        float R = ui->lineEdit_2->text().toFloat();
        float I = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(I*R), FromFloatToString(U/I),FromFloatToString(U/R),"","");
    }else if (indexChoose==4){
        float E_0 = ui->lineEdit->text().toFloat();
        float m = ui->lineEdit_3->text().toFloat();
        int c=3*pow(10,8);
        CheckLineEditIsEmpty(FromFloatToString(m*pow(c,2)), FromFloatToString(E_0/pow(c,2)),"","","");

    }else if (indexChoose==5){
        float Fam = ui->lineEdit->text().toFloat();
        float B = ui->lineEdit_2->text().toFloat();
        float I = ui->lineEdit_3->text().toFloat();
        float l = ui->lineEdit_4->text().toFloat();
        float a = ui->lineEdit_5->text().toFloat();
        float x = (a * 3.14)/180;
        CheckLineEditIsEmpty
                (FromFloatToString(B * I * l * sin(x)),
                 FromFloatToString(Fam/(I*l*I*sin(x))),
                 FromFloatToString(Fam/(B*l*sin(x))),
                 FromFloatToString(Fam/(B*I*sin(x))),
                 FromFloatToString((180 * asin(Fam/(B*l*I)))/3.14f));
    }
    else if (indexChoose==6) {
        float Ek = ui->lineEdit->text().toFloat();
        float m = ui->lineEdit_2->text().toFloat();
        float v = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString((m*v*v)/2), FromFloatToString((2*Ek)/(v*v)),FromFloatToString(sqrt(2*Ek/(m))),"","");
    }
    else if (indexChoose==7) {
        float r1  = ui->lineEdit->text().toFloat();
        float r2 = ui->lineEdit_2->text().toFloat();
        float l = ui->lineEdit_3->text().toFloat();
        float f = ui->lineEdit_4->text().toFloat();
        CheckLineEditIsEmpty
                (FromFloatToString(((r1 * r2) / pow(l, 2))),
                 FromFloatToString(((f * pow(l,2)) / r1)),
                 FromFloatToString(((f * pow(l,2)) / r2)),
                 FromFloatToString(sqrt((r1 * r2) / f)),"");
    }
    else if (indexChoose==8) {
        float A = ui->lineEdit->text().toFloat();
        float B = ui->lineEdit_2->text().toFloat();
        float v = ui->lineEdit_3->text().toFloat();
        float q = ui->lineEdit_4->text().toFloat();
        float F = ui->lineEdit_5->text().toFloat();
        CheckLineEditIsEmpty
                (FromFloatToString((asin(F/(q*B*v)))*180/3.14),
                 FromFloatToString(F/(sin(A*(3.14/180))*v*q)),
                 FromFloatToString(F/(B*v*sin(A*(3.14/180)))),
                 FromFloatToString(q*B*v*sin(A*(3.14/180))),"");
    }
    else if (indexChoose==9) {
        float V = ui->lineEdit->text().toFloat();
        float T = ui->lineEdit_2->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(1/V), FromFloatToString(1/T),"","","");
    }
    else if (indexChoose==10) {
        float p =3.14159;
        float L = ui->lineEdit->text().toFloat();
        float C = ui->lineEdit_2->text().toFloat();
        float T = ui->lineEdit_3->text().toFloat();
        float F = T/(2*p);
        CheckLineEditIsEmpty(FromFloatToString(2*p*sqrt(L*C)), FromFloatToString(pow(F,2)/L),FromFloatToString(pow(F,2)/C),"","");
    }
    else if (indexChoose==11) {
        float k = ui->lineEdit_2->text().toFloat();
        float m = ui->lineEdit->text().toFloat();
        float T = ui->lineEdit_3->text().toFloat();
        float pi = 3.14159;
        CheckLineEditIsEmpty
                (FromFloatToString(m/pow(T/(2*pi) , 2)),
                 FromFloatToString(pow(T/(2*pi) , 2)*k),
                 FromFloatToString(2*pi*sqrt(m/k)),"","");
    }
    else if (indexChoose==12) {
        float g = 9.8;
        float h = ui->lineEdit_2->text().toFloat();
        float t = ui->lineEdit->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(sqrt(2*h/g)), FromFloatToString(g*pow(t,2)/2),"","","");
    }
    else if (indexChoose==13) {
        float g = 9.8;
        float t = ui->lineEdit->text().toFloat();
        float v = ui->lineEdit_2->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(v/g), FromFloatToString(g*t),"","","");
    }
    else if (indexChoose==14) {
        float N = ui->lineEdit->text().toFloat();
        float No = ui->lineEdit_2->text().toFloat();
        float t = ui->lineEdit_3->text().toFloat();
        float T = ui->lineEdit_4->text().toFloat();
        CheckLineEditIsEmpty
                (FromFloatToString(No*pow(2,-t/T)),
                 FromFloatToString(N/pow(2,-t/T)),
                 FromFloatToString(logbase(N/No,2)* -T),
                 FromFloatToString(logbase(N/No,2)* -t),"");
    }
    //Длина волны
    else if(indexChoose==15)
    {
        float T  = ui->lineEdit->text().toFloat();
        float u = ui->lineEdit_2->text().toFloat();
        float lam = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(lam/u), FromFloatToString(lam/T),FromFloatToString(u*T),"","");
    }
    //Средняя скорость и ускорение тела
    else  if(indexChoose==16)
    {
        float S = ui->lineEdit->text().toFloat();
        float t = ui->lineEdit_2->text().toFloat();
        float v = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(v*t), FromFloatToString(S/v),FromFloatToString(S/t),"","");
    }
    //Абсолютная температура
    else   if(indexChoose==17)
    {
        float t = ui->lineEdit->text().toFloat();
        float T = ui->lineEdit_2->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(round(T-273.15)), FromFloatToString(t+273.15),"","","");
    }
    //Кол-во вещества
    else  if(indexChoose==18)
    {
        float m = ui->lineEdit->text().toFloat();
        float M = ui->lineEdit_2->text().toFloat();
        float v = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(v*M), FromFloatToString(m/v),FromFloatToString(m/M),"","");
    }
    //Концентрация молекул(атомов)
    else    if(indexChoose==19)
    {
        float N = ui->lineEdit->text().toFloat();
        float V = ui->lineEdit_2->text().toFloat();
        float n = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(n*V), FromFloatToString(N/n),FromFloatToString(N/V),"","");
    }
    //Скорость распространения волны
    else  if(indexChoose==20)
    {
        float lam  = ui->lineEdit->text().toFloat();
        float v = ui->lineEdit_2->text().toFloat();
        float u = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(u/v), FromFloatToString(u/lam),FromFloatToString(lam*v),"","");
    }
    else if (indexChoose==21){
        float h = ui->lineEdit->text().toFloat();
        float t = ui->lineEdit_2->text().toFloat();
        float g = 9.8;
        CheckLineEditIsEmpty(FromFloatToString((g*pow(t,2))/2), FromFloatToString(sqrt((h*2)/g)),"","","");
    }
    else if(indexChoose==22){
        float s = ui->lineEdit->text().toFloat();
        float v = ui->lineEdit_2->text().toFloat();
        float t = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(v*t), FromFloatToString(s/t),FromFloatToString(s/v),"","");
    }
    else if(indexChoose==23){
        float e = ui->lineEdit->text().toFloat();
        float m = ui->lineEdit_2->text().toFloat();
        float h = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(m*h*9.8), FromFloatToString(e/(h*9.8)),FromFloatToString(e/(m*9.8)),"","");
    }
    else if(indexChoose==24){
        float f = ui->lineEdit->text().toFloat();
        float m = ui->lineEdit_2->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(m*9.8), FromFloatToString(f/9.8),"","","");
    }
    else if(indexChoose==25){
        float q = ui->lineEdit->text().toFloat();
        float c = ui->lineEdit_2->text().toFloat();
        float m = ui->lineEdit_3->text().toFloat();
        float t1 = ui->lineEdit_4->text().toFloat();
        float t2 = ui->lineEdit_5->text().toFloat();
        CheckLineEditIsEmpty
                (FromFloatToString(c*m*(t1-t2)),
                 FromFloatToString(q/(m*(t1-t2))),
                 FromFloatToString(q/(c*(t1-t2))),
                 FromFloatToString((q/(c*m))+t2),
                 FromFloatToString(t1-(q/(c*m))));
    }
    else if(indexChoose==26){
        float q = ui->lineEdit->text().toFloat();
        float l = ui->lineEdit_2->text().toFloat();
        float m = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(l*m), FromFloatToString(q/m),FromFloatToString(q/l),"","");
    }
    else if(indexChoose==27){
        float q = ui->lineEdit->text().toFloat();
        float L = ui->lineEdit_2->text().toFloat();
        float m = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(L*m), FromFloatToString(q/m),FromFloatToString(q/L),"","");
    }
    else if(indexChoose==28){
        float e = ui->lineEdit->text().toFloat();
        float qq = ui->lineEdit_2->text().toFloat();
        float m = ui->lineEdit_3->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString(qq*m), FromFloatToString(e/m),FromFloatToString(e/qq),"","");
    }
    else if(indexChoose==29){
        float r = ui->lineEdit->text().toFloat();
        float p = ui->lineEdit_2->text().toFloat();
        float l = ui->lineEdit_3->text().toFloat();
        float s = ui->lineEdit_4->text().toFloat();
        CheckLineEditIsEmpty(FromFloatToString((p*l)/s), FromFloatToString((r*s)/l),FromFloatToString((r*s)/p),FromFloatToString((p*l)/r),"");
    }
}
void PhysicalCalculateForm::UpdateLableAndLineInWindow(QString textLabel1, QString textLabel2, QString textLabel3, QString textLabel4, QString textLabel5){
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
void PhysicalCalculateForm::UpdateLineEdit(QString textLineEdit1, QString textLineEdit2, QString textLineEdit3, QString textLineEdit4, QString textLineEdit5){
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
QString PhysicalCalculateForm::FromFloatToString(float value){
    return QString::number(value);
}
void PhysicalCalculateForm::CheckLineEditIsEmpty(QString text, QString text2, QString text3, QString text4, QString text5){

    if (ui->lineEdit->text().isEmpty()) {
        ui->lineEdit->setText(text);
    }
    else if (ui->lineEdit_2->text().isEmpty()){
        ui->lineEdit_2->setText(text2);
    }
    else if (ui->lineEdit_3->text().isEmpty()){
        ui->lineEdit_3->setText(text3);
    }
    else if (ui->lineEdit_4->text().isEmpty()){
        ui->lineEdit_4->setText(text4);
    }
    else if (ui->lineEdit_5->text().isEmpty()){
        ui->lineEdit_4->setText(text5);
    }
}
