#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QDialog>

namespace Ui {
class account;
}

class account : public QDialog
{
    Q_OBJECT

public:
    explicit account(QWidget *parent = nullptr);
    ~account();

private slots:
    void on_backButton_clicked();

private:
    Ui::account *ui;
};

#endif // ACCOUNT_H
