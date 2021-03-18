#ifndef MAINHUB_H
#define MAINHUB_H

#include <QDialog>
#include "account.h"

namespace Ui {
class mainhub;
}

class mainhub : public QDialog
{
    Q_OBJECT

public:
    explicit mainhub(QWidget *parent = nullptr);
    ~mainhub();

private slots:
    void on_sendMessageButton_clicked();

    void on_logOutButton_clicked();

    void on_AccountButton_clicked();

private:
    Ui::mainhub *ui;
    account *Account;
};

#endif // MAINHUB_H
