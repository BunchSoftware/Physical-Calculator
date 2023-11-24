#ifndef FISIC_H
#define FISIC_H
#include "graf.h"
#include <string>
#include <QMainWindow>
#include <physical_library.h>
using namespace std;

namespace Ui {
class fisic;
}

class fisic : public QMainWindow
{
    Q_OBJECT

public:
    explicit fisic(QWidget *parent = nullptr);
    Physics physics;

    ~fisic();
signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_activated(int index);

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

    void on_pushButton_2_clicked();
    void ras();
    void UpdateLableAndLineInWindow(QString textLabel1, QString textLabel2, QString textLabel3, QString textLabel4, QString textLabel5);
    void UpdateDescription(QPixmap image, QString textLabel);
    void UpdateLineEdit(QString textLineEdit1, QString textLineEdit2, QString textLineEdit3, QString textLineEdit4, QString textLabel5);


private:
    Ui::fisic *ui;
    graf *window1;
};

#endif // FISIC_H
