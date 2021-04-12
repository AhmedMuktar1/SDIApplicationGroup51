/********************************************************************************
** Form generated from reading UI file 'mainhub.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINHUB_H
#define UI_MAINHUB_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainhub
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topSection;
    QHBoxLayout *horizontalLayout;
    QLabel *currentDate;
    QSpacerItem *horizontalSpacer;
    QLabel *serverStatus;
    QSpacerItem *horizontalSpacer_2;
    QLabel *userName;
    QPushButton *AccountButton;
    QPushButton *logOutButton;
    QPushButton *restartButton;
    QPushButton *powerButton;
    QWidget *bottomSection;
    QHBoxLayout *horizontalLayout_2;
    QWidget *recipientSection;
    QVBoxLayout *verticalLayout_2;
    QWidget *RecipientButtons;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *RecipientInput;
    QPushButton *RecipientButton;
    QLabel *chatsTitle;
    QWidget *chats;
    QVBoxLayout *verticalLayout_3;
    QPushButton *chat;
    QPushButton *chat1;
    QPushButton *chat2;
    QPushButton *chat3;
    QPushButton *chat4;
    QPushButton *chat5;
    QPushButton *chat6;
    QPushButton *chat7;
    QPushButton *chat8;
    QPushButton *chat9;
    QPushButton *chat10;
    QPushButton *chat11;
    QSpacerItem *verticalSpacer_3;
    QWidget *messagesSection;
    QVBoxLayout *verticalLayout_4;
    QWidget *recipientTitleSection;
    QHBoxLayout *horizontalLayout_6;
    QLabel *recipientTitle;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *messageBox;
    QWidget *sendMessageSection;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *messageInput;
    QPushButton *sendMessage;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *mainhub)
    {
        if (mainhub->objectName().isEmpty())
            mainhub->setObjectName(QString::fromUtf8("mainhub"));
        mainhub->resize(800, 600);
        mainhub->setStyleSheet(QString::fromUtf8("\n"
"#mainhub {background: rgb(136, 138, 133); }\n"
"#topSection { background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(136, 138, 133, 100), stop:1 rgba(100, 100, 100, 100)); }\n"
"QLabel { color: white; }\n"
"QLineEdit { border-radius: 10px; }\n"
"QPushButton {\n"
"    color: white;\n"
"    background-color: rgb(85, 87, 83);\n"
"    border-width: 0px;\n"
"    border-radius: 3px;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover { background-color: rgba(100, 100, 100, 1); }\n"
"#powerButton {margin: 3px;}\n"
"#logOutButton {margin: 3px;}\n"
"#restartButton {margin: 3px;}\n"
"#settingsButton {margin: 3px;}\n"
"#bottomSection{\n"
"	border: 1px solid black;\n"
"}\n"
"#messagesSection{\n"
"	border-left: 1px solid black;\n"
"}\n"
"#recipientSection{\n"
"	border-right: 1px solid black;\n"
"}\n"
"#recipientTitleSection{\n"
"	border-bottom: 1px solid black;\n"
"}\n"
"#recipientTitle{\n"
"	font-size: 16px;\n"
"	padding: 3px;\n"
"	text-transform: uppercase;\n"
"}\n"
"#message0,"
                        " #message00 {\n"
"	padding: 5px;\n"
"	border-radius: 5px;\n"
"	background-color: rgb(114, 159, 207);\n"
"}\n"
"\n"
"#message2{\n"
"	padding: 5px;\n"
"	border-radius: 5px;\n"
"	margin: 5px;\n"
"	background-color: rgb(114, 159, 207);\n"
"}\n"
"\n"
"#message3{\n"
"	padding: 5px;\n"
"	border-radius: 5px;\n"
"	margin: 5px;\n"
"	background-color: rgb(114, 159, 207);\n"
"}\n"
"\n"
"#message4{\n"
"	padding: 5px;\n"
"	border-radius: 5px;\n"
"	margin: 5px;\n"
"	background-color: rgb(114, 159, 207);\n"
"}\n"
"\n"
"#sendMessageButton {\n"
"	padding: 5px;\n"
"}\n"
"\n"
"#addFriendsButton {\n"
"	padding: 5px;\n"
"}\n"
"\n"
"#chatsTitle {\n"
"	font-size: 25px;\n"
"\n"
"}\n"
"\n"
"#chat1 {\n"
"	font-size: 16px;\n"
"	padding: 3px;\n"
"border:1px solid black\n"
"\n"
"}\n"
"#chat2 {\n"
"	font-size: 16px;\n"
"	padding: 3px;\n"
"border:1px solid black\n"
"\n"
"}\n"
"#chat3 {\n"
"	font-size: 16px;\n"
"	padding: 3px;\n"
"border:1px solid black\n"
"\n"
"}\n"
"#chat4 {\n"
"	font-size: 16px;\n"
"	padding: 3px;\n"
"border:1px solid blac"
                        "k\n"
"}\n"
"#chat5 {\n"
"	font-size: 16px;\n"
"	padding: 3px;\n"
"border:1px solid black\n"
"\n"
"}\n"
"#chat6 {\n"
"	font-size: 16px;\n"
"	padding: 3px;\n"
"border:1px solid black\n"
"}"));
        verticalLayout = new QVBoxLayout(mainhub);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topSection = new QWidget(mainhub);
        topSection->setObjectName(QString::fromUtf8("topSection"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topSection->sizePolicy().hasHeightForWidth());
        topSection->setSizePolicy(sizePolicy);
        topSection->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(topSection);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        currentDate = new QLabel(topSection);
        currentDate->setObjectName(QString::fromUtf8("currentDate"));

        horizontalLayout->addWidget(currentDate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        serverStatus = new QLabel(topSection);
        serverStatus->setObjectName(QString::fromUtf8("serverStatus"));

        horizontalLayout->addWidget(serverStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        userName = new QLabel(topSection);
        userName->setObjectName(QString::fromUtf8("userName"));

        horizontalLayout->addWidget(userName);

        AccountButton = new QPushButton(topSection);
        AccountButton->setObjectName(QString::fromUtf8("AccountButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(AccountButton->sizePolicy().hasHeightForWidth());
        AccountButton->setSizePolicy(sizePolicy1);
        AccountButton->setMinimumSize(QSize(70, 35));

        horizontalLayout->addWidget(AccountButton);

        logOutButton = new QPushButton(topSection);
        logOutButton->setObjectName(QString::fromUtf8("logOutButton"));
        sizePolicy1.setHeightForWidth(logOutButton->sizePolicy().hasHeightForWidth());
        logOutButton->setSizePolicy(sizePolicy1);
        logOutButton->setMinimumSize(QSize(70, 35));

        horizontalLayout->addWidget(logOutButton);

        restartButton = new QPushButton(topSection);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        sizePolicy1.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy1);
        restartButton->setMinimumSize(QSize(55, 55));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Documents/icons/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        restartButton->setIcon(icon);

        horizontalLayout->addWidget(restartButton);

        powerButton = new QPushButton(topSection);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        sizePolicy1.setHeightForWidth(powerButton->sizePolicy().hasHeightForWidth());
        powerButton->setSizePolicy(sizePolicy1);
        powerButton->setMinimumSize(QSize(55, 55));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Documents/icons/power.png"), QSize(), QIcon::Normal, QIcon::Off);
        powerButton->setIcon(icon1);

        horizontalLayout->addWidget(powerButton);


        verticalLayout->addWidget(topSection);

        bottomSection = new QWidget(mainhub);
        bottomSection->setObjectName(QString::fromUtf8("bottomSection"));
        horizontalLayout_2 = new QHBoxLayout(bottomSection);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 1, -1, 0);
        recipientSection = new QWidget(bottomSection);
        recipientSection->setObjectName(QString::fromUtf8("recipientSection"));
        sizePolicy1.setHeightForWidth(recipientSection->sizePolicy().hasHeightForWidth());
        recipientSection->setSizePolicy(sizePolicy1);
        recipientSection->setMinimumSize(QSize(100, 470));
        verticalLayout_2 = new QVBoxLayout(recipientSection);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, -1);
        RecipientButtons = new QWidget(recipientSection);
        RecipientButtons->setObjectName(QString::fromUtf8("RecipientButtons"));
        sizePolicy1.setHeightForWidth(RecipientButtons->sizePolicy().hasHeightForWidth());
        RecipientButtons->setSizePolicy(sizePolicy1);
        RecipientButtons->setMinimumSize(QSize(200, 25));
        horizontalLayout_3 = new QHBoxLayout(RecipientButtons);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        RecipientInput = new QLineEdit(RecipientButtons);
        RecipientInput->setObjectName(QString::fromUtf8("RecipientInput"));
        RecipientInput->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(RecipientInput);

        RecipientButton = new QPushButton(RecipientButtons);
        RecipientButton->setObjectName(QString::fromUtf8("RecipientButton"));

        horizontalLayout_3->addWidget(RecipientButton);


        verticalLayout_2->addWidget(RecipientButtons);

        chatsTitle = new QLabel(recipientSection);
        chatsTitle->setObjectName(QString::fromUtf8("chatsTitle"));
        chatsTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(chatsTitle);

        chats = new QWidget(recipientSection);
        chats->setObjectName(QString::fromUtf8("chats"));
        verticalLayout_3 = new QVBoxLayout(chats);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 1, -1, -1);
        chat = new QPushButton(chats);
        chat->setObjectName(QString::fromUtf8("chat"));

        verticalLayout_3->addWidget(chat);

        chat1 = new QPushButton(chats);
        chat1->setObjectName(QString::fromUtf8("chat1"));

        verticalLayout_3->addWidget(chat1);

        chat2 = new QPushButton(chats);
        chat2->setObjectName(QString::fromUtf8("chat2"));

        verticalLayout_3->addWidget(chat2);

        chat3 = new QPushButton(chats);
        chat3->setObjectName(QString::fromUtf8("chat3"));

        verticalLayout_3->addWidget(chat3);

        chat4 = new QPushButton(chats);
        chat4->setObjectName(QString::fromUtf8("chat4"));

        verticalLayout_3->addWidget(chat4);

        chat5 = new QPushButton(chats);
        chat5->setObjectName(QString::fromUtf8("chat5"));

        verticalLayout_3->addWidget(chat5);

        chat6 = new QPushButton(chats);
        chat6->setObjectName(QString::fromUtf8("chat6"));

        verticalLayout_3->addWidget(chat6);

        chat7 = new QPushButton(chats);
        chat7->setObjectName(QString::fromUtf8("chat7"));

        verticalLayout_3->addWidget(chat7);

        chat8 = new QPushButton(chats);
        chat8->setObjectName(QString::fromUtf8("chat8"));

        verticalLayout_3->addWidget(chat8);

        chat9 = new QPushButton(chats);
        chat9->setObjectName(QString::fromUtf8("chat9"));

        verticalLayout_3->addWidget(chat9);

        chat10 = new QPushButton(chats);
        chat10->setObjectName(QString::fromUtf8("chat10"));

        verticalLayout_3->addWidget(chat10);

        chat11 = new QPushButton(chats);
        chat11->setObjectName(QString::fromUtf8("chat11"));

        verticalLayout_3->addWidget(chat11);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        verticalLayout_2->addWidget(chats);


        horizontalLayout_2->addWidget(recipientSection);

        messagesSection = new QWidget(bottomSection);
        messagesSection->setObjectName(QString::fromUtf8("messagesSection"));
        verticalLayout_4 = new QVBoxLayout(messagesSection);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 1, -1, -1);
        recipientTitleSection = new QWidget(messagesSection);
        recipientTitleSection->setObjectName(QString::fromUtf8("recipientTitleSection"));
        horizontalLayout_6 = new QHBoxLayout(recipientTitleSection);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 1, -1, -1);
        recipientTitle = new QLabel(recipientTitleSection);
        recipientTitle->setObjectName(QString::fromUtf8("recipientTitle"));
        recipientTitle->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(recipientTitle);


        verticalLayout_4->addWidget(recipientTitleSection);

        scrollArea = new QScrollArea(messagesSection);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 486, 396));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        messageBox = new QTextBrowser(scrollAreaWidgetContents);
        messageBox->setObjectName(QString::fromUtf8("messageBox"));

        verticalLayout_5->addWidget(messageBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        sendMessageSection = new QWidget(messagesSection);
        sendMessageSection->setObjectName(QString::fromUtf8("sendMessageSection"));
        horizontalLayout_5 = new QHBoxLayout(sendMessageSection);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 1, -1, -1);
        messageInput = new QLineEdit(sendMessageSection);
        messageInput->setObjectName(QString::fromUtf8("messageInput"));

        horizontalLayout_5->addWidget(messageInput);

        sendMessage = new QPushButton(sendMessageSection);
        sendMessage->setObjectName(QString::fromUtf8("sendMessage"));
        sizePolicy1.setHeightForWidth(sendMessage->sizePolicy().hasHeightForWidth());
        sendMessage->setSizePolicy(sizePolicy1);
        sendMessage->setMinimumSize(QSize(70, 0));

        horizontalLayout_5->addWidget(sendMessage);


        verticalLayout_4->addWidget(sendMessageSection);


        horizontalLayout_2->addWidget(messagesSection);


        verticalLayout->addWidget(bottomSection);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(mainhub);

        QMetaObject::connectSlotsByName(mainhub);
    } // setupUi

    void retranslateUi(QDialog *mainhub)
    {
        mainhub->setWindowTitle(QApplication::translate("mainhub", "Dialog", nullptr));
        currentDate->setText(QApplication::translate("mainhub", "Monday, 12-02/2021 14:37 PM", nullptr));
        serverStatus->setText(QApplication::translate("mainhub", "SERVER STATUS: OFFLINE", nullptr));
        userName->setText(QApplication::translate("mainhub", "AhmedKasim", nullptr));
        AccountButton->setText(QApplication::translate("mainhub", "Account", nullptr));
        logOutButton->setText(QApplication::translate("mainhub", "Log Out", nullptr));
        restartButton->setText(QString());
        powerButton->setText(QString());
        RecipientButton->setText(QApplication::translate("mainhub", "Add Recipient", nullptr));
        chatsTitle->setText(QApplication::translate("mainhub", "Chats", nullptr));
        chat->setText(QString());
        chat1->setText(QApplication::translate("mainhub", "sdi", nullptr));
        chat2->setText(QString());
        chat3->setText(QString());
        chat4->setText(QString());
        chat5->setText(QString());
        chat6->setText(QString());
        chat7->setText(QString());
        chat8->setText(QString());
        chat9->setText(QString());
        chat10->setText(QString());
        chat11->setText(QString());
        recipientTitle->setText(QApplication::translate("mainhub", "LewisActon", nullptr));
        messageBox->setHtml(QApplication::translate("mainhub", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        sendMessage->setText(QApplication::translate("mainhub", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainhub: public Ui_mainhub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINHUB_H
