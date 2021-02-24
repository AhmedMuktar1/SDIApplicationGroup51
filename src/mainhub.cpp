#include "mainhub.h"
#include "ui_mainhub.h"
#include "sendmessage.h"
#include "mainwindow.h"

MainWindow *mainWindow;

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

void mainhub::on_sendMessageButton_clicked()
{
    sendMessage sendmessage;
    sendmessage.setModal(true);
    sendmessage.exec();
}

void mainhub::on_logOutButton_clicked()
{
   hide();
   mainWindow = new MainWindow(this);
   mainWindow->show();
}

void mainhub::on_AccountButton_clicked()
{
    hide();
    Account = new account(this);
    Account->show();

}
