/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *topBar;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *shutdownButton_2;
    QPushButton *restartButton_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *Logo;
    QHBoxLayout *horizontalLayout_12;
    QWidget *signUpInWrapper;
    QVBoxLayout *verticalLayout_5;
    QWidget *SignInContainer;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *loginUsernameLabel;
    QLineEdit *loginUsernameInput;
    QHBoxLayout *horizontalLayout_14;
    QLabel *loginPasswordLabel;
    QLineEdit *loginPasswordInput;
    QSpacerItem *verticalSpacer_4;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *signInButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget { \n"
"	background: rgb(136, 138, 133);\n"
"}\n"
"#topBar { background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(136, 138, 133, 100), stop:1 rgba(100, 100, 100, 100)); }\n"
"\n"
"#Logo {\n"
"	border: 1px solid;\n"
"	text-transform: uppercase;\n"
"}\n"
"\n"
"#signUpInWrapper {\n"
"	border: 1px solid;\n"
"	border-radius: 20px;\n"
"	background: rgba(85, 87, 83, 0.6);\n"
"}\n"
"\n"
".QPushButton {\n"
"	background:rgba(46, 52, 54, 0.2);\n"
"	color: white;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topBar = new QWidget(centralwidget);
        topBar->setObjectName(QString::fromUtf8("topBar"));
        horizontalLayout_10 = new QHBoxLayout(topBar);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label = new QLabel(topBar);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_10->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        shutdownButton_2 = new QPushButton(topBar);
        shutdownButton_2->setObjectName(QString::fromUtf8("shutdownButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shutdownButton_2->sizePolicy().hasHeightForWidth());
        shutdownButton_2->setSizePolicy(sizePolicy);
        shutdownButton_2->setMinimumSize(QSize(55, 55));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Documents/icons/power.png"), QSize(), QIcon::Normal, QIcon::Off);
        shutdownButton_2->setIcon(icon);
        shutdownButton_2->setIconSize(QSize(35, 35));

        horizontalLayout_10->addWidget(shutdownButton_2);

        restartButton_2 = new QPushButton(topBar);
        restartButton_2->setObjectName(QString::fromUtf8("restartButton_2"));
        sizePolicy.setHeightForWidth(restartButton_2->sizePolicy().hasHeightForWidth());
        restartButton_2->setSizePolicy(sizePolicy);
        restartButton_2->setMinimumSize(QSize(55, 55));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Documents/icons/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        restartButton_2->setIcon(icon1);
        restartButton_2->setIconSize(QSize(35, 35));

        horizontalLayout_10->addWidget(restartButton_2);


        verticalLayout->addWidget(topBar);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 0, -1, -1);
        Logo = new QLabel(centralwidget);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        sizePolicy.setHeightForWidth(Logo->sizePolicy().hasHeightForWidth());
        Logo->setSizePolicy(sizePolicy);
        Logo->setMinimumSize(QSize(300, 150));
        QFont font;
        font.setPointSize(45);
        font.setBold(true);
        font.setWeight(75);
        Logo->setFont(font);

        horizontalLayout_11->addWidget(Logo);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 0, -1, -1);
        signUpInWrapper = new QWidget(centralwidget);
        signUpInWrapper->setObjectName(QString::fromUtf8("signUpInWrapper"));
        sizePolicy.setHeightForWidth(signUpInWrapper->sizePolicy().hasHeightForWidth());
        signUpInWrapper->setSizePolicy(sizePolicy);
        signUpInWrapper->setMinimumSize(QSize(350, 200));
        verticalLayout_5 = new QVBoxLayout(signUpInWrapper);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 10, -1, -1);
        SignInContainer = new QWidget(signUpInWrapper);
        SignInContainer->setObjectName(QString::fromUtf8("SignInContainer"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SignInContainer->sizePolicy().hasHeightForWidth());
        SignInContainer->setSizePolicy(sizePolicy1);
        verticalLayout_6 = new QVBoxLayout(SignInContainer);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(35, 15, 35, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        loginUsernameLabel = new QLabel(SignInContainer);
        loginUsernameLabel->setObjectName(QString::fromUtf8("loginUsernameLabel"));

        horizontalLayout_13->addWidget(loginUsernameLabel);

        loginUsernameInput = new QLineEdit(SignInContainer);
        loginUsernameInput->setObjectName(QString::fromUtf8("loginUsernameInput"));

        horizontalLayout_13->addWidget(loginUsernameInput);


        verticalLayout_6->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        loginPasswordLabel = new QLabel(SignInContainer);
        loginPasswordLabel->setObjectName(QString::fromUtf8("loginPasswordLabel"));

        horizontalLayout_14->addWidget(loginPasswordLabel);

        loginPasswordInput = new QLineEdit(SignInContainer);
        loginPasswordInput->setObjectName(QString::fromUtf8("loginPasswordInput"));

        horizontalLayout_14->addWidget(loginPasswordInput);


        verticalLayout_6->addLayout(horizontalLayout_14);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        loginButton = new QPushButton(SignInContainer);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        verticalLayout_6->addWidget(loginButton);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        signInButton = new QPushButton(SignInContainer);
        signInButton->setObjectName(QString::fromUtf8("signInButton"));

        verticalLayout_6->addWidget(signInButton);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);


        verticalLayout_5->addWidget(SignInContainer);


        horizontalLayout_12->addWidget(signUpInWrapper);


        verticalLayout->addLayout(horizontalLayout_12);

        verticalSpacer = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Sunday, 21-10-2021 3:14pm", nullptr));
        shutdownButton_2->setText(QString());
        restartButton_2->setText(QString());
        Logo->setText(QApplication::translate("MainWindow", "SDI Messenger", nullptr));
        loginUsernameLabel->setText(QApplication::translate("MainWindow", "Username:", nullptr));
        loginPasswordLabel->setText(QApplication::translate("MainWindow", "Password: ", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        signInButton->setText(QApplication::translate("MainWindow", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
