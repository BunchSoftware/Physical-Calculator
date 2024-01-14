#include "CalculateForm.h"
#include "PhysicalCalculateForm.h"
#include "PlottingForm.h"
#include <QApplication>
#include <QFile>

int main(int argc, char **argv)
{
    QApplication a(argc, argv);

//    QFile file(":/Combinear.qss");
//    file.open(QFile::ReadOnly);
//    QString styleSheet { QLatin1String(file.readAll()) };
//    a.setStyleSheet(styleSheet);

    MainWindow w;
    w.show();
    return a.exec();
}
