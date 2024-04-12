#ifndef SINGIN_H
#define SINGIN_H

#include <QMainWindow>

namespace Ui {
class singIn;
}

class singIn : public QMainWindow
{
    Q_OBJECT

public:
    explicit singIn(QWidget *parent = nullptr);
    ~singIn();

private slots:
    void on_pushButton_show_safe_clicked();
    void on_pushButton_ok_sing_clicked();

private:
    Ui::singIn *ui;
};

#endif // SINGIN_H
