/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName("welcome");
        welcome->resize(800, 600);
        centralwidget = new QWidget(welcome);
        centralwidget->setObjectName("centralwidget");
        welcome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(welcome);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        welcome->setMenuBar(menubar);
        statusbar = new QStatusBar(welcome);
        statusbar->setObjectName("statusbar");
        welcome->setStatusBar(statusbar);

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QMainWindow *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
