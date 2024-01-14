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
#include <QtWidgets/QFrame>
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
    QFrame *frame;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QFrame *General_2;
    QHBoxLayout *General;
    QFrame *LineEditGroup;
    QVBoxLayout *LineEdit;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *lineEdit_3;
    QFrame *LabelEditGroup;
    QVBoxLayout *LabelEdit;
    QLabel *label;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_3;

    void setupUi(QWidget *PlottingForm)
    {
        if (PlottingForm->objectName().isEmpty())
            PlottingForm->setObjectName(QString::fromUtf8("PlottingForm"));
        PlottingForm->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlottingForm->sizePolicy().hasHeightForWidth());
        PlottingForm->setSizePolicy(sizePolicy);
        PlottingForm->setMinimumSize(QSize(0, 0));
        PlottingForm->setStyleSheet(QString::fromUtf8("font: 30px;"));
        gridLayout_2 = new QGridLayout(PlottingForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(50);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(50, 50, 50, 50);
        widget = new QCustomPlot(PlottingForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setSizeIncrement(QSize(0, 0));
        widget->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(widget, 0, 1, 2, 1);

        frame = new QFrame(PlottingForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMaximumSize(QSize(600, 16777215));
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(0, 60));
        comboBox->setMaximumSize(QSize(16777215, 60));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"font: 20px;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 1px 18px 1px 10px;\n"
"background-color: #9ce551;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/images/downarrow.png);\n"
"    right: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 60));
        pushButton->setMaximumSize(QSize(16777215, 60));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"  background-color:  #8330a6;\n"
"  color: white; \n"
"  border-radius: 10px;\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        gridLayout->addWidget(pushButton, 10, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        General_2 = new QFrame(frame);
        General_2->setObjectName(QString::fromUtf8("General_2"));
        sizePolicy.setHeightForWidth(General_2->sizePolicy().hasHeightForWidth());
        General_2->setSizePolicy(sizePolicy);
        General = new QHBoxLayout(General_2);
        General->setSpacing(20);
        General->setObjectName(QString::fromUtf8("General"));
        General->setContentsMargins(-1, 1, 1, -1);
        LineEditGroup = new QFrame(General_2);
        LineEditGroup->setObjectName(QString::fromUtf8("LineEditGroup"));
        sizePolicy.setHeightForWidth(LineEditGroup->sizePolicy().hasHeightForWidth());
        LineEditGroup->setSizePolicy(sizePolicy);
        LineEditGroup->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border: none;\n"
"   border-radius: 13px;\n"
"   color: #FFF;\n"
"   padding: 7px;\n"
"  background-color: rgb(60,56,141);\n"
"}"));
        LineEdit = new QVBoxLayout(LineEditGroup);
        LineEdit->setSpacing(0);
        LineEdit->setObjectName(QString::fromUtf8("LineEdit"));
        LineEdit->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(LineEditGroup);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(0, 50));

        LineEdit->addWidget(lineEdit);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LineEdit->addItem(verticalSpacer_3);

        lineEdit_2 = new QLineEdit(LineEditGroup);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMinimumSize(QSize(0, 50));

        LineEdit->addWidget(lineEdit_2);

        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LineEdit->addItem(verticalSpacer_4);

        lineEdit_3 = new QLineEdit(LineEditGroup);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
        lineEdit_3->setMinimumSize(QSize(0, 50));

        LineEdit->addWidget(lineEdit_3);


        General->addWidget(LineEditGroup);

        LabelEditGroup = new QFrame(General_2);
        LabelEditGroup->setObjectName(QString::fromUtf8("LabelEditGroup"));
        sizePolicy.setHeightForWidth(LabelEditGroup->sizePolicy().hasHeightForWidth());
        LabelEditGroup->setSizePolicy(sizePolicy);
        LabelEdit = new QVBoxLayout(LabelEditGroup);
        LabelEdit->setSpacing(0);
        LabelEdit->setObjectName(QString::fromUtf8("LabelEdit"));
        LabelEdit->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(LabelEditGroup);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(100, 50));
        label->setWordWrap(true);

        LabelEdit->addWidget(label);

        verticalSpacer_5 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LabelEdit->addItem(verticalSpacer_5);

        label_2 = new QLabel(LabelEditGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(100, 50));
        label_2->setWordWrap(true);

        LabelEdit->addWidget(label_2);

        verticalSpacer_6 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LabelEdit->addItem(verticalSpacer_6);

        label_3 = new QLabel(LabelEditGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(100, 50));
        label_3->setWordWrap(true);

        LabelEdit->addWidget(label_3);


        General->addWidget(LabelEditGroup);


        gridLayout->addWidget(General_2, 3, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 2, 1);


        retranslateUi(PlottingForm);

        QMetaObject::connectSlotsByName(PlottingForm);
    } // setupUi

    void retranslateUi(QWidget *PlottingForm)
    {
        PlottingForm->setWindowTitle(QCoreApplication::translate("PlottingForm", "Form", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("PlottingForm", "\320\237\320\260\321\200\320\260\320\261\320\276\320\273\320\260", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PlottingForm", "\320\233\320\270\320\275\320\265\320\271\320\275\320\260\321\217", nullptr));

        pushButton->setText(QCoreApplication::translate("PlottingForm", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        label->setText(QCoreApplication::translate("PlottingForm", "Value", nullptr));
        label_2->setText(QCoreApplication::translate("PlottingForm", "Value2", nullptr));
        label_3->setText(QCoreApplication::translate("PlottingForm", "Value3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlottingForm: public Ui_PlottingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTTINGFORM_H
