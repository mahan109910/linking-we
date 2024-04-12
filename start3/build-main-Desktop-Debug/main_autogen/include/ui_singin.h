/********************************************************************************
** Form generated from reading UI file 'singin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGIN_H
#define UI_SINGIN_H

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

class Ui_singIn
{
public:
    QWidget *centralwidget;
    QWidget *widget_p_sing;
    QLineEdit *lineEdit_sing_name;
    QLineEdit *lineEdit_sing_password;
    QLineEdit *lineEdit_sing_REpassword;
    QLineEdit *lineEdit_sing_phonNumber;
    QLineEdit *lineEdit_safe_sing;
    QGroupBox *groupBox_safe_sing;
    QFrame *frame_safe_2;
    QFrame *frame_safe_3;
    QFrame *frame_safe_4;
    QPushButton *pushButton_show_safe;
    QFrame *frame_safe_1;
    QFrame *frame_Poetry;
    QPushButton *pushButton_ok_sing;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *singIn)
    {
        if (singIn->objectName().isEmpty())
            singIn->setObjectName("singIn");
        singIn->resize(1200, 750);
        singIn->setMinimumSize(QSize(600, 375));
        singIn->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 116, 190);"));
        centralwidget = new QWidget(singIn);
        centralwidget->setObjectName("centralwidget");
        widget_p_sing = new QWidget(centralwidget);
        widget_p_sing->setObjectName("widget_p_sing");
        widget_p_sing->setGeometry(QRect(0, -10, 1201, 491));
        widget_p_sing->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/qt_sing_p.png);"));
        lineEdit_sing_name = new QLineEdit(widget_p_sing);
        lineEdit_sing_name->setObjectName("lineEdit_sing_name");
        lineEdit_sing_name->setGeometry(QRect(500, 120, 191, 28));
        lineEdit_sing_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_sing_password = new QLineEdit(widget_p_sing);
        lineEdit_sing_password->setObjectName("lineEdit_sing_password");
        lineEdit_sing_password->setGeometry(QRect(500, 175, 191, 28));
        lineEdit_sing_password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_sing_REpassword = new QLineEdit(widget_p_sing);
        lineEdit_sing_REpassword->setObjectName("lineEdit_sing_REpassword");
        lineEdit_sing_REpassword->setGeometry(QRect(500, 230, 191, 28));
        lineEdit_sing_REpassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_sing_phonNumber = new QLineEdit(widget_p_sing);
        lineEdit_sing_phonNumber->setObjectName("lineEdit_sing_phonNumber");
        lineEdit_sing_phonNumber->setGeometry(QRect(500, 285, 191, 28));
        lineEdit_sing_phonNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_safe_sing = new QLineEdit(widget_p_sing);
        lineEdit_safe_sing->setObjectName("lineEdit_safe_sing");
        lineEdit_safe_sing->setGeometry(QRect(500, 340, 191, 28));
        lineEdit_safe_sing->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox_safe_sing = new QGroupBox(widget_p_sing);
        groupBox_safe_sing->setObjectName("groupBox_safe_sing");
        groupBox_safe_sing->setGeometry(QRect(310, 380, 661, 80));
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
        frame_Poetry = new QFrame(centralwidget);
        frame_Poetry->setObjectName("frame_Poetry");
        frame_Poetry->setGeometry(QRect(140, 400, 951, 341));
        frame_Poetry->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/shQt.png);"));
        frame_Poetry->setFrameShape(QFrame::StyledPanel);
        frame_Poetry->setFrameShadow(QFrame::Raised);
        pushButton_ok_sing = new QPushButton(centralwidget);
        pushButton_ok_sing->setObjectName("pushButton_ok_sing");
        pushButton_ok_sing->setGeometry(QRect(540, 480, 101, 31));
        pushButton_ok_sing->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 53, 106);\n"
"color: rgb(255, 255, 255);"));
        singIn->setCentralWidget(centralwidget);
        frame_Poetry->raise();
        widget_p_sing->raise();
        pushButton_ok_sing->raise();
        menubar = new QMenuBar(singIn);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 25));
        singIn->setMenuBar(menubar);
        statusbar = new QStatusBar(singIn);
        statusbar->setObjectName("statusbar");
        singIn->setStatusBar(statusbar);

        retranslateUi(singIn);

        QMetaObject::connectSlotsByName(singIn);
    } // setupUi

    void retranslateUi(QMainWindow *singIn)
    {
        singIn->setWindowTitle(QCoreApplication::translate("singIn", "MainWindow", nullptr));
        groupBox_safe_sing->setTitle(QString());
        pushButton_show_safe->setText(QCoreApplication::translate("singIn", "\331\206\331\205\330\247\333\214\330\264 \330\271\330\257\330\257", nullptr));
        pushButton_ok_sing->setText(QCoreApplication::translate("singIn", "\330\252\330\247\333\214\333\214\330\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class singIn: public Ui_singIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGIN_H
