#ifndef PHYSICALCALCULATEFORM_H
#define PHYSICALCALCULATEFORM_H

#include "plottingForm.h"
#include <QMainWindow>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFile>
namespace Ui {
class PhysicalCalculateForm;
}

class PhysicalCalculateForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit PhysicalCalculateForm(QWidget *parent = nullptr);
    ~PhysicalCalculateForm();
signals:
    void PhysicalCalculateWindow();

private slots:

    void on_pushButton_clicked();

    void on_comboBox_activated(int index);

    void Calclulate();
    void UpdateLableAndLineInWindow(QJsonArray arrayData);
    void UpdateDescription(QPixmap image, QString textLabel);
    void Error();
    QString FromFloatToString(float value);
    void CheckLineEditIsEmpty(std::vector<double> result);
    QJsonObject GetJsonObject(QString path);


private:
    Ui::PhysicalCalculateForm *ui;
};

#endif // FISIC_H
