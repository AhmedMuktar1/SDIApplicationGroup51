#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "mainhub.h"
#include <QMainWindow>

namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_pushButton_clicked();

    void on_restartButton_2_clicked();

    void on_shutdownButton_2_clicked();

private:
    Ui::signup *ui;

};

#endif // SIGNUP_H
