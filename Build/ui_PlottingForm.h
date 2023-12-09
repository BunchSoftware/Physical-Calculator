/********************************************************************************
** Form generated from reading UI file 'PlottingForm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTTINGFORM_H
#define UI_PLOTTINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_PlottingForm
{
public:
    QGridLayout *gridLayout_2;
    QCustomPlot *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *PlottingForm)
    {
        if (PlottingForm->objectName().isEmpty())
            PlottingForm->setObjectName(QString::fromUtf8("PlottingForm"));
        PlottingForm->resize(1000, 700);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlottingForm->sizePolicy().hasHeightForWidth());
        PlottingForm->setSizePolicy(sizePolicy);
        PlottingForm->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(PlottingForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(20);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(50, 50, 50, 50);
        widget = new QCustomPlot(PlottingForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setSizeIncrement(QSize(0, 0));
        widget->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(widget, 0, 1, 2, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(100);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, 0);
        lineEdit = new QLineEdit(PlottingForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(0, 25));
        lineEdit->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(PlottingForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(0, 25));
        lineEdit_2->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(PlottingForm);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMinimumSize(QSize(0, 25));
        lineEdit_3->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(100);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        label = new QLabel(PlottingForm);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 30));

        verticalLayout_3->addWidget(label);

        label_3 = new QLabel(PlottingForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(16777215, 60));

        verticalLayout_3->addWidget(label_3);

        label_2 = new QLabel(PlottingForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(16777215, 30));

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        pushButton = new QPushButton(PlottingForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 60));
        pushButton->setMaximumSize(QSize(16777215, 60));
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

        gridLayout->addWidget(pushButton, 10, 0, 1, 1);

        comboBox = new QComboBox(PlottingForm);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(0, 60));
        comboBox->setMaximumSize(QSize(16777215, 60));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 2, 1);


        retranslateUi(PlottingForm);

        QMetaObject::connectSlotsByName(PlottingForm);
    } // setupUi

    void retranslateUi(QWidget *PlottingForm)
    {
        PlottingForm->setWindowTitle(QCoreApplication::translate("PlottingForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("PlottingForm", "a", nullptr));
        label_3->setText(QCoreApplication::translate("PlottingForm", "c", nullptr));
        label_2->setText(QCoreApplication::translate("PlottingForm", "b", nullptr));
        pushButton->setText(QCoreApplication::translate("PlottingForm", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("PlottingForm", "\320\237\320\260\321\200\320\260\320\261\320\276\320\273\320\260", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PlottingForm", "\320\233\320\270\320\275\320\265\320\271\320\275\320\260\321\217", nullptr));

    } // retranslateUi

};

namespace Ui {
    class PlottingForm: public Ui_PlottingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTTINGFORM_H
