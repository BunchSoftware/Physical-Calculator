/********************************************************************************
** Form generated from reading UI file 'calculateForm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATEFORM_H
#define UI_CALCULATEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculateForm
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *Label_2;
    QVBoxLayout *Label;
    QLabel *expression;
    QLabel *result;
    QFrame *GroupButton;
    QGridLayout *Button;
    QPushButton *number_1;
    QPushButton *equals;
    QPushButton *percent;
    QPushButton *number_4;
    QPushButton *step;
    QPushButton *division;
    QPushButton *number_2;
    QPushButton *number_5;
    QPushButton *number_0;
    QPushButton *number_9;
    QPushButton *number_3;
    QPushButton *stel;
    QPushButton *delete_2;
    QPushButton *number_8;
    QPushButton *dot;
    QPushButton *minus;
    QPushButton *multiplication;
    QPushButton *plus_minus;
    QPushButton *sqrt;
    QPushButton *number_6;
    QPushButton *number_7;
    QPushButton *plus;
    QPushButton *clear;

    void setupUi(QMainWindow *CalculateForm)
    {
        if (CalculateForm->objectName().isEmpty())
            CalculateForm->setObjectName(QString::fromUtf8("CalculateForm"));
        CalculateForm->resize(435, 520);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculateForm->sizePolicy().hasHeightForWidth());
        CalculateForm->setSizePolicy(sizePolicy);
        CalculateForm->setMinimumSize(QSize(435, 520));
        CalculateForm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  font-size: 25px;\n"
"}"));
        centralwidget = new QWidget(CalculateForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMaximumSize(QSize(1200, 16777215));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(50, 50, 50, 50);
        Label_2 = new QFrame(centralwidget);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));
        sizePolicy.setHeightForWidth(Label_2->sizePolicy().hasHeightForWidth());
        Label_2->setSizePolicy(sizePolicy);
        Label_2->setMaximumSize(QSize(16777215, 200));
        Label_2->setStyleSheet(QString::fromUtf8("qproperty-alignment: 'AlignVCenter | AlignRight';"));
        Label_2->setFrameShape(QFrame::NoFrame);
        Label_2->setFrameShadow(QFrame::Plain);
        Label = new QVBoxLayout(Label_2);
        Label->setObjectName(QString::fromUtf8("Label"));
        expression = new QLabel(Label_2);
        expression->setObjectName(QString::fromUtf8("expression"));
        sizePolicy.setHeightForWidth(expression->sizePolicy().hasHeightForWidth());
        expression->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(30);
        expression->setFont(font);
        expression->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(136, 136, 136);"));

        Label->addWidget(expression);

        result = new QLabel(Label_2);
        result->setObjectName(QString::fromUtf8("result"));
        sizePolicy.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(25);
        result->setFont(font1);
        result->setStyleSheet(QString::fromUtf8(""));

        Label->addWidget(result);


        verticalLayout_2->addWidget(Label_2);

        GroupButton = new QFrame(centralwidget);
        GroupButton->setObjectName(QString::fromUtf8("GroupButton"));
        sizePolicy.setHeightForWidth(GroupButton->sizePolicy().hasHeightForWidth());
        GroupButton->setSizePolicy(sizePolicy);
        GroupButton->setMinimumSize(QSize(340, 290));
        GroupButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    padding: 10px 10px 10px 10px;\n"
"	border: none;\n"
"	border-radius: 10px;\n"
"    color: white;\n"
"}"));
        Button = new QGridLayout(GroupButton);
        Button->setObjectName(QString::fromUtf8("Button"));
        number_1 = new QPushButton(GroupButton);
        number_1->setObjectName(QString::fromUtf8("number_1"));
        sizePolicy.setHeightForWidth(number_1->sizePolicy().hasHeightForWidth());
        number_1->setSizePolicy(sizePolicy);
        number_1->setMinimumSize(QSize(65, 40));
        number_1->setMaximumSize(QSize(350, 250));
        number_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9ce551;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #b8e288;\n"
"}"));

        Button->addWidget(number_1, 4, 0, 1, 1);

        equals = new QPushButton(GroupButton);
        equals->setObjectName(QString::fromUtf8("equals"));
        sizePolicy.setHeightForWidth(equals->sizePolicy().hasHeightForWidth());
        equals->setSizePolicy(sizePolicy);
        equals->setMinimumSize(QSize(65, 40));
        equals->setMaximumSize(QSize(350, 250));
        equals->setSizeIncrement(QSize(0, 0));
        equals->setBaseSize(QSize(0, 0));
        equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(equals, 5, 3, 1, 1);

        percent = new QPushButton(GroupButton);
        percent->setObjectName(QString::fromUtf8("percent"));
        sizePolicy.setHeightForWidth(percent->sizePolicy().hasHeightForWidth());
        percent->setSizePolicy(sizePolicy);
        percent->setMinimumSize(QSize(65, 40));
        percent->setMaximumSize(QSize(350, 250));
        percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(60,56,141);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3C388D, stop: 1 #652580);\n"
"}"));

        Button->addWidget(percent, 0, 0, 1, 1);

        number_4 = new QPushButton(GroupButton);
        number_4->setObjectName(QString::fromUtf8("number_4"));
        sizePolicy.setHeightForWidth(number_4->sizePolicy().hasHeightForWidth());
        number_4->setSizePolicy(sizePolicy);
        number_4->setMinimumSize(QSize(65, 40));
        number_4->setMaximumSize(QSize(350, 250));
        number_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9ce551;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #b8e288;\n"
"}"));

        Button->addWidget(number_4, 3, 0, 1, 1);

        step = new QPushButton(GroupButton);
        step->setObjectName(QString::fromUtf8("step"));
        sizePolicy.setHeightForWidth(step->sizePolicy().hasHeightForWidth());
        step->setSizePolicy(sizePolicy);
        step->setMinimumSize(QSize(65, 40));
        step->setMaximumSize(QSize(350, 250));
        step->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(60,56,141);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3C388D, stop: 1 #652580);\n"
"}"));

        Button->addWidget(step, 1, 1, 1, 1);

        division = new QPushButton(GroupButton);
        division->setObjectName(QString::fromUtf8("division"));
        sizePolicy.setHeightForWidth(division->sizePolicy().hasHeightForWidth());
        division->setSizePolicy(sizePolicy);
        division->setMinimumSize(QSize(65, 40));
        division->setMaximumSize(QSize(350, 250));
        division->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(division, 1, 3, 1, 1);

        number_2 = new QPushButton(GroupButton);
        number_2->setObjectName(QString::fromUtf8("number_2"));
        sizePolicy.setHeightForWidth(number_2->sizePolicy().hasHeightForWidth());
        number_2->setSizePolicy(sizePolicy);
        number_2->setMinimumSize(QSize(65, 40));
        number_2->setMaximumSize(QSize(350, 250));
        number_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9ce551;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #b8e288;\n"
"}"));

        Button->addWidget(number_2, 4, 1, 1, 1);

        number_5 = new QPushButton(GroupButton);
        number_5->setObjectName(QString::fromUtf8("number_5"));
        sizePolicy.setHeightForWidth(number_5->sizePolicy().hasHeightForWidth());
        number_5->setSizePolicy(sizePolicy);
        number_5->setMinimumSize(QSize(65, 40));
        number_5->setMaximumSize(QSize(350, 250));
        number_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9ce551;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #b8e288;\n"
"}"));

        Button->addWidget(number_5, 3, 1, 1, 1);

        number_0 = new QPushButton(GroupButton);
        number_0->setObjectName(QString::fromUtf8("number_0"));
        sizePolicy.setHeightForWidth(number_0->sizePolicy().hasHeightForWidth());
        number_0->setSizePolicy(sizePolicy);
        number_0->setMinimumSize(QSize(65, 40));
        number_0->setMaximumSize(QSize(750, 250));
        number_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9ce551;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #b8e288;\n"
"}"));

        Button->addWidget(number_0, 5, 0, 1, 2);

        number_9 = new QPushButton(GroupButton);
        number_9->setObjectName(QString::fromUtf8("number_9"));
        sizePolicy.setHeightForWidth(number_9->sizePolicy().hasHeightForWidth());
        number_9->setSizePolicy(sizePolicy);
        number_9->setMinimumSize(QSize(65, 40));
        number_9->setMaximumSize(QSize(350, 250));
        number_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9ce551;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #b8e288;\n"
"}"));

        Button->addWidget(number_9, 2, 2, 1, 1);

        number_3 = new QPushButton(GroupButton);
        number_3->setObjectName(QString::fromUtf8("number_3"));
        sizePolicy.setHeightForWidth(number_3->sizePolicy().hasHeightForWidth());
        number_3->setSizePolicy(sizePolicy);
        number_3->setMinimumSize(QSize(65, 40));
        number_3->setMaximumSize(QSize(350, 250));
        number_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9ce551;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #b8e288;\n"
"}"));

        Button->addWidget(number_3, 4, 2, 1, 1);

        stel = new QPushButton(GroupButton);
        stel->setObjectName(QString::fromUtf8("stel"));
        sizePolicy.setHeightForWidth(stel->sizePolicy().hasHeightForWidth());
        stel->setSizePolicy(sizePolicy);
        stel->setMinimumSize(QSize(65, 40));
        stel->setMaximumSize(QSize(350, 250));
        stel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(60,56,141);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3C388D, stop: 1 #652580);\n"
"}"));

        Button->addWidget(stel, 1, 0, 1, 1);

        delete_2 = new QPushButton(GroupButton);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        sizePolicy.setHeightForWidth(delete_2->sizePolicy().hasHeightForWidth());
        delete_2->setSizePolicy(sizePolicy);
        delete_2->setMinimumSize(QSize(65, 40));
        delete_2->setMaximumSize(QSize(350, 250));
        QFont font2;
        delete_2->setFont(font2);
        delete_2->setAutoFillBackground(false);
        delete_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(delete_2, 0, 3, 1, 1);

        number_8 = new QPushButton(GroupButton);
        number_8->setObjectName(QString::fromUtf8("number_8"));
        sizePolicy.setHeightForWidth(number_8->sizePolicy().hasHeightForWidth());
        number_8->setSizePolicy(sizePolicy);
        number_8->setMinimumSize(QSize(65, 40));
        number_8->setMaximumSize(QSize(350, 250));
        number_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9ce551;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #b8e288;\n"
"}"));

        Button->addWidget(number_8, 2, 1, 1, 1);

        dot = new QPushButton(GroupButton);
        dot->setObjectName(QString::fromUtf8("dot"));
        sizePolicy.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy);
        dot->setMinimumSize(QSize(65, 40));
        dot->setMaximumSize(QSize(350, 250));
        QFont font3;
        font3.setItalic(false);
        dot->setFont(font3);
        dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(dot, 5, 2, 1, 1);

        minus = new QPushButton(GroupButton);
        minus->setObjectName(QString::fromUtf8("minus"));
        sizePolicy.setHeightForWidth(minus->sizePolicy().hasHeightForWidth());
        minus->setSizePolicy(sizePolicy);
        minus->setMinimumSize(QSize(65, 40));
        minus->setMaximumSize(QSize(350, 250));
        minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(minus, 3, 3, 1, 1);

        multiplication = new QPushButton(GroupButton);
        multiplication->setObjectName(QString::fromUtf8("multiplication"));
        sizePolicy.setHeightForWidth(multiplication->sizePolicy().hasHeightForWidth());
        multiplication->setSizePolicy(sizePolicy);
        multiplication->setMinimumSize(QSize(65, 40));
        multiplication->setMaximumSize(QSize(350, 250));
        multiplication->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(multiplication, 2, 3, 1, 1);

        plus_minus = new QPushButton(GroupButton);
        plus_minus->setObjectName(QString::fromUtf8("plus_minus"));
        sizePolicy.setHeightForWidth(plus_minus->sizePolicy().hasHeightForWidth());
        plus_minus->setSizePolicy(sizePolicy);
        plus_minus->setMinimumSize(QSize(65, 40));
        plus_minus->setMaximumSize(QSize(350, 250));
        plus_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(60,56,141);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3C388D, stop: 1 #652580);\n"
"}"));
        plus_minus->setIconSize(QSize(20, 20));

        Button->addWidget(plus_minus, 0, 1, 1, 1);

        sqrt = new QPushButton(GroupButton);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sizePolicy.setHeightForWidth(sqrt->sizePolicy().hasHeightForWidth());
        sqrt->setSizePolicy(sizePolicy);
        sqrt->setMinimumSize(QSize(65, 40));
        sqrt->setMaximumSize(QSize(350, 250));
        sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(60,56,141);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3C388D, stop: 1 #652580);\n"
"}"));

        Button->addWidget(sqrt, 1, 2, 1, 1);

        number_6 = new QPushButton(GroupButton);
        number_6->setObjectName(QString::fromUtf8("number_6"));
        sizePolicy.setHeightForWidth(number_6->sizePolicy().hasHeightForWidth());
        number_6->setSizePolicy(sizePolicy);
        number_6->setMinimumSize(QSize(65, 40));
        number_6->setMaximumSize(QSize(350, 250));
        number_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9ce551;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #b8e288;\n"
"}"));

        Button->addWidget(number_6, 3, 2, 1, 1);

        number_7 = new QPushButton(GroupButton);
        number_7->setObjectName(QString::fromUtf8("number_7"));
        sizePolicy.setHeightForWidth(number_7->sizePolicy().hasHeightForWidth());
        number_7->setSizePolicy(sizePolicy);
        number_7->setMinimumSize(QSize(65, 40));
        number_7->setMaximumSize(QSize(350, 250));
        number_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9ce551;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #b8e288;\n"
"}"));

        Button->addWidget(number_7, 2, 0, 1, 1);

        plus = new QPushButton(GroupButton);
        plus->setObjectName(QString::fromUtf8("plus"));
        sizePolicy.setHeightForWidth(plus->sizePolicy().hasHeightForWidth());
        plus->setSizePolicy(sizePolicy);
        plus->setMinimumSize(QSize(65, 40));
        plus->setMaximumSize(QSize(350, 250));
        plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(plus, 4, 3, 1, 1);

        clear = new QPushButton(GroupButton);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);
        clear->setMinimumSize(QSize(65, 40));
        clear->setMaximumSize(QSize(350, 250));
        clear->setSizeIncrement(QSize(0, 0));
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(clear, 0, 2, 1, 1);


        verticalLayout_2->addWidget(GroupButton);

        CalculateForm->setCentralWidget(centralwidget);

        retranslateUi(CalculateForm);

        QMetaObject::connectSlotsByName(CalculateForm);
    } // setupUi

    void retranslateUi(QMainWindow *CalculateForm)
    {
        CalculateForm->setWindowTitle(QCoreApplication::translate("CalculateForm", "MainWindow", nullptr));
        expression->setText(QString());
        result->setText(QString());
        number_1->setText(QCoreApplication::translate("CalculateForm", "1", nullptr));
        equals->setText(QCoreApplication::translate("CalculateForm", "=", nullptr));
        percent->setText(QCoreApplication::translate("CalculateForm", "(", nullptr));
        number_4->setText(QCoreApplication::translate("CalculateForm", "4", nullptr));
        step->setText(QCoreApplication::translate("CalculateForm", "^", nullptr));
        division->setText(QCoreApplication::translate("CalculateForm", "/", nullptr));
        number_2->setText(QCoreApplication::translate("CalculateForm", "2", nullptr));
        number_5->setText(QCoreApplication::translate("CalculateForm", "5", nullptr));
        number_0->setText(QCoreApplication::translate("CalculateForm", "0", nullptr));
        number_9->setText(QCoreApplication::translate("CalculateForm", "9", nullptr));
        number_3->setText(QCoreApplication::translate("CalculateForm", "3", nullptr));
        stel->setText(QCoreApplication::translate("CalculateForm", "1/x", nullptr));
        delete_2->setText(QCoreApplication::translate("CalculateForm", "Del", nullptr));
        number_8->setText(QCoreApplication::translate("CalculateForm", "8", nullptr));
        dot->setText(QCoreApplication::translate("CalculateForm", ".", nullptr));
        minus->setText(QCoreApplication::translate("CalculateForm", "-", nullptr));
        multiplication->setText(QCoreApplication::translate("CalculateForm", "*", nullptr));
        plus_minus->setText(QCoreApplication::translate("CalculateForm", ")", nullptr));
        sqrt->setText(QCoreApplication::translate("CalculateForm", "sqrt", nullptr));
        number_6->setText(QCoreApplication::translate("CalculateForm", "6", nullptr));
        number_7->setText(QCoreApplication::translate("CalculateForm", "7", nullptr));
        plus->setText(QCoreApplication::translate("CalculateForm", "+", nullptr));
        clear->setText(QCoreApplication::translate("CalculateForm", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculateForm: public Ui_CalculateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATEFORM_H
