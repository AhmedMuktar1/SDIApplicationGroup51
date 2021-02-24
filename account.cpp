#include "account.h"
#include "ui_account.h"
#include "mainhub.h"

mainhub *mainHub;

account::account(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::account)
{
    ui->setupUi(this);
}

account::~account()
{
    delete ui;
}

void account::on_backButton_clicked()
{
    hide();
    mainHub = new mainhub(this);
    mainHub->show();
}
