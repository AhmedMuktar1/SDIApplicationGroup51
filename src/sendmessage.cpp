#include "sendmessage.h"
#include "ui_sendmessage.h"

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
