#include "welcome.h"
#include "singin.h"
#include "ui_singin.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QRandomGenerator>
#include <QDebug>
//inchude database
#include "QSqlDatabase"
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

singIn::singIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::singIn)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\database_linking.db");
    database.open();

    ui->lineEdit_safe_sing->setValidator(new QIntValidator());

    // Initialize selectedLanguage to 0 (default)
    selectedLanguage = 0;

    // Initialize the safeFrames array with pointers to the frame widgets
    safeFrames[0] = ui->frame_safe_1;
    safeFrames[1] = ui->frame_safe_2;
    safeFrames[2] = ui->frame_safe_3;
    safeFrames[3] = ui->frame_safe_4;
}

singIn::~singIn()
{
    delete ui;
}

void singIn::setSafeImage(QFrame* frame, int value) {
    QString imagePath = QString(":/new/prefix1/image/%1.png").arg(value);
    frame->setStyleSheet("image: url(" + imagePath + ");");
}

void singIn::generateSafeCode() {
    for (int i = 0; i < 4; ++i) {
        safeCode[i] = QRandomGenerator::global()->bounded(10);
        setSafeImage(safeFrames[i], safeCode[i]);
    }
}

void singIn::setLanguage(int language) {
    selectedLanguage = language;
    // Set image based on selected language
    if (selectedLanguage == 1) {
        qDebug() << "Setting Persian Image";
        ui->widget_p_sing->setStyleSheet(":image: url(:/new/prefix1/image/qt_sing_p.png);");
    } else if (selectedLanguage == 2) {
        qDebug() << "Setting English Image";
        ui->widget_p_sing->setStyleSheet("image: url(:/new/prefix1/image/qt_sing_e.png);");
    } else {
        qDebug() << "Invalid Language Code: " << selectedLanguage;
    }
}

void singIn::on_pushButton_show_safe_clicked()
{
    generateSafeCode();
}

void singIn::on_pushButton_ok_sing_clicked()
{
    int key = ui->lineEdit_safe_sing->text().toInt();

    int enteredCode[4];
    enteredCode[0] = key / 1000;
    enteredCode[1] = (key / 100) % 10;
    enteredCode[2] = (key / 10) % 10;
    enteredCode[3] = key % 10;

    bool isValid = true;
    for (int i = 0; i < 4; ++i) {
        if (enteredCode[i] != safeCode[i]) {
            isValid = false;
            break;
        }
    }

    if (isValid ) {
        ui->lineEdit_safe_sing->hide();
    } else {
        QMessageBox::warning(this, "Invalid Code", "The entered code is incorrect.");
    }
}
