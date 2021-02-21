#include "mainwindow.h"
#include "ui_login.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    QString username = ui->loginUsernameInput->text();
    QString password = ui->loginPasswordInput->text();

    if(username == "test" && password == "test") {
        QMessageBox::information(this, "Login", "Username and password is correct");
        hide();
        Mainhub = new mainhub(this);
        Mainhub->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Username and password incorrect");
    }
}
