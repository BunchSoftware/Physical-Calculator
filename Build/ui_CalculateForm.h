/********************************************************************************
** Form generated from reading UI file 'CalculateForm.ui'
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
    QLabel *label;
    QLabel *label_2;
    QFrame *Button_2;
    QGridLayout *Button;
    QPushButton *pushButton;
    QPushButton *pushButton_plus_min;
    QPushButton *pushButton_C;
    QPushButton *pushButton_C_2;
    QPushButton *pushButton_stel;
    QPushButton *pushButton_step;
    QPushButton *pushButton_kor;
    QPushButton *pushButton_delit;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_X;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_ravn;
    QPushButton *pushButton_0;

    void setupUi(QMainWindow *CalculateForm)
    {
        if (CalculateForm->objectName().isEmpty())
            CalculateForm->setObjectName(QString::fromUtf8("CalculateForm"));
        CalculateForm->resize(590, 570);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculateForm->sizePolicy().hasHeightForWidth());
        CalculateForm->setSizePolicy(sizePolicy);
        CalculateForm->setMinimumSize(QSize(290, 520));
        CalculateForm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  font-size: 30px;\n"
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
        Label_2->setFrameShape(QFrame::NoFrame);
        Label_2->setFrameShadow(QFrame::Plain);
        Label = new QVBoxLayout(Label_2);
        Label->setObjectName(QString::fromUtf8("Label"));
        label = new QLabel(Label_2);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border-bottom: 1px solid black;\n"
"}\n"
"\n"
"background-color : white;"));

        Label->addWidget(label);

        label_2 = new QLabel(Label_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(30);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border-bottom: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));

        Label->addWidget(label_2);


        verticalLayout_2->addWidget(Label_2);

        Button_2 = new QFrame(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        sizePolicy.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy);
        Button = new QGridLayout(Button_2);
        Button->setObjectName(QString::fromUtf8("Button"));
        pushButton = new QPushButton(Button_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(350, 250));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(60,56,141);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  font-size: 30px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3C388D, stop: 1 #652580);\n"
"}"));

        Button->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_plus_min = new QPushButton(Button_2);
        pushButton_plus_min->setObjectName(QString::fromUtf8("pushButton_plus_min"));
        sizePolicy.setHeightForWidth(pushButton_plus_min->sizePolicy().hasHeightForWidth());
        pushButton_plus_min->setSizePolicy(sizePolicy);
        pushButton_plus_min->setMaximumSize(QSize(350, 250));
        pushButton_plus_min->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(60,56,141);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  font-size: 30px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3C388D, stop: 1 #652580);\n"
"}"));
        pushButton_plus_min->setIconSize(QSize(20, 20));

        Button->addWidget(pushButton_plus_min, 0, 1, 1, 1);

        pushButton_C = new QPushButton(Button_2);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        sizePolicy.setHeightForWidth(pushButton_C->sizePolicy().hasHeightForWidth());
        pushButton_C->setSizePolicy(sizePolicy);
        pushButton_C->setMaximumSize(QSize(350, 250));
        pushButton_C->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  font-size: 30px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(pushButton_C, 0, 2, 1, 1);

        pushButton_C_2 = new QPushButton(Button_2);
        pushButton_C_2->setObjectName(QString::fromUtf8("pushButton_C_2"));
        sizePolicy.setHeightForWidth(pushButton_C_2->sizePolicy().hasHeightForWidth());
        pushButton_C_2->setSizePolicy(sizePolicy);
        pushButton_C_2->setMaximumSize(QSize(350, 250));
        QFont font2;
        pushButton_C_2->setFont(font2);
        pushButton_C_2->setAutoFillBackground(false);
        pushButton_C_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(pushButton_C_2, 0, 3, 1, 1);

        pushButton_stel = new QPushButton(Button_2);
        pushButton_stel->setObjectName(QString::fromUtf8("pushButton_stel"));
        sizePolicy.setHeightForWidth(pushButton_stel->sizePolicy().hasHeightForWidth());
        pushButton_stel->setSizePolicy(sizePolicy);
        pushButton_stel->setMaximumSize(QSize(350, 250));
        pushButton_stel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(60,56,141);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3C388D, stop: 1 #652580);\n"
"}"));

        Button->addWidget(pushButton_stel, 1, 0, 1, 1);

        pushButton_step = new QPushButton(Button_2);
        pushButton_step->setObjectName(QString::fromUtf8("pushButton_step"));
        sizePolicy.setHeightForWidth(pushButton_step->sizePolicy().hasHeightForWidth());
        pushButton_step->setSizePolicy(sizePolicy);
        pushButton_step->setMaximumSize(QSize(350, 250));
        pushButton_step->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(60,56,141);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  font-size: 30px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3C388D, stop: 1 #652580);\n"
"}"));

        Button->addWidget(pushButton_step, 1, 1, 1, 1);

        pushButton_kor = new QPushButton(Button_2);
        pushButton_kor->setObjectName(QString::fromUtf8("pushButton_kor"));
        sizePolicy.setHeightForWidth(pushButton_kor->sizePolicy().hasHeightForWidth());
        pushButton_kor->setSizePolicy(sizePolicy);
        pushButton_kor->setMaximumSize(QSize(350, 250));
        pushButton_kor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(60,56,141);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3C388D, stop: 1 #652580);\n"
"}"));

        Button->addWidget(pushButton_kor, 1, 2, 1, 1);

        pushButton_delit = new QPushButton(Button_2);
        pushButton_delit->setObjectName(QString::fromUtf8("pushButton_delit"));
        sizePolicy.setHeightForWidth(pushButton_delit->sizePolicy().hasHeightForWidth());
        pushButton_delit->setSizePolicy(sizePolicy);
        pushButton_delit->setMaximumSize(QSize(350, 250));
        pushButton_delit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(pushButton_delit, 1, 3, 1, 1);

        pushButton_7 = new QPushButton(Button_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMaximumSize(QSize(350, 250));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        Button->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(Button_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMaximumSize(QSize(350, 250));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        Button->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(Button_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMaximumSize(QSize(350, 250));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        Button->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_X = new QPushButton(Button_2);
        pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
        sizePolicy.setHeightForWidth(pushButton_X->sizePolicy().hasHeightForWidth());
        pushButton_X->setSizePolicy(sizePolicy);
        pushButton_X->setMaximumSize(QSize(350, 250));
        pushButton_X->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(pushButton_X, 2, 3, 1, 1);

        pushButton_4 = new QPushButton(Button_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMaximumSize(QSize(350, 250));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        Button->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(Button_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMaximumSize(QSize(350, 250));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        Button->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(Button_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMaximumSize(QSize(350, 250));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        Button->addWidget(pushButton_6, 3, 2, 1, 1);

        pushButton_minus = new QPushButton(Button_2);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy);
        pushButton_minus->setMaximumSize(QSize(350, 250));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(pushButton_minus, 3, 3, 1, 1);

        pushButton_1 = new QPushButton(Button_2);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMaximumSize(QSize(350, 250));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        Button->addWidget(pushButton_1, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(Button_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(350, 250));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        Button->addWidget(pushButton_2, 4, 1, 1, 1);

        pushButton_3 = new QPushButton(Button_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMaximumSize(QSize(350, 250));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        Button->addWidget(pushButton_3, 4, 2, 1, 1);

        pushButton_plus = new QPushButton(Button_2);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy);
        pushButton_plus->setMaximumSize(QSize(350, 250));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(pushButton_plus, 4, 3, 1, 1);

        pushButton_dot = new QPushButton(Button_2);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        sizePolicy.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy);
        pushButton_dot->setMaximumSize(QSize(350, 250));
        QFont font3;
        font3.setItalic(false);
        pushButton_dot->setFont(font3);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(pushButton_dot, 5, 2, 1, 1);

        pushButton_ravn = new QPushButton(Button_2);
        pushButton_ravn->setObjectName(QString::fromUtf8("pushButton_ravn"));
        sizePolicy.setHeightForWidth(pushButton_ravn->sizePolicy().hasHeightForWidth());
        pushButton_ravn->setSizePolicy(sizePolicy);
        pushButton_ravn->setMaximumSize(QSize(350, 250));
        pushButton_ravn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  font-size: 30px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        Button->addWidget(pushButton_ravn, 5, 3, 1, 1);

        pushButton_0 = new QPushButton(Button_2);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setMaximumSize(QSize(750, 250));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        Button->addWidget(pushButton_0, 5, 0, 1, 2);


        verticalLayout_2->addWidget(Button_2);

        CalculateForm->setCentralWidget(centralwidget);

        retranslateUi(CalculateForm);

        QMetaObject::connectSlotsByName(CalculateForm);
    } // setupUi

    void retranslateUi(QMainWindow *CalculateForm)
    {
        CalculateForm->setWindowTitle(QCoreApplication::translate("CalculateForm", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("CalculateForm", "%", nullptr));
        pushButton_plus_min->setText(QCoreApplication::translate("CalculateForm", "+/-", nullptr));
        pushButton_C->setText(QCoreApplication::translate("CalculateForm", "\320\241", nullptr));
        pushButton_C_2->setText(QCoreApplication::translate("CalculateForm", "Del", nullptr));
        pushButton_stel->setText(QCoreApplication::translate("CalculateForm", "1/x", nullptr));
        pushButton_step->setText(QCoreApplication::translate("CalculateForm", "X^2", nullptr));
        pushButton_kor->setText(QCoreApplication::translate("CalculateForm", "\342\210\232(x)", nullptr));
        pushButton_delit->setText(QCoreApplication::translate("CalculateForm", "/", nullptr));
        pushButton_7->setText(QCoreApplication::translate("CalculateForm", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("CalculateForm", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("CalculateForm", "9", nullptr));
        pushButton_X->setText(QCoreApplication::translate("CalculateForm", "X", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CalculateForm", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CalculateForm", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("CalculateForm", "6", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("CalculateForm", "-", nullptr));
        pushButton_1->setText(QCoreApplication::translate("CalculateForm", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CalculateForm", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CalculateForm", "3", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("CalculateForm", "+", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("CalculateForm", ".", nullptr));
        pushButton_ravn->setText(QCoreApplication::translate("CalculateForm", "=", nullptr));
        pushButton_0->setText(QCoreApplication::translate("CalculateForm", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculateForm: public Ui_CalculateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATEFORM_H
