#include "login.h"
#include "ui_login.h"
#include "welcome.h"
#include "singin.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QRandomGenerator>
#include <QDebug>
//inchude database
#include "QSqlDatabase"
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

LogIn::LogIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogIn)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\database_linking.db");
    database.open();

    ui->lineEdit_log_Password->setValidator(new QIntValidator());

    // Initialize the safeFrames array with pointers to the frame widgets
    safeFrames_l[0] = ui->frame_safe_1;
    safeFrames_l[1] = ui->frame_safe_2;
    safeFrames_l[2] = ui->frame_safe_3;
    safeFrames_l[3] = ui->frame_safe_4;
}

LogIn::~LogIn()
{
    delete ui;
}

//Display the security code
void LogIn::on_pushButton_show_safe_clicked()
{
    generateSafeCode();
}

void LogIn::setSafeImage(QFrame* frame, int value) {
    QString imagePath = QString(":/new/prefix1/image/%1.png").arg(value);
    frame->setStyleSheet("image: url(" + imagePath + ");");
}

void LogIn::generateSafeCode() {
    for (int i = 0; i < 4; ++i) {
        safeCode_l[i] = QRandomGenerator::global()->bounded(10);
        setSafeImage(safeFrames_l[i], safeCode_l[i]);
    }
}

void LogIn::setLanguage(int language) {
    selectedLanguage = language;
    // Set image based on selected language
    if (selectedLanguage == 1) {
        qDebug() << "Setting Persian Image";
        ui->frame_Log->setStyleSheet(":image: url(:/new/prefix1/image/qt_sing_p.png);");
    } else if (selectedLanguage == 2) {
        qDebug() << "Setting English Image";
        ui->frame_Log->setStyleSheet("image: url(:/new/prefix1/image/qt_sing_e.png);");
    } else {
        qDebug() << "Invalid Language Code: " << selectedLanguage;
    }
}

void LogIn::on_pushButton_ok_log_clicked()
{
    int key = ui->lineEdit_log_Password->text().toInt();

    int enteredCode_l[4];
    enteredCode_l[0] = key / 1000;
    enteredCode_l[1] = (key / 100) % 10;
    enteredCode_l[2] = (key / 10) % 10;
    enteredCode_l[3] = key % 10;

    bool isValid = true;
    for (int i = 0; i < 4; ++i) {
        if (enteredCode_l[i] != safeCode_l[i]) {
            isValid = false;
            break;
        }
    }

    if (isValid ) {
        ui->lineEdit_log_Password->hide();
    } else {
        QMessageBox::warning(this, "Invalid Code", "The entered code is incorrect.");
    }
}

