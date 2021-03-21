#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>
#include "mainwindow.h"
#include <stdlib.h>
#include <regex>

MainWindow *mainWindow2;

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}


//void MainWindow::on_loginButton_clicked()
//{
//    QString username = ui->loginUsernameInput->text();
//    QString password = ui->loginPasswordInput->text();

//    if(username == "test" && password == "test") {
//        QMessageBox::information(this, "Login", "Username and password is correct");
//        hide();
//        Mainhub = new mainhub(this);
//        Mainhub->show();
//    }
//    else {
//        QMessageBox::warning(this, "Login", "Username and password incorrect");
//    }
//}


//using namespace std;
//bool Email_check(string email)
//{
//    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
//    return regex_match(email, pattern);
//}

void signup::on_pushButton_clicked()
{
//    hide();
//    mainWindow = new MainWindow(this);
//    mainWindow->show();

    //ui->lineEdit->setText("Hello World");
    QString userName = ui->lineEdit->text();
    QString Email = ui->lineEdit_2->text();
    QString repEmail = ui->lineEdit_3->text();
    QString Password = ui->lineEdit_4->text();
    QString repPassword = ui->lineEdit_5->text();
    QString first = ui->lineEdit_6->text();
    QString last = ui->lineEdit_7->text();



    if(userName <1){
        QMessageBox::information(this, "The", "Username has to have more then 1 character");

    }



    if (Email == "@"){

    }
    else{
        QMessageBox::information(this, "Please", "Enter a valid email");

    }

    if (Email == repEmail){

    }
    else {
        QMessageBox::information(this, "Please", "Email is not the same");

    }


    if(Password <8){
        QMessageBox::information(this, "Please", "Enter a Password Longer than 8 Characters");


    }

    if(repPassword == Password){

    }
    else{
        QMessageBox::information(this, "Please", "Enter same Password");

    }

    if(first <1){
        QMessageBox::information(this, "Please", "Enter First Name");


    }
    if(last <1){
        QMessageBox::information(this, "Please", "Enter Last Name");


    }
    else{
        hide();
        mainWindow2=new MainWindow(this);
        mainWindow2->show();


    }





}

