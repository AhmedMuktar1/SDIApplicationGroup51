#ifndef SENDMESSAGE_H
#define SENDMESSAGE_H

#include <QDialog>

namespace Ui {
class sendMessage;
}

class sendMessage : public QDialog
{
    Q_OBJECT

public:
    explicit sendMessage(QWidget *parent = nullptr);
    ~sendMessage();

private:
    Ui::sendMessage *ui;
};

#endif // SENDMESSAGE_H
