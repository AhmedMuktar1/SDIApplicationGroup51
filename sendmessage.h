#ifndef SENDMESSAGE_H
#define SENDMESSAGE_H

#include <QDialog>
#include "mainwindow.h"
#include "updaterecipientinmainhub.h"

namespace Ui {
class sendMessage;
}

class sendMessage : public QDialog
{
    Q_OBJECT

public:
    explicit sendMessage(QWidget *parent = nullptr);
    ~sendMessage();

private slots:
    void on_SAMButton_clicked();


private:
    Ui::sendMessage *ui;
};

#endif // SENDMESSAGE_H
