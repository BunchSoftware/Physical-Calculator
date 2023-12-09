#ifndef ERRORFORM_H
#define ERRORFORM_H

#include <QDialog>

namespace Ui {
class ErrorForm;
}

class ErrorForm : public QDialog
{
    Q_OBJECT

public:
    explicit ErrorForm(QWidget *parent = nullptr);
    ~ErrorForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ErrorForm *ui;
};

#endif // DIALOG_H
