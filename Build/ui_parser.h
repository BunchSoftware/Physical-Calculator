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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parser
{
public:
    QGridLayout *gridLayout;
    QFrame *formFrame;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *line;
    QSpacerItem *verticalSpacer_4;
    QLabel *result;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *parser)
    {
        if (parser->objectName().isEmpty())
            parser->setObjectName(QString::fromUtf8("parser"));
        parser->resize(1182, 563);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(parser->sizePolicy().hasHeightForWidth());
        parser->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        parser->setFont(font);
        parser->setStyleSheet(QString::fromUtf8("font: 30px;"));
        gridLayout = new QGridLayout(parser);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(30, 0, 30, 0);
        formFrame = new QFrame(parser);
        formFrame->setObjectName(QString::fromUtf8("formFrame"));
        sizePolicy.setHeightForWidth(formFrame->sizePolicy().hasHeightForWidth());
        formFrame->setSizePolicy(sizePolicy);
        formFrame->setMaximumSize(QSize(16777215, 100));
        formLayout = new QFormLayout(formFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);


        gridLayout->addWidget(formFrame, 8, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        line = new QLineEdit(parser);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMaximumSize(QSize(16777215, 50));
        line->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border: none;\n"
"   border-radius: 13px;\n"
"   color: #FFF;\n"
"   padding: 7px;\n"
"  background-color: rgb(60,56,141);\n"
"}"));

        verticalLayout->addWidget(line);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        result = new QLabel(parser);
        result->setObjectName(QString::fromUtf8("result"));
        sizePolicy.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy);
        result->setMaximumSize(QSize(16777215, 50));
        result->setStyleSheet(QString::fromUtf8("font: 35px;"));
        result->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(result);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton = new QPushButton(parser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(40, 60));
        pushButton->setMaximumSize(QSize(700, 60));
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
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout, 7, 0, 1, 1);


        retranslateUi(parser);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(parser);
    } // setupUi

    void retranslateUi(QWidget *parser)
    {
        parser->setWindowTitle(QCoreApplication::translate("parser", "Form", nullptr));
        result->setText(QCoreApplication::translate("parser", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202: 0", nullptr));
        pushButton->setText(QCoreApplication::translate("parser", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parser: public Ui_parser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSER_H
