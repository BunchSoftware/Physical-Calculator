#ifndef PARSER_H
#define PARSER_H

#include <QWidget>

namespace Ui {
  class parser;
}

class parser : public QWidget
{
  Q_OBJECT

public:
  explicit parser(QWidget *parent = nullptr);
  ~parser();

private slots:
  void on_pushButton_clicked();

private:
  Ui::parser *ui;
};

#endif // PARSER_H
