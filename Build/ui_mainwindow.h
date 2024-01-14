/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *calculate;
    QAction *physical_calculate;
    QAction *plotting;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(1000, 700);
        MainWindow->setMinimumSize(QSize(1000, 700));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon-calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setIconSize(QSize(512, 512));
        calculate = new QAction(MainWindow);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        physical_calculate = new QAction(MainWindow);
        physical_calculate->setObjectName(QString::fromUtf8("physical_calculate"));
        plotting = new QAction(MainWindow);
        plotting->setObjectName(QString::fromUtf8("plotting"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label->setMargin(100);

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget\n"
"{\n"
"    background-color: #4740d2;\n"
"    border: none;\n"
"}\n"
"QTabWidget::pane \n"
"{\n"
"    border-top-right-radius: 10px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QTabBar\n"
"{\n"
"	background-color: #5049de;\n"
"}\n"
"QTabBar::tab\n"
"{\n"
"	border: none;\n"
"  	padding: 10;\n"
"  	font: 10px Bahnschrift SemiBold;\n"
"  	color: white;\n"
"}\n"
"\n"
"QTabBar::close-button \n"
"{\n"
"    image: url(:/images/close-button-black.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: right; \n"
"}\n"
"\n"
"\n"
"\n"
"QTabBar::tab:first:selected\n"
"{\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"  	\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    background-color: #ffffff;\n"
"    color: #393939;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"	\n"
"}"));
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(menu_2->menuAction());
        menu_2->addAction(calculate);
        menu_2->addAction(physical_calculate);
        menu_2->addAction(plotting);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Physical Calculator", nullptr));
        calculate->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        physical_calculate->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        plotting->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\263\321\200\320\260\321\204\320\270\320\272\320\276\320\262", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\247\321\202\320\276\320\261\321\213 \320\277\321\200\320\270\321\201\321\202\321\203\320\277\320\270\321\202\321\214 \320\272 \321\200\320\265\321\210\320\265\320\275\320\270\321\216 \320\267\320\260\320\264\320\260\321\207, \320\264\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \320\275\320\276\320\262\321\213\320\265 \320\262\320\272\320\273\320\260\320\264\320\272\320\270</p></body></html>", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\320\260\320\264\320\272\320\270", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\272\320\273\320\260\320\264\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
