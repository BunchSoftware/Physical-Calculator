/********************************************************************************
** Form generated from reading UI file 'fisic.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FISIC_H
#define UI_FISIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fisic
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QLabel *label_7;

    void setupUi(QMainWindow *fisic)
    {
        if (fisic->objectName().isEmpty())
            fisic->setObjectName(QString::fromUtf8("fisic"));
        fisic->resize(756, 546);
        centralwidget = new QWidget(fisic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 340, 121, 41));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
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
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(10, 270, 101, 24));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 220, 101, 24));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 170, 101, 24));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 120, 101, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 70, 101, 24));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 20, 231, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 70, 141, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 120, 141, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 160, 141, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 220, 141, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 270, 141, 21));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 420, 179, 52));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 40, 421, 301));
        label_6->setText(QString::fromUtf8(""));
        label_6->setTextFormat(Qt::AutoText);
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/\320\272\320\260\321\200\321\202\320\270\320\275\320\272\320\270/otnosilmas.png")));
        label_6->setScaledContents(true);
        label_6->setWordWrap(false);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 340, 111, 41));
        pushButton_2->setFont(font);
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
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 350, 431, 181));
        QFont font1;
        font1.setPointSize(10);
        label_7->setFont(font1);
        fisic->setCentralWidget(centralwidget);

        retranslateUi(fisic);

        QMetaObject::connectSlotsByName(fisic);
    } // setupUi

    void retranslateUi(QMainWindow *fisic)
    {
        fisic->setWindowTitle(QCoreApplication::translate("fisic", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("fisic", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("fisic", "\321\204\320\276\321\200\320\274\321\203\320\273\321\213", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("fisic", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("fisic", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\267\320\260\320\272\320\276\320\275 \320\235\321\214\321\216\321\202\320\276\320\275\320\260", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("fisic", "\320\227\320\260\320\272\320\276\320\275 \320\220\321\200\321\205\320\270\320\274\320\265\320\264\320\260", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("fisic", "\320\274\320\260\320\272\321\201\320\270\320\274\321\203\320\274 \320\270 \320\274\320\270\320\275\320\270\320\274\321\203\320\274 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\270", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("fisic", "\320\227\320\260\320\272\320\276\320\275 \320\236\320\274\320\260", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("fisic", "\320\236\321\202\320\275\320\276\321\201\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\274\320\260\321\201\321\201\321\213 ", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("fisic", "\320\241\320\270\320\273\320\260 \320\220\320\274\320\277\320\265\321\200\320\260", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("fisic", "\320\232\320\270\320\275\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \321\215\320\275\320\265\321\200\320\263\320\270\321\217", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("fisic", "\320\241\320\270\320\273\320\260 \320\232\321\203\320\273\320\276\320\275\320\260", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("fisic", "\320\241\320\270\320\273\320\260 \320\233\320\276\321\200\320\265\320\275\321\206\320\260", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("fisic", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\272\320\276\320\273\320\265\320\261\320\260\320\275\320\270\320\271", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("fisic", "\320\227\320\260\320\272\320\276\320\275 \320\242\320\276\320\274\321\201\320\260\320\275\320\260", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("fisic", "\320\237\320\265\321\200\320\270\320\276\320\264 \320\272\320\276\320\273\320\270\320\261\320\260\320\275\320\270\321\217 \320\277\321\200\321\203\320\266\320\270\320\275\320\275\320\276\320\263\320\276 \320\274\320\260\321\217\321\202\320\275\320\270\320\272\320\260", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("fisic", "\320\237\321\203\321\202\321\214 \320\277\321\200\320\270 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\320\276\320\274 \320\277\320\260\320\264\320\265\320\275\320\270\320\265 \321\202\320\265\320\273\320\260", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("fisic", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\320\276\320\263\320\276 \320\277\320\260\320\264\320\265\320\275\320\270\321\217", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("fisic", "\320\237\320\265\321\200\320\270\320\276\320\264 \320\277\320\276\320\273\321\203\321\200\320\260\321\201\320\277\320\260\320\264\320\260", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("fisic", "\320\224\320\273\320\270\320\275\320\260 \320\262\320\276\320\273\320\275\321\213", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("fisic", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("fisic", "\320\220\320\261\321\201\320\276\320\273\321\216\321\202\320\275\320\260\321\217 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("fisic", "\320\232\320\276\320\273-\320\262\320\276 \320\262\320\265\321\211\320\265\321\201\321\202\320\262\320\260", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("fisic", "\320\232\320\276\320\275\321\206\320\265\320\275\321\202\321\200\320\260\321\206\320\270\321\217 \320\274\320\276\320\273\320\265\320\272\321\203\320\273 (\320\260\321\202\320\276\320\274\320\276\320\262)", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("fisic", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \321\200\320\260\321\201\320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \320\262\320\276\320\273\320\275\321\213", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("fisic", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 \320\262 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 t", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("fisic", "\320\224\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\320\273\320\265\321\202\320\260 \320\277\320\276 \320\263\320\276\321\200\320\270\320\267\320\276\320\275\321\202\320\260\320\273\320\270", nullptr));
        comboBox->setItemText(25, QCoreApplication::translate("fisic", "\320\237\320\276\321\202\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\320\260\321\217 \321\215\320\275\320\265\321\200\320\263\320\270\321\217", nullptr));
        comboBox->setItemText(26, QCoreApplication::translate("fisic", "\320\241\320\270\320\273\320\260 \321\202\321\217\320\266\320\265\321\201\321\202\320\270", nullptr));
        comboBox->setItemText(27, QCoreApplication::translate("fisic", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\213\320\264\320\265\320\273\321\217\320\265\320\274\320\276\320\271 \321\202\320\265\320\277\320\273\320\276\321\202\321\213 ", nullptr));
        comboBox->setItemText(28, QCoreApplication::translate("fisic", "\320\237\320\273\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\265\320\273\320\260", nullptr));
        comboBox->setItemText(29, QCoreApplication::translate("fisic", "\320\242\320\265\320\277\320\273\320\276\321\202\320\260 \320\277\320\260\321\200\320\276\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        comboBox->setItemText(30, QCoreApplication::translate("fisic", "\320\223\320\276\321\200\320\265\320\275\320\270\320\265 \321\202\320\276\320\277\320\273\320\270\320\262\320\260", nullptr));
        comboBox->setItemText(31, QCoreApplication::translate("fisic", "\320\243\320\264\320\265\320\273\321\214\320\275\320\276\320\265 \321\201\320\276\320\277\321\200\320\276\321\202\320\270\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\262\320\276\320\264\320\275\320\270\320\272\320\260", nullptr));

        label->setText(QCoreApplication::translate("fisic", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("fisic", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("fisic", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("fisic", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("fisic", "TextLabel", nullptr));
        radioButton_2->setText(QCoreApplication::translate("fisic", " \320\274\320\270\320\275\320\270\320\274\321\203\320\274 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\270", nullptr));
        radioButton->setText(QCoreApplication::translate("fisic", "\320\274\320\260\320\272\321\201\320\270\320\274\321\203\320\274  \320\270\320\275\321\202\320\265\321\200\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("fisic", "\320\223\321\200\320\260\321\204\320\270\320\272\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("fisic", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fisic: public Ui_fisic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FISIC_H
