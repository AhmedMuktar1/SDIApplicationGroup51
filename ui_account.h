/********************************************************************************
** Form generated from reading UI file 'account.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_H
#define UI_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_account
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topSection;
    QHBoxLayout *horizontalLayout;
    QLabel *currentDate;
    QSpacerItem *horizontalSpacer;
    QLabel *userName;
    QPushButton *backButton;
    QPushButton *logOutButton;
    QPushButton *restartButton;
    QPushButton *powerButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *accountLabel;
    QVBoxLayout *verticalLayout_2;
    QWidget *accountButtonWrap_2;
    QVBoxLayout *accountButtonWrap;
    QPushButton *changePasswordButton;
    QPushButton *changeStatusbutton;
    QPushButton *ChangeProfilePicture;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *account)
    {
        if (account->objectName().isEmpty())
            account->setObjectName(QString::fromUtf8("account"));
        account->resize(800, 600);
        account->setStyleSheet(QString::fromUtf8("#account {background: rgb(136, 138, 133); }\n"
"QPushButton {\n"
"    color: white;\n"
"    background-color: rgb(85, 87, 83);\n"
"    border-width: 0px;\n"
"    border-radius: 3px;\n"
"	border: 1px solid black;\n"
"}\n"
"#accountButtonWrap_2 {\n"
"	border: 1px solid;\n"
"	background:rgba(186, 189, 182, 0.3);\n"
"	border-radius:20px;\n"
"	margin-top:10px;\n"
"}\n"
".QLabel {\n"
"	color:white;\n"
"	text-transform: uppercase;\n"
"}"));
        verticalLayout = new QVBoxLayout(account);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topSection = new QWidget(account);
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

        userName = new QLabel(topSection);
        userName->setObjectName(QString::fromUtf8("userName"));

        horizontalLayout->addWidget(userName);

        backButton = new QPushButton(topSection);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);
        backButton->setMinimumSize(QSize(70, 35));

        horizontalLayout->addWidget(backButton);

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

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        accountLabel = new QLabel(account);
        accountLabel->setObjectName(QString::fromUtf8("accountLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(accountLabel->sizePolicy().hasHeightForWidth());
        accountLabel->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(38);
        accountLabel->setFont(font);
        accountLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(accountLabel);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(150, 54, 150, 100);
        accountButtonWrap_2 = new QWidget(account);
        accountButtonWrap_2->setObjectName(QString::fromUtf8("accountButtonWrap_2"));
        sizePolicy1.setHeightForWidth(accountButtonWrap_2->sizePolicy().hasHeightForWidth());
        accountButtonWrap_2->setSizePolicy(sizePolicy1);
        accountButtonWrap_2->setMinimumSize(QSize(500, 250));
        accountButtonWrap = new QVBoxLayout(accountButtonWrap_2);
        accountButtonWrap->setObjectName(QString::fromUtf8("accountButtonWrap"));
        accountButtonWrap->setContentsMargins(100, -1, 100, -1);
        changePasswordButton = new QPushButton(accountButtonWrap_2);
        changePasswordButton->setObjectName(QString::fromUtf8("changePasswordButton"));

        accountButtonWrap->addWidget(changePasswordButton);

        changeStatusbutton = new QPushButton(accountButtonWrap_2);
        changeStatusbutton->setObjectName(QString::fromUtf8("changeStatusbutton"));

        accountButtonWrap->addWidget(changeStatusbutton);

        ChangeProfilePicture = new QPushButton(accountButtonWrap_2);
        ChangeProfilePicture->setObjectName(QString::fromUtf8("ChangeProfilePicture"));

        accountButtonWrap->addWidget(ChangeProfilePicture);


        verticalLayout_2->addWidget(accountButtonWrap_2);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(account);

        QMetaObject::connectSlotsByName(account);
    } // setupUi

    void retranslateUi(QDialog *account)
    {
        account->setWindowTitle(QApplication::translate("account", "Dialog", nullptr));
        currentDate->setText(QApplication::translate("account", "Monday, 12-02/2021 14:37 PM", nullptr));
        userName->setText(QApplication::translate("account", "AhmedKasim", nullptr));
        backButton->setText(QApplication::translate("account", "back", nullptr));
        logOutButton->setText(QApplication::translate("account", "Log Out", nullptr));
        restartButton->setText(QString());
        powerButton->setText(QString());
        accountLabel->setText(QApplication::translate("account", "Account Settings", nullptr));
        changePasswordButton->setText(QApplication::translate("account", "Change Password", nullptr));
        changeStatusbutton->setText(QApplication::translate("account", "Change Status", nullptr));
        ChangeProfilePicture->setText(QApplication::translate("account", "Change Profile Picture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class account: public Ui_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_H
