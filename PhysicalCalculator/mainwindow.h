#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_tabWidget_tabCloseRequested(int index);

  void on_calculate_triggered();

  void on_physical_calculate_triggered();

  void on_plotting_triggered();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
