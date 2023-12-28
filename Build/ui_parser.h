/********************************************************************************
** Form generated from reading UI file 'parser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARSER_H
#define UI_PARSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parser
{
public:
    QGridLayout *gridLayout;
    QLineEdit *line;
    QLabel *result;
    QPushButton *pushButton;

    void setupUi(QWidget *parser)
    {
        if (parser->objectName().isEmpty())
            parser->setObjectName(QString::fromUtf8("parser"));
        parser->resize(400, 300);
        gridLayout = new QGridLayout(parser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line = new QLineEdit(parser);
        line->setObjectName(QString::fromUtf8("line"));

        gridLayout->addWidget(line, 0, 0, 1, 1);

        result = new QLabel(parser);
        result->setObjectName(QString::fromUtf8("result"));

        gridLayout->addWidget(result, 2, 0, 1, 1);

        pushButton = new QPushButton(parser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(parser);

        QMetaObject::connectSlotsByName(parser);
    } // setupUi

    void retranslateUi(QWidget *parser)
    {
        parser->setWindowTitle(QCoreApplication::translate("parser", "Form", nullptr));
        result->setText(QCoreApplication::translate("parser", "Result", nullptr));
        pushButton->setText(QCoreApplication::translate("parser", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parser: public Ui_parser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSER_H
