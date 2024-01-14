/********************************************************************************
** Form generated from reading UI file 'ErrorForm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORFORM_H
#define UI_ERRORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ErrorForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *ErrorForm)
    {
        if (ErrorForm->objectName().isEmpty())
            ErrorForm->setObjectName(QString::fromUtf8("ErrorForm"));
        ErrorForm->resize(410, 303);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ErrorForm->sizePolicy().hasHeightForWidth());
        ErrorForm->setSizePolicy(sizePolicy);
        ErrorForm->setMaximumSize(QSize(410, 303));
        ErrorForm->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    padding: 10px 10px 10px 10px;\n"
"	border: none;\n"
"	border-radius: 10px;\n"
"    color: white;\n"
"}"));
        gridLayout = new QGridLayout(ErrorForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(ErrorForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(18);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(101,37,128);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #652580, stop: 1 #3C388D);\n"
"}"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        label = new QLabel(ErrorForm);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(17);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 2, 2);


        retranslateUi(ErrorForm);

        QMetaObject::connectSlotsByName(ErrorForm);
    } // setupUi

    void retranslateUi(QDialog *ErrorForm)
    {
        ErrorForm->setWindowTitle(QCoreApplication::translate("ErrorForm", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ErrorForm", "\320\276\320\272", nullptr));
        label->setText(QCoreApplication::translate("ErrorForm", "\320\236\321\201\321\202\320\260\320\262\321\214\321\202\320\265 \321\202\320\276\320\273\321\214\320\272\320\276 \320\276\320\264\320\275\320\276 \320\277\321\203\321\201\321\202\320\276\320\265 \320\277\320\276\320\273\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorForm: public Ui_ErrorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORFORM_H
