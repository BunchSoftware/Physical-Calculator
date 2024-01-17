/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QString::fromUtf8("AboutWindow"));
        AboutWindow->setWindowModality(Qt::NonModal);
        AboutWindow->resize(700, 550);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutWindow->sizePolicy().hasHeightForWidth());
        AboutWindow->setSizePolicy(sizePolicy);
        AboutWindow->setStyleSheet(QString::fromUtf8(""));
        AboutWindow->setSizeGripEnabled(false);
        AboutWindow->setModal(false);
        centralwidget = new QWidget(AboutWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 1171, 881));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 490, 161, 41));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 30, 401, 101));
        label->setStyleSheet(QString::fromUtf8("font: 45px;\n"
"color: #8330a6;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 160, 621, 311));
        label_2->setStyleSheet(QString::fromUtf8("font: 20px;\n"
""));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setWordWrap(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 20, 151, 131));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/logotype.png")));
        label_3->setScaledContents(true);

        retranslateUi(AboutWindow);

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QDialog *AboutWindow)
    {
        AboutWindow->setWindowTitle(QCoreApplication::translate("AboutWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 Physical Calculator", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutWindow", "OK", nullptr));
        label->setText(QCoreApplication::translate("AboutWindow", "Physical Calculator", nullptr));
        label_2->setText(QCoreApplication::translate("AboutWindow", "<html><head/><body><p><span style=\" font-size:19pt;\">TUSUR Physical Calculator (64 \321\200\320\260\320\267\321\200\321\217\320\264\320\275\320\260\321\217 \320\262\320\265\321\200\321\201\320\270\321\217) \320\242\320\265\320\272\321\203\321\211\320\260\321\217 \320\262\320\265\321\200\321\201\320\270\321\217 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217 1.0.7a </span></p><p><span style=\" font-size:20pt;\">\302\251 \320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\276 \320\272\320\276\320\274\320\260\320\275\320\264\320\276\320\271 \320\223\320\237\320\236 \320\277\321\200\320\270 \321\201\320\276\320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265 \321\201 </span><span style=\" font-size:19pt;\">TUSUR University, 2023 \320\263. \320\222\321\201\320\265 \320\277\321\200\320\260\320\262\320\260 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213.</span></p><p><span style=\" font-size:19pt;\">\320\236\321\201\320\275"
                        "\320\276\320\262\320\260\320\275 \320\275\320\260 Qt 5.14.2 (MinGW 64-bit)</span></p><p><span style=\" font-size:19pt;\">\320\241\320\276\320\261\321\200\320\260\320\275\320\276 19 \321\217\320\275\320\262\320\260\321\200\321\217 \320\262 12:30:00</span></p><p><span style=\" font-size:19pt;\">\320\224\320\260\320\275\320\275\320\276\320\265 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \321\200\320\260\321\201\320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\217\320\265\321\202\321\201\321\217 \320\277\320\276\320\264 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\320\276\320\271 \320\273\320\270\321\206\320\265\320\275\320\267\320\270\320\265\320\271 Apache License 2.0 2004 \320\263. </span></p></body></html>", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
