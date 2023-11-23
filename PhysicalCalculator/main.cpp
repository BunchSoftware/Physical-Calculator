#include "mainwindow.h"
#include "fisic.h"
#include "graf.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(320,598);
    w.setWindowTitle("Калькулятор");
    w.show();
    return a.exec();

}
