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
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QWidget *centralwidget;
    QFrame *backgroundFrame;
    QPushButton *pushButton_Persian;
    QPushButton *pushButton_English;
    QPushButton *pushButton_P_Register;
    QPushButton *pushButton_P_LonIn;
    QPushButton *pushButton_E_Register;
    QPushButton *pushButton_E_LonIn;
    QPushButton *pushButton_P_Goals;
    QPushButton *pushButton_E_Goals;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName("welcome");
        welcome->resize(1200, 750);
        welcome->setMinimumSize(QSize(600, 375));
        welcome->setMaximumSize(QSize(16777215, 16777215));
        welcome->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 116, 190);\n"
""));
        centralwidget = new QWidget(welcome);
        centralwidget->setObjectName("centralwidget");
        backgroundFrame = new QFrame(centralwidget);
        backgroundFrame->setObjectName("backgroundFrame");
        backgroundFrame->setGeometry(QRect(30, 90, 1151, 421));
        backgroundFrame->setMinimumSize(QSize(600, 375));
        backgroundFrame->setMaximumSize(QSize(1200, 750));
        backgroundFrame->setStyleSheet(QString::fromUtf8(""));
        backgroundFrame->setFrameShape(QFrame::StyledPanel);
        backgroundFrame->setFrameShadow(QFrame::Raised);
        pushButton_Persian = new QPushButton(centralwidget);
        pushButton_Persian->setObjectName("pushButton_Persian");
        pushButton_Persian->setGeometry(QRect(30, 10, 100, 30));
        pushButton_Persian->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 53, 106);\n"
"color: rgb(255, 196, 54);"));
        pushButton_English = new QPushButton(centralwidget);
        pushButton_English->setObjectName("pushButton_English");
        pushButton_English->setGeometry(QRect(150, 10, 100, 30));
        pushButton_English->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 53, 106);\n"
"color: rgb(255, 196, 54);"));
        pushButton_P_Register = new QPushButton(centralwidget);
        pushButton_P_Register->setObjectName("pushButton_P_Register");
        pushButton_P_Register->setGeometry(QRect(320, 520, 230, 40));
        pushButton_P_Register->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"color: rgb(255, 196, 54);\n"
"background-color: rgb(12, 53, 106);"));
        pushButton_P_LonIn = new QPushButton(centralwidget);
        pushButton_P_LonIn->setObjectName("pushButton_P_LonIn");
        pushButton_P_LonIn->setGeometry(QRect(30, 520, 280, 40));
        pushButton_P_LonIn->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"color: rgb(255, 196, 54);\n"
"background-color: rgb(12, 53, 106);"));
        pushButton_E_Register = new QPushButton(centralwidget);
        pushButton_E_Register->setObjectName("pushButton_E_Register");
        pushButton_E_Register->setGeometry(QRect(630, 520, 151, 40));
        pushButton_E_Register->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"color: rgb(255, 196, 54);\n"
"background-color: rgb(12, 53, 106);"));
        pushButton_E_LonIn = new QPushButton(centralwidget);
        pushButton_E_LonIn->setObjectName("pushButton_E_LonIn");
        pushButton_E_LonIn->setGeometry(QRect(790, 520, 391, 40));
        pushButton_E_LonIn->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"color: rgb(255, 196, 54);\n"
"background-color: rgb(12, 53, 106);"));
        pushButton_P_Goals = new QPushButton(centralwidget);
        pushButton_P_Goals->setObjectName("pushButton_P_Goals");
        pushButton_P_Goals->setEnabled(true);
        pushButton_P_Goals->setGeometry(QRect(1020, 40, 161, 40));
        pushButton_P_Goals->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"color: rgb(255, 196, 54);\n"
"background-color: rgb(12, 53, 106);"));
        pushButton_E_Goals = new QPushButton(centralwidget);
        pushButton_E_Goals->setObjectName("pushButton_E_Goals");
        pushButton_E_Goals->setEnabled(true);
        pushButton_E_Goals->setGeometry(QRect(30, 50, 301, 40));
        pushButton_E_Goals->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Segoe UI Black\";\n"
"color: rgb(255, 196, 54);\n"
"background-color: rgb(12, 53, 106);\n"
""));
        welcome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(welcome);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 25));
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
        pushButton_Persian->setText(QCoreApplication::translate("welcome", "\331\201\330\247\330\261\330\263\333\214", nullptr));
        pushButton_English->setText(QCoreApplication::translate("welcome", "English", nullptr));
        pushButton_P_Register->setText(QCoreApplication::translate("welcome", "\331\207\331\205\333\214\331\206 \330\255\330\247\331\204\330\247 \330\253\330\250\330\252 \331\206\330\247\331\205 \332\251\331\206\333\214\330\257", nullptr));
        pushButton_P_LonIn->setText(QCoreApplication::translate("welcome", "\331\202\330\250\331\204\330\247 \330\253\330\250\330\252 \331\206\330\247\331\205 \332\251\330\261\330\257\333\214\330\257 \331\210\330\247\330\261\330\257 \330\264\331\210\333\214\330\257", nullptr));
        pushButton_E_Register->setText(QCoreApplication::translate("welcome", "register now", nullptr));
        pushButton_E_LonIn->setText(QCoreApplication::translate("welcome", "You have already registered, enter", nullptr));
        pushButton_P_Goals->setText(QCoreApplication::translate("welcome", "\330\247\331\207\330\257\330\247\331\201 \331\205\330\254\331\205\331\210\330\271\331\207", nullptr));
        pushButton_E_Goals->setText(QCoreApplication::translate("welcome", "Objectives of the collection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
