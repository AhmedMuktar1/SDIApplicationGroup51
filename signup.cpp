#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>
#include "mainwindow.h"
#include <stdlib.h>
#include <regex>
#include <iostream>
#include <fstream>
#include <QFile>
#include <QDebug>
#include <QTextStream>

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



//using namespace std;
//bool Email_check(string email)
//{
//    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
//    return regex_match(email, pattern);
//}

static bool IsEmailAddress(const std::string& str)
{
    // Locate '@'
    auto at = std::find(str.begin(), str.end(), '@');
    // Locate '.' after '@'
    auto dot = std::find(at, str.end(), '.');
    // make sure both characters are present
    return (at != str.end()) && (dot != str.end());
}


void signup::on_pushButton_clicked()
{


    //ui->lineEdit->setText("Hello World");
    QString userName = ui->lineEdit->text();
    QString Email = ui->lineEdit_2->text();
    QString repEmail = ui->lineEdit_3->text();
    QString Password = ui->lineEdit_4->text();
    QString repPassword = ui->lineEdit_5->text();
    QString first = ui->lineEdit_6->text();
    QString last = ui->lineEdit_7->text();



    if(userName <1){
        QMessageBox::warning(this, "The", "Username has to have more then 1 character");
    }



//    if (IsEmailAddress =){
//        QMessageBox::information(this, "Please", "Enter a valid email");


//    }
//    else{
//        QMessageBox::information(this, "Please", "Enter a valid email");

//    }

//    if (Email == repEmail){

//    }
//    else {
//        QMessageBox::information(this, "Please", "Email is not the same");

//    }


    if(Password < 8){
        QMessageBox::warning(this, "Please", "Enter a Password Longer than 8 Characters");


    }


    if(repPassword == Password){

    }
    else{
        QMessageBox::warning(this, "Please", "Enter same Password");

    }

    if(first <1){
        QMessageBox::warning(this, "Please", "Enter First Name");


    }
    if(last <1){
        QMessageBox::warning(this, "Please", "Enter Last Name");


    }
    if (userName > 1 && Password > 8 && repPassword == Password && first > 1 && last > 1){
        hide();
        QFile file("userdata.txt");

        if(!file.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this, "Warning", "File not open.");
        }
        else {
            QTextStream out(&file);
            out << userName;
            out << endl;
            out << Password;
            file.flush();
            file.close();
        }

        //mainWindow2=new MainWindow(this);
        //mainWindow2->show();
        QMessageBox::information(this, "Congratulations", "your account has been created!");

    }
    else {
        qDebug() << "Could not open file ";
        return;
    }

}


void signup::on_restartButton_2_clicked()
{
    hide();
    signup signup;
    signup.setModal(true);
    signup.exec();

}

void signup::on_shutdownButton_2_clicked()
{
    exit(1);
}
