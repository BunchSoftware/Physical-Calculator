#include "familiarization.h"
#include "ui_familiarization.h"

Familiarization::Familiarization(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Familiarization)
{
  ui->setupUi(this);
}

Familiarization::~Familiarization()
{
  delete ui;
}
