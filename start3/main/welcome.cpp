#include "welcome.h"
#include "./ui_welcome.h"
#include "singin.h"
#include "login.h"

welcome::welcome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::welcome)
{
    ui->setupUi(this);
    ui->backgroundFrame->setStyleSheet("image: url(:/new/prefix1/image/qt8.png);");
    ui->pushButton_E_LonIn->hide();
    ui->pushButton_E_Register->hide();
    ui->pushButton_P_LogIn->hide();
    ui->pushButton_P_Register->hide();

}

welcome::~welcome()
{
    delete ui;
}

//Persian language option
void welcome::on_pushButton_Persian_clicked()
{
    ui->backgroundFrame->setStyleSheet("image: url(:/new/prefix1/image/qt2.png);");
    welcome::setStyleSheet("background-color: rgb(255, 196, 54);");
    ui->backgroundFrame->show();
    ui->pushButton_P_LogIn->show();
    ui->pushButton_P_Register->show();
    ui->pushButton_E_LonIn->hide();
    ui->pushButton_E_Register->hide();
}

//English language option
void welcome::on_pushButton_English_clicked()
{
    ui->backgroundFrame->setStyleSheet("image: url(:/new/prefix1/image/qt1.png);");
    welcome::setStyleSheet("background-color: rgb(255, 196, 54);");
    ui->backgroundFrame->show();
    ui->pushButton_P_LogIn->hide();
    ui->pushButton_P_Register->hide();
    ui->pushButton_E_LonIn->show();
    ui->pushButton_E_Register->show();
}

//Click on the Persian registration button
void welcome::on_pushButton_P_Register_clicked()
{
    singIn *w2 = new singIn;
    w2->show();

}

//Click the Farsi login button
void welcome::on_pushButton_P_LogIn_clicked()
{
    LogIn *wlog = new LogIn;
    wlog->show();
}

