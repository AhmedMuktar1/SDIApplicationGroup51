#ifndef MAINHUB_H
#define MAINHUB_H

#include <QDialog>
#include "account.h"

#include <QtMqtt/QMqttClient>

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
    void on_logOutButton_clicked();

    void on_AccountButton_clicked();

    void on_chat1_clicked();

    void on_chat_clicked();

    void on_sendMessage_clicked();

    void on_powerButton_clicked();

    void on_restartButton_clicked();

    void on_RecipientButton_clicked();

    void updateLogStateChange();

    void brokerDisconnected();

private:
    Ui::mainhub *ui;
    account *Account;
    mainhub *MainHub;
    QMqttClient *m_client;

public:

};


#endif // MAINHUB_H
