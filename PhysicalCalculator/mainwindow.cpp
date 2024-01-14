#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "PhysicalCalculateForm.h"
#include "PlottingForm.h"
#include "CalculateForm.h"
#include "parser.h"
#include "QTabWidget"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowFlag(Qt::CustomizeWindowHint, true);
    setWindowFlag(Qt::WindowMaximizeButtonHint, true);
    setWindowFlag(Qt::WindowMinimizeButtonHint, true);
    ui->setupUi(this);

    ui->label->hide();

    ui->tabWidget->addTab(new CalculateForm(), QString("Калькулятор").arg(ui->tabWidget->count()+1));
    ui->tabWidget->addTab(new PhysicalCalculateForm(), QString("Физический калькулятор").arg(ui->tabWidget->count()+1));
    ui->tabWidget->addTab(new PlottingForm(), QString("Построение графиков").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(0);
//    ui->tabWidget->addTab(new parser(), QString("123").arg(ui->tabWidget->count()+1));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
    if(ui->tabWidget->count() == 0)
    {
        ui->label->show();
        ui->tabWidget->hide();
    }
}

void MainWindow::on_calculate_triggered()
{
    ui->tabWidget->addTab(new CalculateForm(), QString("Калькулятор").arg(ui->tabWidget->count()+1));
    ui->tabWidget->show();
    ui->label->hide();
}

void MainWindow::on_physical_calculate_triggered()
{
    ui->tabWidget->addTab(new PhysicalCalculateForm(), QString("Физический калькулятор").arg(ui->tabWidget->count()+1));
    ui->tabWidget->show();
    ui->label->hide();
}

void MainWindow::on_plotting_triggered()
{
    ui->tabWidget->addTab(new PlottingForm(), QString("Построение графиков").arg(ui->tabWidget->count()+1));
    ui->tabWidget->show();
    ui->label->hide();
}
