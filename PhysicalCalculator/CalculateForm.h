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
    void operations();

private:
    Ui::CalculateForm *ui;
};
#endif // MAINWINDOW_H
