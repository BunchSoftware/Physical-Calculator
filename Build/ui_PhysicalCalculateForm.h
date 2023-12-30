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
    QFrame *EditPanel;
    QHBoxLayout *horizontalLayout;
    QWidget *EditGroup;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QWidget *LabelEditGroup;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QComboBox *comboBox;
    QFrame *RadioGroup;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *PhysicalCalculateForm)
    {
        if (PhysicalCalculateForm->objectName().isEmpty())
            PhysicalCalculateForm->setObjectName(QString::fromUtf8("PhysicalCalculateForm"));
        PhysicalCalculateForm->resize(1201, 700);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PhysicalCalculateForm->sizePolicy().hasHeightForWidth());
        PhysicalCalculateForm->setSizePolicy(sizePolicy);
        PhysicalCalculateForm->setMinimumSize(QSize(0, 0));
        PhysicalCalculateForm->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(PhysicalCalculateForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(4);
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
        DescriptionImage->setMaximumSize(QSize(1600, 1097));
        QFont font1;
        font1.setPointSize(10);
        DescriptionImage->setFont(font1);
        DescriptionImage->setPixmap(QPixmap(QString::fromUtf8(":/images/absolute_temperature.png")));
        DescriptionImage->setScaledContents(true);
        DescriptionImage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        DescriptionImage->setMargin(10);

        DescriptionGroup->addWidget(DescriptionImage);

        Description = new QLabel(DescriptionGroup_2);
        Description->setObjectName(QString::fromUtf8("Description"));
        sizePolicy.setHeightForWidth(Description->sizePolicy().hasHeightForWidth());
        Description->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(15);
        font2.setKerning(true);
        Description->setFont(font2);
        Description->setStyleSheet(QString::fromUtf8(""));
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
        verticalLayout_2 = new QVBoxLayout(EditGroup);
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(EditGroup);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(EditGroup);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(EditGroup);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(EditGroup);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(EditGroup);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setMinimumSize(QSize(100, 20));

        verticalLayout_2->addWidget(lineEdit_5);


        horizontalLayout->addWidget(EditGroup);

        LabelEditGroup = new QWidget(EditPanel);
        LabelEditGroup->setObjectName(QString::fromUtf8("LabelEditGroup"));
        sizePolicy.setHeightForWidth(LabelEditGroup->sizePolicy().hasHeightForWidth());
        LabelEditGroup->setSizePolicy(sizePolicy);
        LabelEditGroup->setMaximumSize(QSize(200, 16777215));
        verticalLayout_3 = new QVBoxLayout(LabelEditGroup);
        verticalLayout_3->setSpacing(30);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 10, 0, 0);
        label = new QLabel(LabelEditGroup);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(LabelEditGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(LabelEditGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(LabelEditGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(LabelEditGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_5);


        horizontalLayout->addWidget(LabelEditGroup);


        gridLayout_2->addWidget(EditPanel, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(Menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(40, 60));
        pushButton->setSizeIncrement(QSize(0, 0));
        QFont font3;
        font3.setPointSize(15);
        pushButton->setFont(font3);
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

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 0, 1, 1);

        comboBox = new QComboBox(Menu);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setMinimumSize(QSize(0, 60));
        comboBox->setMaximumSize(QSize(16777215, 60));
        comboBox->setStyleSheet(QString::fromUtf8(""));
        comboBox->setInsertPolicy(QComboBox::NoInsert);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_2->addWidget(comboBox, 0, 0, 1, 1);

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

        verticalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(RadioGroup);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        sizePolicy.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(radioButton);


        gridLayout_2->addWidget(RadioGroup, 6, 0, 1, 1);


        gridLayout->addWidget(Menu, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        PhysicalCalculateForm->setCentralWidget(centralwidget);

        retranslateUi(PhysicalCalculateForm);

        QMetaObject::connectSlotsByName(PhysicalCalculateForm);
    } // setupUi

    void retranslateUi(QMainWindow *PhysicalCalculateForm)
    {
        PhysicalCalculateForm->setWindowTitle(QCoreApplication::translate("PhysicalCalculateForm", "MainWindow", nullptr));
        DescriptionImage->setText(QString());
        Description->setText(QCoreApplication::translate("PhysicalCalculateForm", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\267\320\260\320\272\320\276\320\275 \320\235\321\214\321\216\321\202\320\276\320\275\320\260 \342\200\224 \320\264\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\321\213\320\271 \320\267\320\260\320\272\320\276\320\275 \320\274\320\265\321\205\320\260\320\275\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\321\217, \320\276\320\277\320\270\321\201\321\213\320\262\320\260\321\216\321\211\320\270\320\271 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214 \321\203\321\201\320\272\320\276\321\200\320\265\320\275\320\270\321\217 \321\202\320\265\320\273\320\260 \320\276\321\202 \321\200\320\260\320\262\320\275\320\276\320\264\320\265\320\271\321\201\321\202\320\262\321\203\321\216\321\211\320\265\320\271 \320\262\321\201\320\265\321\205 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275"
                        "\320\275\321\213\321\205 \320\272 \321\202\320\265\320\273\321\203 \321\201\320\270\320\273 \320\270 \320\274\320\260\321\201\321\201\321\213 \321\202\320\265\320\273\320\260.\320\236\320\264\320\270\320\275 \320\270\320\267 \321\202\321\200\321\221\321\205 \320\267\320\260\320\272\320\276\320\275\320\276\320\262 \320\235\321\214\321\216\321\202\320\276\320\275\320\260. \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \320\267\320\260\320\272\320\276\320\275 \320\264\320\270\320\275\320\260\320\274\320\270\320\272\320\270. F = ma   F - \321\201\321\203\320\274\320\274\320\260 \320\262\321\201\320\265\321\205 \321\201\320\270\320\273 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\275\321\213\321\205 \320\272 \321\202\320\265\320\273\321\203, [\320\235]. m - \320\274\320\260\321\201\321\201\320\260 \321\202\320\265\320\273\320\260, [\320\232\320\263]. a \342\200\223 \321\203\321\201\320\272\320\276\321\200\320\265\320\275\320\270\320\265 \321\202\320\265\320\273\320\260, [\320"
                        "\274/\321\201^2].", nullptr));
        label->setText(QCoreApplication::translate("PhysicalCalculateForm", "Value", nullptr));
        label_2->setText(QCoreApplication::translate("PhysicalCalculateForm", "Value2", nullptr));
        label_3->setText(QCoreApplication::translate("PhysicalCalculateForm", "Value3", nullptr));
        label_4->setText(QCoreApplication::translate("PhysicalCalculateForm", "Value4", nullptr));
        label_5->setText(QCoreApplication::translate("PhysicalCalculateForm", "Value5", nullptr));
        pushButton->setText(QCoreApplication::translate("PhysicalCalculateForm", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        radioButton_2->setText(QCoreApplication::translate("PhysicalCalculateForm", " \320\234\320\270\320\275\320\270\320\274\321\203\320\274 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\270", nullptr));
        radioButton->setText(QCoreApplication::translate("PhysicalCalculateForm", "\320\234\320\260\320\272\321\201\320\270\320\274\321\203\320\274  \320\270\320\275\321\202\320\265\321\200\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhysicalCalculateForm: public Ui_PhysicalCalculateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHYSICALCALCULATEFORM_H
