/********************************************************************************
** Form generated from reading UI file 'PhysicalCalculateForm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHYSICALCALCULATEFORM_H
#define UI_PHYSICALCALCULATEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhysicalCalculateForm
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *DescriptionGroup_2;
    QVBoxLayout *DescriptionGroup;
    QLabel *DescriptionImage;
    QLabel *Description;
    QFrame *Menu;
    QGridLayout *gridLayout_2;
    QFrame *RadioGroup;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_12;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_11;
    QFrame *EditPanel;
    QHBoxLayout *horizontalLayout;
    QWidget *EditGroup;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *lineEdit_5;
    QWidget *LabelEditGroup;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *PhysicalCalculateForm)
    {
        if (PhysicalCalculateForm->objectName().isEmpty())
            PhysicalCalculateForm->setObjectName(QString::fromUtf8("PhysicalCalculateForm"));
        PhysicalCalculateForm->resize(2144, 1124);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PhysicalCalculateForm->sizePolicy().hasHeightForWidth());
        PhysicalCalculateForm->setSizePolicy(sizePolicy);
        PhysicalCalculateForm->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon-calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        PhysicalCalculateForm->setWindowIcon(icon);
        PhysicalCalculateForm->setStyleSheet(QString::fromUtf8("font: 30px;\n"
"\n"
"QPushButton\n"
"{\n"
"    padding: 10px 10px 10px 10px;\n"
"	border: none;\n"
"	border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: #f8f8f8;\n"
"	border-radius: 10px;\n"
"    border: none;\n"
"    selection-background-color: rgb(101,69,149);\n"
"    selection-color: white;\n"
"}"));
        centralwidget = new QWidget(PhysicalCalculateForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        centralwidget->setFont(font);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(50);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(50, 50, 50, 50);
        DescriptionGroup_2 = new QFrame(centralwidget);
        DescriptionGroup_2->setObjectName(QString::fromUtf8("DescriptionGroup_2"));
        sizePolicy.setHeightForWidth(DescriptionGroup_2->sizePolicy().hasHeightForWidth());
        DescriptionGroup_2->setSizePolicy(sizePolicy);
        DescriptionGroup = new QVBoxLayout(DescriptionGroup_2);
        DescriptionGroup->setSpacing(0);
        DescriptionGroup->setObjectName(QString::fromUtf8("DescriptionGroup"));
        DescriptionGroup->setSizeConstraint(QLayout::SetDefaultConstraint);
        DescriptionGroup->setContentsMargins(30, 0, 0, 0);
        DescriptionImage = new QLabel(DescriptionGroup_2);
        DescriptionImage->setObjectName(QString::fromUtf8("DescriptionImage"));
        sizePolicy.setHeightForWidth(DescriptionImage->sizePolicy().hasHeightForWidth());
        DescriptionImage->setSizePolicy(sizePolicy);
        DescriptionImage->setMinimumSize(QSize(0, 0));
        DescriptionImage->setMaximumSize(QSize(1500, 1000));
        DescriptionImage->setFont(font);
        DescriptionImage->setTextFormat(Qt::AutoText);
        DescriptionImage->setPixmap(QPixmap(QString::fromUtf8(":/images/absolute_temperature.png")));
        DescriptionImage->setScaledContents(true);
        DescriptionImage->setAlignment(Qt::AlignCenter);
        DescriptionImage->setWordWrap(false);
        DescriptionImage->setMargin(10);

        DescriptionGroup->addWidget(DescriptionImage);

        Description = new QLabel(DescriptionGroup_2);
        Description->setObjectName(QString::fromUtf8("Description"));
        sizePolicy.setHeightForWidth(Description->sizePolicy().hasHeightForWidth());
        Description->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setKerning(true);
        Description->setFont(font1);
        Description->setStyleSheet(QString::fromUtf8("font: 18px;"));
        Description->setTextFormat(Qt::AutoText);
        Description->setScaledContents(true);
        Description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Description->setWordWrap(true);

        DescriptionGroup->addWidget(Description);


        gridLayout->addWidget(DescriptionGroup_2, 0, 2, 1, 1);

        Menu = new QFrame(centralwidget);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        sizePolicy.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy);
        Menu->setMaximumSize(QSize(500, 16777215));
        gridLayout_2 = new QGridLayout(Menu);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        RadioGroup = new QFrame(Menu);
        RadioGroup->setObjectName(QString::fromUtf8("RadioGroup"));
        sizePolicy.setHeightForWidth(RadioGroup->sizePolicy().hasHeightForWidth());
        RadioGroup->setSizePolicy(sizePolicy);
        RadioGroup->setMaximumSize(QSize(500, 16777215));
        verticalLayout = new QVBoxLayout(RadioGroup);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(RadioGroup);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        sizePolicy.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy);
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton \n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:hover \n"
"{\n"
"	background-color: lightgray;\n"
"	border: 1px solid rgb(101, 69, 149);\n"
"	border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::checked \n"
"{\n"
"	image:url(:/images/radiobutton.svg); \n"
"	width: 14px; \n"
"	height: 14px;\n"
"\n"
"}\n"
"\n"
"QRadioButton::disabled\n"
"{\n"
"\n"
"}\n"
"\n"
"QRadioButton::indicator::disabled\n"
"{\n"
"\n"
"}"));

        verticalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(RadioGroup);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        sizePolicy.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy);
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton \n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:hover \n"
"{\n"
"	background-color: lightgray;\n"
"	border: 1px solid rgb(101, 69, 149);\n"
"	border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::checked \n"
"{\n"
"	image:url(:/images/radiobutton.svg); \n"
"	width: 14px; \n"
"	height: 14px;\n"
"\n"
"}\n"
"\n"
"QRadioButton::disabled\n"
"{\n"
"\n"
"}\n"
"\n"
"QRadioButton::indicator::disabled\n"
"{\n"
"\n"
"}"));

        verticalLayout->addWidget(radioButton);


        gridLayout_2->addWidget(RadioGroup, 5, 0, 1, 1);

        comboBox = new QComboBox(Menu);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
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
        comboBox->setInsertPolicy(QComboBox::NoInsert);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_2->addWidget(comboBox, 0, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_12, 3, 0, 1, 1);

        pushButton = new QPushButton(Menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(40, 60));
        pushButton->setSizeIncrement(QSize(0, 0));
        pushButton->setFont(font);
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

        gridLayout_2->addWidget(pushButton, 4, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_11, 1, 0, 1, 1);

        EditPanel = new QFrame(Menu);
        EditPanel->setObjectName(QString::fromUtf8("EditPanel"));
        sizePolicy.setHeightForWidth(EditPanel->sizePolicy().hasHeightForWidth());
        EditPanel->setSizePolicy(sizePolicy);
        EditPanel->setFrameShape(QFrame::StyledPanel);
        EditPanel->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(EditPanel);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        EditGroup = new QWidget(EditPanel);
        EditGroup->setObjectName(QString::fromUtf8("EditGroup"));
        sizePolicy.setHeightForWidth(EditGroup->sizePolicy().hasHeightForWidth());
        EditGroup->setSizePolicy(sizePolicy);
        EditGroup->setMaximumSize(QSize(300, 16777215));
        EditGroup->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border: none;\n"
"   border-radius: 13px;\n"
"   color: #FFF;\n"
"   padding: 7px;\n"
"  background-color: rgb(60,56,141);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(EditGroup);
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(EditGroup);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(0, 40));
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        lineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout_2->addWidget(lineEdit);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        lineEdit_2 = new QLineEdit(EditGroup);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMinimumSize(QSize(0, 40));

        verticalLayout_2->addWidget(lineEdit_2);

        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        lineEdit_3 = new QLineEdit(EditGroup);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
        lineEdit_3->setMinimumSize(QSize(0, 40));

        verticalLayout_2->addWidget(lineEdit_3);

        verticalSpacer_5 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        lineEdit_4 = new QLineEdit(EditGroup);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy1.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy1);
        lineEdit_4->setMinimumSize(QSize(0, 40));

        verticalLayout_2->addWidget(lineEdit_4);

        verticalSpacer_6 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        lineEdit_5 = new QLineEdit(EditGroup);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        sizePolicy1.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy1);
        lineEdit_5->setMinimumSize(QSize(100, 40));

        verticalLayout_2->addWidget(lineEdit_5);


        horizontalLayout->addWidget(EditGroup);

        LabelEditGroup = new QWidget(EditPanel);
        LabelEditGroup->setObjectName(QString::fromUtf8("LabelEditGroup"));
        sizePolicy.setHeightForWidth(LabelEditGroup->sizePolicy().hasHeightForWidth());
        LabelEditGroup->setSizePolicy(sizePolicy);
        LabelEditGroup->setMaximumSize(QSize(200, 16777215));
        LabelEditGroup->setStyleSheet(QString::fromUtf8("padding-right: 20px;"));
        verticalLayout_3 = new QVBoxLayout(LabelEditGroup);
        verticalLayout_3->setSpacing(30);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 0, 0, 0);
        label = new QLabel(LabelEditGroup);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(100, 40));
        label->setAcceptDrops(false);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->setWordWrap(true);
        label->setMargin(0);

        verticalLayout_3->addWidget(label);

        verticalSpacer_10 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_10);

        label_2 = new QLabel(LabelEditGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(100, 40));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setLineWidth(0);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setWordWrap(true);
        label_2->setMargin(0);
        label_2->setIndent(0);

        verticalLayout_3->addWidget(label_2);

        verticalSpacer_9 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_9);

        label_3 = new QLabel(LabelEditGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(100, 40));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3->setWordWrap(true);
        label_3->setMargin(0);

        verticalLayout_3->addWidget(label_3);

        verticalSpacer_8 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        label_4 = new QLabel(LabelEditGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(100, 40));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4->setWordWrap(true);
        label_4->setMargin(0);

        verticalLayout_3->addWidget(label_4);

        verticalSpacer_7 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);

        label_5 = new QLabel(LabelEditGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(100, 40));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5->setWordWrap(true);
        label_5->setMargin(0);

        verticalLayout_3->addWidget(label_5);


        horizontalLayout->addWidget(LabelEditGroup);


        gridLayout_2->addWidget(EditPanel, 2, 0, 1, 1);


        gridLayout->addWidget(Menu, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        PhysicalCalculateForm->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)

        retranslateUi(PhysicalCalculateForm);

        QMetaObject::connectSlotsByName(PhysicalCalculateForm);
    } // setupUi

    void retranslateUi(QMainWindow *PhysicalCalculateForm)
    {
        PhysicalCalculateForm->setWindowTitle(QCoreApplication::translate("PhysicalCalculateForm", "1", nullptr));
        DescriptionImage->setText(QString());
        Description->setText(QCoreApplication::translate("PhysicalCalculateForm", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\267\320\260\320\272\320\276\320\275 \320\235\321\214\321\216\321\202\320\276\320\275\320\260 \342\200\224 \320\264\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\321\213\320\271 \320\267\320\260\320\272\320\276\320\275 \320\274\320\265\321\205\320\260\320\275\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\321\217, \320\276\320\277\320\270\321\201\321\213\320\262\320\260\321\216\321\211\320\270\320\271 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214 \321\203\321\201\320\272\320\276\321\200\320\265\320\275\320\270\321\217 \321\202\320\265\320\273\320\260 \320\276\321\202 \321\200\320\260\320\262\320\275\320\276\320\264\320\265\320\271\321\201\321\202\320\262\321\203\321\216\321\211\320\265\320\271 \320\262\321\201\320\265\321\205 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275"
                        "\320\275\321\213\321\205 \320\272 \321\202\320\265\320\273\321\203 \321\201\320\270\320\273 \320\270 \320\274\320\260\321\201\321\201\321\213 \321\202\320\265\320\273\320\260.\320\236\320\264\320\270\320\275 \320\270\320\267 \321\202\321\200\321\221\321\205 \320\267\320\260\320\272\320\276\320\275\320\276\320\262 \320\235\321\214\321\216\321\202\320\276\320\275\320\260. \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \320\267\320\260\320\272\320\276\320\275 \320\264\320\270\320\275\320\260\320\274\320\270\320\272\320\270. F = ma   F - \321\201\321\203\320\274\320\274\320\260 \320\262\321\201\320\265\321\205 \321\201\320\270\320\273 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\275\321\213\321\205 \320\272 \321\202\320\265\320\273\321\203, [\320\235]. m - \320\274\320\260\321\201\321\201\320\260 \321\202\320\265\320\273\320\260, [\320\232\320\263]. a \342\200\223 \321\203\321\201\320\272\320\276\321\200\320\265\320\275\320\270\320\265 \321\202\320\265\320\273\320\260, [\320"
                        "\274/\321\201^2].", nullptr));
        radioButton_2->setText(QCoreApplication::translate("PhysicalCalculateForm", " \320\234\320\270\320\275\320\270\320\274\321\203\320\274 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\270", nullptr));
        radioButton->setText(QCoreApplication::translate("PhysicalCalculateForm", "\320\234\320\260\320\272\321\201\320\270\320\274\321\203\320\274  \320\270\320\275\321\202\320\265\321\200\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("PhysicalCalculateForm", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("PhysicalCalculateForm", "Value", nullptr));
        label_2->setText(QCoreApplication::translate("PhysicalCalculateForm", "Value2", nullptr));
        label_3->setText(QCoreApplication::translate("PhysicalCalculateForm", "Value3", nullptr));
        label_4->setText(QCoreApplication::translate("PhysicalCalculateForm", "Value4", nullptr));
        label_5->setText(QCoreApplication::translate("PhysicalCalculateForm", "Value5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhysicalCalculateForm: public Ui_PhysicalCalculateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHYSICALCALCULATEFORM_H
