#ifndef FAMILIARIZATION_H
#define FAMILIARIZATION_H

#include <QWidget>

namespace Ui {
  class Familiarization;
}

class Familiarization : public QWidget
{
  Q_OBJECT

public:
  explicit Familiarization(QWidget *parent = nullptr);
  ~Familiarization();

private:
  Ui::Familiarization *ui;
};

#endif // FAMILIARIZATION_H
