#ifndef FISIC_H
#define FISIC_H
#include "graf.h"
#include <string>
#include <QMainWindow>
using namespace std;

namespace Ui {
class fisic;
}

class fisic : public QMainWindow
{
    Q_OBJECT

public:
    explicit fisic(QWidget *parent = nullptr);

    ~fisic();
signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_activated(int index);

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

    void on_pushButton_2_clicked();
    void Calclulate();
    void UpdateLableAndLineInWindow(QString textLabel1, QString textLabel2, QString textLabel3, QString textLabel4, QString textLabel5);
    void UpdateDescription(QPixmap image, QString textLabel);
    void UpdateLineEdit(QString textLineEdit1, QString textLineEdit2, QString textLineEdit3, QString textLineEdit4, QString textLabel5);
    void Error();
    QString FromFloatToString(float value);
    void CheckLineEditIsEmpty(QString text, QString text2, QString text3, QString text4, QString text5);


private:
    Ui::fisic *ui;
    graf *window1;
};

#endif // FISIC_H
