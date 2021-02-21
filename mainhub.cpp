#include "mainhub.h"
#include "ui_mainhub.h"

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
