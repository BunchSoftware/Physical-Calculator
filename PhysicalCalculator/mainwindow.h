#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fisic.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void operations();
    void math_operations();

    void on_pushButton_ravn_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_fisic_cal_clicked();

    void on_pushButton_C_2_clicked();

private:
    Ui::MainWindow *ui;
    fisic *window;
};
#endif // MAINWINDOW_H
