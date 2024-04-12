#include "login.h"
#include "ui_login.h"

LogIn::LogIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogIn)
{
    ui->setupUi(this);
}

LogIn::~LogIn()
{
    delete ui;
}

//Display the security code
void LogIn::on_pushButton_show_safe_clicked()
{
    //The first box of the number
    int r1 = rand()%10;
    switch (r1) {
    case 0:
        ui->frame_safe_1->setStyleSheet("image: url(:/new/prefix1/image/0.png);");

        break;
    case 1:
        ui->frame_safe_1->setStyleSheet("image: url(:/new/prefix1/image/1.png);");

        break;
    case 2:
        ui->frame_safe_1->setStyleSheet("image: url(:/new/prefix1/image/2.png);");

        break;
    case 3:
        ui->frame_safe_1->setStyleSheet("image: url(:/new/prefix1/image/3.png);");

        break;
    case 4:
        ui->frame_safe_1->setStyleSheet("image: url(:/new/prefix1/image/4.png);");

        break;
    case 5:
        ui->frame_safe_1->setStyleSheet("image: url(:/new/prefix1/image/5.png);");

        break;
    case 6:
        ui->frame_safe_1->setStyleSheet("image: url(:/new/prefix1/image/6.png);");

        break;
    case 7:
        ui->frame_safe_1->setStyleSheet("image: url(:/new/prefix1/image/7.png);");

        break;
    case 8:
        ui->frame_safe_1->setStyleSheet("image: url(:/new/prefix1/image/8.png);");

        break;
    case 9:
        ui->frame_safe_1->setStyleSheet("image: url(:/new/prefix1/image/9.png);");

        break;
    default:
        break;
    }

    //The second box is the number
    int r2 = rand()%10;
    switch (r2) {
    case 0:
        ui->frame_safe_2->setStyleSheet("image: url(:/new/prefix1/image/0.png);");

        break;
    case 1:
        ui->frame_safe_2->setStyleSheet("image: url(:/new/prefix1/image/1.png);");

        break;
    case 2:
        ui->frame_safe_2->setStyleSheet("image: url(:/new/prefix1/image/2.png);");

        break;
    case 3:
        ui->frame_safe_2->setStyleSheet("image: url(:/new/prefix1/image/3.png);");

        break;
    case 4:
        ui->frame_safe_2->setStyleSheet("image: url(:/new/prefix1/image/4.png);");

        break;
    case 5:
        ui->frame_safe_2->setStyleSheet("image: url(:/new/prefix1/image/5.png);");

        break;
    case 6:
        ui->frame_safe_2->setStyleSheet("image: url(:/new/prefix1/image/6.png);");

        break;
    case 7:
        ui->frame_safe_2->setStyleSheet("image: url(:/new/prefix1/image/7.png);");

        break;
    case 8:
        ui->frame_safe_2->setStyleSheet("image: url(:/new/prefix1/image/8.png);");

        break;
    case 9:
        ui->frame_safe_2->setStyleSheet("image: url(:/new/prefix1/image/9.png);");

        break;
    default:
        break;
    }


    //The third box is the number
    int r3 = rand()%10;
    switch (r3) {
    case 0:
        ui->frame_safe_3->setStyleSheet("image: url(:/new/prefix1/image/0.png);");

        break;
    case 1:
        ui->frame_safe_3->setStyleSheet("image: url(:/new/prefix1/image/1.png);");

        break;
    case 2:
        ui->frame_safe_3->setStyleSheet("image: url(:/new/prefix1/image/2.png);");

        break;
    case 3:
        ui->frame_safe_3->setStyleSheet("image: url(:/new/prefix1/image/3.png);");

        break;
    case 4:
        ui->frame_safe_3->setStyleSheet("image: url(:/new/prefix1/image/4.png);");

        break;
    case 5:
        ui->frame_safe_3->setStyleSheet("image: url(:/new/prefix1/image/5.png);");

        break;
    case 6:
        ui->frame_safe_3->setStyleSheet("image: url(:/new/prefix1/image/6.png);");

        break;
    case 7:
        ui->frame_safe_3->setStyleSheet("image: url(:/new/prefix1/image/7.png);");

        break;
    case 8:
        ui->frame_safe_3->setStyleSheet("image: url(:/new/prefix1/image/8.png);");

        break;
    case 9:
        ui->frame_safe_3->setStyleSheet("image: url(:/new/prefix1/image/9.png);");

        break;
    default:
        break;
    }

    //The fourth box is the number
    int r4 = rand()%10;
    switch (r4) {
    case 0:
        ui->frame_safe_4->setStyleSheet("image: url(:/new/prefix1/image/0.png);");

        break;
    case 1:
        ui->frame_safe_4->setStyleSheet("image: url(:/new/prefix1/image/1.png);");

        break;
    case 2:
        ui->frame_safe_4->setStyleSheet("image: url(:/new/prefix1/image/2.png);");

        break;
    case 3:
        ui->frame_safe_4->setStyleSheet("image: url(:/new/prefix1/image/3.png);");

        break;
    case 4:
        ui->frame_safe_4->setStyleSheet("image: url(:/new/prefix1/image/4.png);");

        break;
    case 5:
        ui->frame_safe_4->setStyleSheet("image: url(:/new/prefix1/image/5.png);");

        break;
    case 6:
        ui->frame_safe_4->setStyleSheet("image: url(:/new/prefix1/image/6.png);");

        break;
    case 7:
        ui->frame_safe_4->setStyleSheet("image: url(:/new/prefix1/image/7.png);");

        break;
    case 8:
        ui->frame_safe_4->setStyleSheet("image: url(:/new/prefix1/image/8.png);");

        break;
    case 9:
        ui->frame_safe_4->setStyleSheet("image: url(:/new/prefix1/image/9.png);");

        break;
    default:
        break;
    }
}


