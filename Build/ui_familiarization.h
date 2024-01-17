/********************************************************************************
** Form generated from reading UI file 'familiarization.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAMILIARIZATION_H
#define UI_FAMILIARIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Familiarization
{
public:
    QGridLayout *gridLayout_3;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Familiarization)
    {
        if (Familiarization->objectName().isEmpty())
            Familiarization->setObjectName(QString::fromUtf8("Familiarization"));
        Familiarization->resize(1029, 686);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Familiarization->sizePolicy().hasHeightForWidth());
        Familiarization->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        Familiarization->setFont(font);
        Familiarization->setStyleSheet(QString::fromUtf8("QGridLayout\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        gridLayout_3 = new QGridLayout(Familiarization);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridFrame = new QFrame(Familiarization);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        sizePolicy.setHeightForWidth(gridFrame->sizePolicy().hasHeightForWidth());
        gridFrame->setSizePolicy(sizePolicy);
        gridFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, -1, -1);
        textBrowser = new QTextBrowser(gridFrame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift"));
        font1.setPointSize(18);
        textBrowser->setFont(font1);
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textBrowser->setSource(QUrl(QString::fromUtf8("qrc:/Documentation/ru/index.md")));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        gridLayout_3->addWidget(gridFrame, 1, 1, 1, 1);


        retranslateUi(Familiarization);

        QMetaObject::connectSlotsByName(Familiarization);
    } // setupUi

    void retranslateUi(QWidget *Familiarization)
    {
        Familiarization->setWindowTitle(QCoreApplication::translate("Familiarization", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Familiarization: public Ui_Familiarization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAMILIARIZATION_H
