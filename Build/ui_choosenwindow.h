/********************************************************************************
** Form generated from reading UI file 'choosenwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSENWINDOW_H
#define UI_CHOOSENWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choosenWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;

    void setupUi(QWidget *choosenWindow)
    {
        if (choosenWindow->objectName().isEmpty())
            choosenWindow->setObjectName(QString::fromUtf8("choosenWindow"));
        choosenWindow->resize(757, 548);
        tabWidget = new QTabWidget(choosenWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 761, 551));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());

        retranslateUi(choosenWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(choosenWindow);
    } // setupUi

    void retranslateUi(QWidget *choosenWindow)
    {
        choosenWindow->setWindowTitle(QCoreApplication::translate("choosenWindow", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("choosenWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choosenWindow: public Ui_choosenWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSENWINDOW_H
