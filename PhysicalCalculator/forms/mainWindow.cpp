#include "mainWindow.h"
#include "ui_MainWindow.h"
#include "physicalCalculateForm.h"
#include "plottingForm.h"
#include "calculateForm.h"
#include "Parser.h"
#include "QTabWidget"
#include "familiarization.h"

#include <QUrl>
#include <qdesktopservices.h>
#include "aboutWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowFlag(Qt::CustomizeWindowHint, true);
    setWindowFlag(Qt::WindowMaximizeButtonHint, true);
    setWindowFlag(Qt::WindowMinimizeButtonHint, true);
    ui->setupUi(this);

    ui->label->hide();

    on_calculate_triggered();
    on_physical_calculate_triggered();
    on_plotting_triggered();
    on_math_parser_triggered();
    on_familiarization_triggered();

    ui->tabWidget->setCurrentIndex(0);
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
    ui->tabWidget->addTab(new CalculateForm(), QString(QString::number((ui->tabWidget->count()+1))+ ". " + "Калькулятор").arg(ui->tabWidget->count()+1));
    ui->tabWidget->show();
    ui->label->hide();
}

void MainWindow::on_physical_calculate_triggered()
{
    ui->tabWidget->addTab(new PhysicalCalculateForm(), QString(QString::number((ui->tabWidget->count()+1))+ ". " + "Физический калькулятор").arg(ui->tabWidget->count()+1));
    ui->tabWidget->show();
    ui->label->hide();
}

void MainWindow::on_plotting_triggered()
{
    ui->tabWidget->addTab(new PlottingForm(), QString(QString::number((ui->tabWidget->count()+1))+ ". " + "Построение графиков").arg(ui->tabWidget->count()+1));
    ui->tabWidget->show();
    ui->label->hide();
}

void MainWindow::on_math_parser_triggered()
{
      //ui->tabWidget->addTab(new parser(), QString(QString::number((ui->tabWidget->count()+1))+ ". " + "Математический парсер").arg(ui->tabWidget->count()+1));
      ui->tabWidget->show();
      ui->label->hide();
}

void MainWindow::on_familiarization_triggered()
{
      ui->tabWidget->addTab(new Familiarization(), QString(QString::number((ui->tabWidget->count()+1))+ ". " + "Ознакомление с программой").arg(ui->tabWidget->count()+1));
      ui->tabWidget->show();
      ui->label->hide();
}

void MainWindow::on_close_all_tabs_triggered()
{
    ui->tabWidget->clear();
    ui->label->show();
    ui->tabWidget->hide();
}

void MainWindow::on_exit_triggered()
{
    this->close();
}



void MainWindow::on_report_problem_triggered()
{
   QDesktopServices::openUrl(QUrl("https://github.com/DSD-Games/Physical-Calculator/issues/new"));
}

void MainWindow::on_suggest_feature_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/DSD-Games/Physical-Calculator/issues/new"));
}

void MainWindow::on_get_review_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/DSD-Games/Physical-Calculator/issues/new"));
}

void MainWindow::on_about_documentation_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/DSD-Games/Physical-Calculator/blob/master/Documentation/ru/index.md"));
}

void MainWindow::on_about_programm_triggered()
{
  AboutWindow *aboutWindow = new AboutWindow;
  aboutWindow->exec();
}

void MainWindow::on_last_project_triggered()
{

}

void MainWindow::on_open_project_triggered()
{

}

void MainWindow::on_save_project_triggered()
{

}

void MainWindow::on_close_project_triggered()
{

}

void MainWindow::on_create_project_triggered()
{

}
