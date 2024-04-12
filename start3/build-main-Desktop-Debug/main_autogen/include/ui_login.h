/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QWidget *centralwidget;
    QFrame *frame_Log;
    QGroupBox *groupBox_safe_sing;
    QFrame *frame_safe_2;
    QFrame *frame_safe_3;
    QFrame *frame_safe_4;
    QPushButton *pushButton_show_safe;
    QFrame *frame_safe_1;
    QLineEdit *lineEdit_log_name;
    QLineEdit *lineEdit_log_Password;
    QLineEdit *lineEdit_log_safe;
    QFrame *frame_Poetry_log;
    QPushButton *pushButton_ok_log;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName("LogIn");
        LogIn->resize(1200, 750);
        LogIn->setMinimumSize(QSize(600, 375));
        LogIn->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 116, 190);"));
        centralwidget = new QWidget(LogIn);
        centralwidget->setObjectName("centralwidget");
        frame_Log = new QFrame(centralwidget);
        frame_Log->setObjectName("frame_Log");
        frame_Log->setGeometry(QRect(0, 40, 1201, 361));
        frame_Log->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/qt_log_p.png);"));
        frame_Log->setFrameShape(QFrame::StyledPanel);
        frame_Log->setFrameShadow(QFrame::Raised);
        groupBox_safe_sing = new QGroupBox(frame_Log);
        groupBox_safe_sing->setObjectName("groupBox_safe_sing");
        groupBox_safe_sing->setGeometry(QRect(310, 270, 661, 80));
        frame_safe_2 = new QFrame(groupBox_safe_sing);
        frame_safe_2->setObjectName("frame_safe_2");
        frame_safe_2->setGeometry(QRect(120, 10, 81, 61));
        frame_safe_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/rang1.png);\n"
"background-color: rgb(12, 53, 106);"));
        frame_safe_2->setFrameShape(QFrame::StyledPanel);
        frame_safe_2->setFrameShadow(QFrame::Raised);
        frame_safe_3 = new QFrame(groupBox_safe_sing);
        frame_safe_3->setObjectName("frame_safe_3");
        frame_safe_3->setGeometry(QRect(210, 10, 81, 61));
        frame_safe_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/rang1.png);\n"
"background-color: rgb(12, 53, 106);"));
        frame_safe_3->setFrameShape(QFrame::StyledPanel);
        frame_safe_3->setFrameShadow(QFrame::Raised);
        frame_safe_4 = new QFrame(groupBox_safe_sing);
        frame_safe_4->setObjectName("frame_safe_4");
        frame_safe_4->setGeometry(QRect(300, 10, 81, 61));
        frame_safe_4->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/rang1.png);\n"
"background-color: rgb(12, 53, 106);"));
        frame_safe_4->setFrameShape(QFrame::StyledPanel);
        frame_safe_4->setFrameShadow(QFrame::Raised);
        pushButton_show_safe = new QPushButton(groupBox_safe_sing);
        pushButton_show_safe->setObjectName("pushButton_show_safe");
        pushButton_show_safe->setGeometry(QRect(452, 30, 121, 29));
        pushButton_show_safe->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"image: url(:/new/prefix1/image/rang1.png);\n"
"background-color: rgb(12, 53, 106);"));
        frame_safe_1 = new QFrame(groupBox_safe_sing);
        frame_safe_1->setObjectName("frame_safe_1");
        frame_safe_1->setGeometry(QRect(30, 10, 81, 61));
        frame_safe_1->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/rang1.png);\n"
"background-color: rgb(12, 53, 106);"));
        frame_safe_1->setFrameShape(QFrame::StyledPanel);
        frame_safe_1->setFrameShadow(QFrame::Raised);
        lineEdit_log_name = new QLineEdit(frame_Log);
        lineEdit_log_name->setObjectName("lineEdit_log_name");
        lineEdit_log_name->setGeometry(QRect(500, 70, 191, 28));
        lineEdit_log_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_log_Password = new QLineEdit(frame_Log);
        lineEdit_log_Password->setObjectName("lineEdit_log_Password");
        lineEdit_log_Password->setGeometry(QRect(500, 140, 191, 28));
        lineEdit_log_Password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_log_safe = new QLineEdit(frame_Log);
        lineEdit_log_safe->setObjectName("lineEdit_log_safe");
        lineEdit_log_safe->setGeometry(QRect(500, 210, 191, 28));
        lineEdit_log_safe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_log_name->raise();
        lineEdit_log_Password->raise();
        lineEdit_log_safe->raise();
        groupBox_safe_sing->raise();
        frame_Poetry_log = new QFrame(centralwidget);
        frame_Poetry_log->setObjectName("frame_Poetry_log");
        frame_Poetry_log->setGeometry(QRect(160, 360, 951, 281));
        frame_Poetry_log->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/qt_Poetry.png);"));
        frame_Poetry_log->setFrameShape(QFrame::StyledPanel);
        frame_Poetry_log->setFrameShadow(QFrame::Raised);
        pushButton_ok_log = new QPushButton(centralwidget);
        pushButton_ok_log->setObjectName("pushButton_ok_log");
        pushButton_ok_log->setGeometry(QRect(560, 430, 101, 31));
        pushButton_ok_log->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 53, 106);\n"
"color: rgb(255, 255, 255);"));
        LogIn->setCentralWidget(centralwidget);
        frame_Poetry_log->raise();
        frame_Log->raise();
        pushButton_ok_log->raise();
        menubar = new QMenuBar(LogIn);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 25));
        LogIn->setMenuBar(menubar);
        statusbar = new QStatusBar(LogIn);
        statusbar->setObjectName("statusbar");
        LogIn->setStatusBar(statusbar);

        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QMainWindow *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "MainWindow", nullptr));
        groupBox_safe_sing->setTitle(QString());
        pushButton_show_safe->setText(QCoreApplication::translate("LogIn", "\331\206\331\205\330\247\333\214\330\264 \330\271\330\257\330\257", nullptr));
        pushButton_ok_log->setText(QCoreApplication::translate("LogIn", "\330\252\330\247\333\214\333\214\330\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
