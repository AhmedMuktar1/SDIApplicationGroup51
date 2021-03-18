#include "mainwindow.h"
#include "ui_login.h"
#include <QMessageBox>
#include <stdlib.h>

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

void MainWindow::on_signInButton_clicked()
{
    signup signup;
    signup.setModal(true);
    signup.exec();
}

void MainWindow::on_restartButton_2_clicked()
{
    hide();
    mainWindow = new MainWindow(this);
    mainWindow->show();
}

void MainWindow::on_shutdownButton_2_clicked()
{
    exit(1);
}
