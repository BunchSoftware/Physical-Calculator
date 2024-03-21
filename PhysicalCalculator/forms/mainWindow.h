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

  void on_exit_triggered();

  void on_math_parser_triggered();

  void on_familiarization_triggered();

  void on_close_all_tabs_triggered();

  void on_report_problem_triggered();

  void on_suggest_feature_triggered();

  void on_get_review_triggered();

  void on_about_documentation_triggered();

  void on_about_programm_triggered();

  void on_last_project_triggered();

  void on_open_project_triggered();

  void on_save_project_triggered();

  void on_close_project_triggered();

  void on_create_project_triggered();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
