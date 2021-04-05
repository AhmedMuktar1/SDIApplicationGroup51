#include "sendmessage.h"
#include "ui_sendmessage.h"
#include "mainwindow.h"
#include "updaterecipientinmainhub.h"

sendMessage::sendMessage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendMessage)
{
    ui->setupUi(this);
}

sendMessage::~sendMessage()
{
    delete ui;
}


void sendMessage::on_SAMButton_clicked()
{
    updateRecipientInMainhub udrims;
    QString recipient = ui->SAMRecipientInput->text();
    QString username ; // get the username from login/mainhub
    //subscribe to the group/recipient

    //If subscribe successfull

    //add group name to the mainhub txt database
    //send signal to add recipient to mainhub recipient list
    udrims.updateRecipient(recipient);
    //send message to the group that you have joined

    //hide window
    hide();
}
