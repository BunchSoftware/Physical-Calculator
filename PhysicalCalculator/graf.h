#ifndef GRAF_H
#define GRAF_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class graf;
}

class graf : public QWidget
{
    Q_OBJECT

public:
    explicit graf(QWidget *parent = nullptr);
    ~graf();
signals:
    void grafWindow();



private slots:
    void on_pushButton_clicked();
    void TimerSlot();

    void on_comboBox_activated(int index);

    void on_pushButton_2_clicked();

private:
    Ui::graf *ui;
    double xBegin , xEnd,h,X;
    int N;
    QVector<double> x,y;
    QTimer *timer;
    int time;

};

#endif // GRAF_H
