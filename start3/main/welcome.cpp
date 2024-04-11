#include "welcome.h"
#include "./ui_welcome.h"

welcome::welcome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::welcome)
{
    ui->setupUi(this);
    ui->backgroundFrame->setStyleSheet("image: url(:/new/prefix1/image/qt8.png);");
    ui->pushButton_E_Goals->hide();
    ui->pushButton_E_LonIn->hide();
    ui->pushButton_E_Register->hide();
    ui->pushButton_P_Goals->hide();
    ui->pushButton_P_LonIn->hide();
    ui->pushButton_P_Register->hide();

}

welcome::~welcome()
{
    delete ui;
}

//Persian language option
void welcome::on_pushButton_Persian_clicked()
{
    ui->backgroundFrame->setStyleSheet("image: url(:/new/prefix1/image/2.png);");
    welcome::setStyleSheet("background-color: rgb(255, 196, 54);");
    ui->backgroundFrame->show();
    ui->pushButton_P_Goals->show();
    ui->pushButton_P_LonIn->show();
    ui->pushButton_P_Register->show();
    ui->pushButton_E_Goals->hide();
    ui->pushButton_E_LonIn->hide();
    ui->pushButton_E_Register->hide();
}

//English language option
void welcome::on_pushButton_English_clicked()
{
    ui->backgroundFrame->setStyleSheet("image: url(:/new/prefix1/image/1.png);");
    welcome::setStyleSheet("background-color: rgb(255, 196, 54);");
    ui->backgroundFrame->show();
    ui->pushButton_P_Goals->hide();
    ui->pushButton_P_LonIn->hide();
    ui->pushButton_P_Register->hide();
    ui->pushButton_E_Goals->show();
    ui->pushButton_E_LonIn->show();
    ui->pushButton_E_Register->show();
}

