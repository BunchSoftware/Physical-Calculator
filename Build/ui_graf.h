/********************************************************************************
** Form generated from reading UI file 'graf.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAF_H
#define UI_GRAF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_graf
{
public:
    QCustomPlot *widget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *graf)
    {
        if (graf->objectName().isEmpty())
            graf->setObjectName(QString::fromUtf8("graf"));
        graf->resize(958, 470);
        widget = new QCustomPlot(graf);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(310, 0, 571, 411));
        lineEdit = new QLineEdit(graf);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 100, 113, 20));
        lineEdit_2 = new QLineEdit(graf);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(30, 150, 113, 20));
        lineEdit_3 = new QLineEdit(graf);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 200, 113, 20));
        comboBox = new QComboBox(graf);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 50, 131, 22));
        label = new QLabel(graf);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 100, 47, 14));
        label_2 = new QLabel(graf);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 150, 47, 14));
        label_3 = new QLabel(graf);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 200, 47, 14));
        pushButton_2 = new QPushButton(graf);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 50, 131, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));
        pushButton = new QPushButton(graf);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 270, 261, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        retranslateUi(graf);

        QMetaObject::connectSlotsByName(graf);
    } // setupUi

    void retranslateUi(QWidget *graf)
    {
        graf->setWindowTitle(QCoreApplication::translate("graf", "Form", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("graf", "\320\277\320\260\321\200\320\260\320\261\320\276\320\273\320\260", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("graf", "\320\273\320\270\320\275\320\265\320\271\320\275\320\260\321\217", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("graf", "\321\215\321\214\320\261\320\273\320\265\320\274\320\260", nullptr));

        label->setText(QCoreApplication::translate("graf", "a", nullptr));
        label_2->setText(QCoreApplication::translate("graf", "b", nullptr));
        label_3->setText(QCoreApplication::translate("graf", "c", nullptr));
        pushButton_2->setText(QCoreApplication::translate("graf", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pushButton->setText(QCoreApplication::translate("graf", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graf: public Ui_graf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAF_H
