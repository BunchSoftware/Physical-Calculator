/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
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
    QAction *about_programm;
    QAction *about_documentation;
    QAction *get_review;
    QAction *report_problem;
    QAction *suggest_feature;
    QAction *exit;
    QAction *close_all_tabs;
    QAction *math_parser;
    QAction *familiarization;
    QAction *create_project;
    QAction *close_project;
    QAction *save_project;
    QAction *open_project;
    QAction *last_project;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(1000, 700);
        MainWindow->setMinimumSize(QSize(1000, 700));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        MainWindow->setFont(font);
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
        about_programm = new QAction(MainWindow);
        about_programm->setObjectName(QString::fromUtf8("about_programm"));
        about_documentation = new QAction(MainWindow);
        about_documentation->setObjectName(QString::fromUtf8("about_documentation"));
        get_review = new QAction(MainWindow);
        get_review->setObjectName(QString::fromUtf8("get_review"));
        report_problem = new QAction(MainWindow);
        report_problem->setObjectName(QString::fromUtf8("report_problem"));
        suggest_feature = new QAction(MainWindow);
        suggest_feature->setObjectName(QString::fromUtf8("suggest_feature"));
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setCheckable(false);
        exit->setMenuRole(QAction::QuitRole);
        close_all_tabs = new QAction(MainWindow);
        close_all_tabs->setObjectName(QString::fromUtf8("close_all_tabs"));
        math_parser = new QAction(MainWindow);
        math_parser->setObjectName(QString::fromUtf8("math_parser"));
        familiarization = new QAction(MainWindow);
        familiarization->setObjectName(QString::fromUtf8("familiarization"));
        create_project = new QAction(MainWindow);
        create_project->setObjectName(QString::fromUtf8("create_project"));
        close_project = new QAction(MainWindow);
        close_project->setObjectName(QString::fromUtf8("close_project"));
        save_project = new QAction(MainWindow);
        save_project->setObjectName(QString::fromUtf8("save_project"));
        open_project = new QAction(MainWindow);
        open_project->setObjectName(QString::fromUtf8("open_project"));
        last_project = new QAction(MainWindow);
        last_project->setObjectName(QString::fromUtf8("last_project"));
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(30);
        label->setFont(font1);
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
        menubar->setGeometry(QRect(0, 0, 1000, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menu_3);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(menu_2->menuAction());
        menu->addAction(close_all_tabs);
        menu_2->addAction(calculate);
        menu_2->addAction(physical_calculate);
        menu_2->addAction(plotting);
        menu_2->addAction(math_parser);
        menu_2->addAction(familiarization);
        menu_3->addAction(menu_4->menuAction());
        menu_3->addAction(about_documentation);
        menu_3->addAction(about_programm);
        menu_4->addAction(report_problem);
        menu_4->addAction(suggest_feature);
        menu_4->addAction(get_review);
        menu_5->addAction(create_project);
        menu_5->addAction(open_project);
        menu_5->addAction(last_project);
        menu_5->addAction(save_project);
        menu_5->addAction(close_project);
        menu_5->addAction(exit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Physical Calculator", nullptr));
        calculate->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
#if QT_CONFIG(shortcut)
        calculate->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        physical_calculate->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
#if QT_CONFIG(shortcut)
        physical_calculate->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        plotting->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\265 \320\263\321\200\320\260\321\204\320\270\320\272\320\276\320\262", nullptr));
#if QT_CONFIG(shortcut)
        plotting->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        about_programm->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 Physcial Calculator", nullptr));
#if QT_CONFIG(shortcut)
        about_programm->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        about_documentation->setText(QCoreApplication::translate("MainWindow", "\320\236\320\267\320\275\320\260\320\272\320\276\320\274\320\273\320\265\320\275\320\270\320\265 \321\201 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260\321\206\320\270\320\265\320\271", nullptr));
        get_review->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\271 \320\276\321\202\320\267\321\213\320\262", nullptr));
        report_problem->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\276\320\261\321\211\320\270\321\202\321\214 \320\276 \320\277\321\200\320\276\320\261\320\273\320\265\320\274\320\265", nullptr));
        suggest_feature->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\273\320\276\320\266\320\270\321\202\321\214 \321\204\321\203\320\275\320\272\321\206\320\270\321\216", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        close_all_tabs->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\262\321\201\320\265 \320\262\320\272\320\273\320\260\320\264\320\272\320\270", nullptr));
        math_parser->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\277\320\260\321\200\321\201\320\265\321\200", nullptr));
#if QT_CONFIG(shortcut)
        math_parser->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        familiarization->setText(QCoreApplication::translate("MainWindow", "\320\236\320\267\320\275\320\260\320\272\320\276\320\274\320\273\320\265\320\275\320\270\320\265 \321\201 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\276\320\271", nullptr));
#if QT_CONFIG(shortcut)
        familiarization->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+5", nullptr));
#endif // QT_CONFIG(shortcut)
        create_project->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202 ", nullptr));
#if QT_CONFIG(shortcut)
        create_project->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        close_project->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", nullptr));
#if QT_CONFIG(shortcut)
        close_project->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+W", nullptr));
#endif // QT_CONFIG(shortcut)
        save_project->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", nullptr));
#if QT_CONFIG(shortcut)
        save_project->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        open_project->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", nullptr));
#if QT_CONFIG(shortcut)
        open_project->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        last_project->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\320\264\320\260\320\262\320\275\320\270\320\265 \320\277\321\200\320\276\320\265\320\272\321\202\321\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\247\321\202\320\276\320\261\321\213 \320\277\321\200\320\270\321\201\321\202\321\203\320\277\320\270\321\202\321\214 \320\272 \321\200\320\265\321\210\320\265\320\275\320\270\321\216 \320\267\320\260\320\264\320\260\321\207, \320\264\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \320\275\320\276\320\262\321\213\320\265 \320\262\320\272\320\273\320\260\320\264\320\272\320\270</p></body></html>", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\320\260\320\264\320\272\320\270", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\272\320\273\320\260\320\264\320\272\321\203", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\276\321\202\320\267\321\213\320\262", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
