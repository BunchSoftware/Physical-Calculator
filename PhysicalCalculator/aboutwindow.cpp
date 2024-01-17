#include "aboutwindow.h"
#include "ui_aboutwindow.h"

AboutWindow::AboutWindow(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::AboutWindow)
{
  setWindowFlag(Qt::CustomizeWindowHint, true);
  setWindowFlag(Qt::WindowMaximizeButtonHint, false);
  setWindowFlag(Qt::WindowMinimizeButtonHint, false);
  setWindowFlag(Qt::WindowContextHelpButtonHint, false);
  setWindowFlag(Qt::WindowCloseButtonHint, true);
  QPixmap pm = QPixmap(1,1);
  pm.fill(QColor(0,0,0,0));
  setWindowIcon(QIcon(pm));
  ui->setupUi(this);
}

AboutWindow::~AboutWindow()
{
  delete ui;
}

void AboutWindow::on_pushButton_clicked()
{
    this->close();

}
