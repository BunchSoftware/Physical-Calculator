#ifndef CALCULATEFORM_H
#define CALCULATEFORM_H

#include <QMainWindow>
#include "PhysicalCalculateForm.h"
#include "MainWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CalculateForm; }
QT_END_NAMESPACE

class CalculateForm : public QMainWindow
{
    Q_OBJECT

public:
    CalculateForm(QWidget *parent = nullptr);
    ~CalculateForm();

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
    Ui::CalculateForm *ui;
};
#endif // MAINWINDOW_H
