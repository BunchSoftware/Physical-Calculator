#ifndef PLOTTINGFORM_H
#define PLOTTINGFORM_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class PlottingForm;
}

class PlottingForm : public QWidget
{
    Q_OBJECT

public:
    explicit PlottingForm(QWidget *parent = nullptr);
    ~PlottingForm();
signals:
    void PlottingFormWindow();



private slots:
    void on_pushButton_clicked();
    void TimerSlot();

    void on_comboBox_activated(int index);

private:
    Ui::PlottingForm *ui;
    double xBegin , xEnd,h,X;
    int N;
    QVector<double> x,y;
    QTimer *timer;
    int time;
};

#endif // GRAF_H
