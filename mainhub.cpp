#include "mainhub.h"
#include "ui_mainhub.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>

#include <QtCore/QDateTime>
#include <QtCore/QDateTime>
#include <QtMqtt/QMqttClient>
#include <QtWidgets/QMessageBox>

using namespace std;

MainWindow *mainWindow;

QString whaticlicked;
class something {
public:
    QString readAllFromFile(QString);
    QString writeToFile(QString chatname,QString username,QString messages);
};

QString something::readAllFromFile(QString fileName)
{
    QFile file("//home//ntu-user//Application//chatroom"+fileName+".txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        return "no file";
    } else{
        QTextStream in(&file);
        QString allText = in.readAll();
        file.close();
        return allText;
    }
}

QString something::writeToFile(QString chatname, QString username,QString messages){
    QFile file("//home//ntu-user//Application//chatroom"+chatname+".txt");
    if(!file.open(QIODevice::Append | QIODevice::Text)){
        return "no file";
    }else{
        QTextStream out(&file);
        out << username + "\n";
        out << messages + "\n";
        out << " \n";
        file.close();
        return "file updated";
    }
}

mainhub::mainhub(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainhub)
{
    ui->setupUi(this);

}

mainhub::~mainhub()
{
    delete ui;
}



void mainhub::on_logOutButton_clicked()
{
   hide();
   mainWindow = new MainWindow(this);
   mainWindow->show();
}

void mainhub::brokerDisconnected()
{
    ui->userName->setText(tr("Connect"));
}

void mainhub::on_AccountButton_clicked()
{
    hide();
    Account = new account(this);
    Account->show();

}

void mainhub::on_chat1_clicked()
{
    something fff;

    //get the name of the button as the chat name i.e. the name of the chat
    whaticlicked = ui->chat1->text();
    QString chatname = ui->chat1->text();
    QString username = ui->userName->text();
    ui->recipientTitle->setText(chatname);

    //loads messages from text file
    QString banana = fff.readAllFromFile(chatname);

    if(banana =="no file"){
        QMessageBox::warning(this, "Error", "No file was found");
    } else {
        ui->messageBox->setText(banana);
    }
}

void mainhub::on_chat_clicked()
{
    something fff;
    QString chatname = ui->chat->text();
    //get the name of the button as the chat name i.e. the name of the chat
    ui->recipientTitle->setText(chatname);

    //loads messages from text file
    QString returnData = fff.readAllFromFile(chatname);

    if(returnData =="no file"){
        QMessageBox::warning(this, "Error", "No file was found");
    } else {
        ui->messageBox->setText(returnData);
    }
}


void mainhub::on_sendMessage_clicked()
{
    something sss;
    //publish message
    //Get recipient from recipientTitle
    //check to see if recipient is online  if not print error message staying user offline else continue
    //Send message to recipient
    //wait for ACK that the message was sent
    //if all goes well continue

    //add text to the text file
    QString chatname = ui->recipientTitle->text();

    QString returnData = sss.writeToFile(chatname, ui->userName->text(), ui->messageInput->text());
    if(returnData == "no file"){
        QMessageBox::warning(this, "error!", "No file created");
    }
    ui->messageInput->setText("");

    //update chat

    if((returnData = sss.readAllFromFile(chatname)) =="no file"){
        QMessageBox::warning(this, "Error", "No file was found");
    } else {
        ui->messageBox->setText(returnData);
    }
}

void mainhub::on_powerButton_clicked()
{
    exit(1);
}

void mainhub::on_restartButton_clicked()
{
    hide();
    MainHub = new mainhub(this);
    MainHub->show();
}

void mainhub::on_RecipientButton_clicked()
{
    QString resipient = ui->RecipientInput->text();
    //check to see if recipient is online
    //Get recipient from recipientTitle
    //check to see if recipient is online  if not print error message staying user offline else continue

    //if online add to list
    if(ui->chat->text() == ""){
        ui->chat->setText(resipient);
    }else if (ui->chat1->text() ==""){
        ui->chat1->setText(resipient);
    }else if (ui->chat2->text() ==""){
        ui->chat2->setText(resipient);
    }else if (ui->chat3->text() ==""){
        ui->chat3->setText(resipient);
    }else if (ui->chat4->text() ==""){
        ui->chat4->setText(resipient);
    }else if (ui->chat5->text() ==""){
        ui->chat5->setText(resipient);
    }else if (ui->chat6->text() ==""){
        ui->chat6->setText(resipient);
    }else if (ui->chat7->text() ==""){
        ui->chat7->setText(resipient);
    }else if (ui->chat8->text() ==""){
        ui->chat8->setText(resipient);
    }else if (ui->chat9->text() ==""){
        ui->chat9->setText(resipient);
    }else if (ui->chat10->text() ==""){
        ui->chat10->setText(resipient);
    }else if (ui->chat11->text() ==""){
        ui->chat11->setText(resipient);
    }else {
        QMessageBox::warning(this,"NO SPACE","Please clear a message slot");
    }
}


