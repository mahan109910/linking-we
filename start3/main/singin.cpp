#include "singin.h"
#include "ui_singin.h"
#include "welcome.h"
#include "QIntValidator"
#include "qmessagebox.h"

int r1 ,r2 ,r3 ,r4 ;

singIn::singIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::singIn)
{
    ui->setupUi(this);
    ui->lineEdit_safe_sing->setValidator(new QIntValidator());
}


singIn::~singIn()
{
    delete ui;
}

//Display the security code
void singIn::on_pushButton_show_safe_clicked()
{
    //The first box of the number
    r1 = rand()%10;
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
    r2 = rand()%10;
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
    r3 = rand()%10;
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
    r4 = rand()%10;
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

//Registration confirmation in Farsi language
void singIn::on_pushButton_ok_sing_clicked()
{
    int key;
    key = ui->lineEdit_safe_sing->text().toInt();
    if (key%10000==r1 && key%1000==r2 && key%100==r3 && key%10==r4){
        ui->lineEdit_safe_sing->hide();
    }
}

