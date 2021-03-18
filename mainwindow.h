#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainhub.h"
#include "signup.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();

    void on_signInButton_clicked();

    void on_restartButton_2_clicked();

    void on_shutdownButton_2_clicked();

private:
    Ui::MainWindow *ui;
    mainhub *Mainhub;
    MainWindow *mainWindow;
};
#endif // MAINWINDOW_H
