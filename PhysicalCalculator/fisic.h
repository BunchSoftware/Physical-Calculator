#ifndef FISIC_H
#define FISIC_H
#include "graf.h"

#include <QMainWindow>


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
    void ras();

private:
    Ui::fisic *ui;
    graf *window1;
};

#endif // FISIC_H
