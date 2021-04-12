/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QVBoxLayout *verticalLayout_10;
    QWidget *topBar;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *shutdownButton_2;
    QPushButton *restartButton_2;
    QHBoxLayout *horizontalLayout;
    QWidget *signUpWrap;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_10;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(800, 600);
        signup->setStyleSheet(QString::fromUtf8("#signup {background: rgb(136, 138, 133); }\n"
"#topBar { background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(136, 138, 133, 100), stop:1 rgba(100, 100, 100, 100)); }\n"
"QPushButton {\n"
"    color: white;\n"
"    background-color: rgb(85, 87, 83);\n"
"    border-width: 0px;\n"
"    border-radius: 3px;\n"
"	border: 1px solid black;\n"
"}\n"
"#signUpWrap {\n"
"	border: 1px solid;\n"
"	background:rgba(186, 189, 182, 0.3);\n"
"	border-radius:20px;\n"
"	margin-top:10px;\n"
"}\n"
".QLabel {\n"
"	color:white;\n"
"	text-transform: uppercase;\n"
"}"));
        verticalLayout_10 = new QVBoxLayout(signup);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        topBar = new QWidget(signup);
        topBar->setObjectName(QString::fromUtf8("topBar"));
        horizontalLayout_10 = new QHBoxLayout(topBar);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(topBar);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);

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


        verticalLayout_10->addWidget(topBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        signUpWrap = new QWidget(signup);
        signUpWrap->setObjectName(QString::fromUtf8("signUpWrap"));
        sizePolicy.setHeightForWidth(signUpWrap->sizePolicy().hasHeightForWidth());
        signUpWrap->setSizePolicy(sizePolicy);
        signUpWrap->setMinimumSize(QSize(400, 450));
        verticalLayout = new QVBoxLayout(signUpWrap);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 10, 20, 20);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_10 = new QLabel(signUpWrap);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font;
        font.setPointSize(14);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_10);

        verticalWidget_2 = new QWidget(signUpWrap);
        verticalWidget_2->setObjectName(QString::fromUtf8("verticalWidget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalWidget_2->sizePolicy().hasHeightForWidth());
        verticalWidget_2->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(verticalWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(lineEdit);


        verticalLayout->addWidget(verticalWidget_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(signUpWrap);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(signUpWrap);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(signUpWrap);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        lineEdit_3 = new QLineEdit(signUpWrap);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_4->addWidget(lineEdit_3);


        verticalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(signUpWrap);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        lineEdit_4 = new QLineEdit(signUpWrap);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_5->addWidget(lineEdit_4);


        verticalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(signUpWrap);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        lineEdit_5 = new QLineEdit(signUpWrap);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_6->addWidget(lineEdit_5);


        verticalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_7 = new QLabel(signUpWrap);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_7);

        lineEdit_6 = new QLineEdit(signUpWrap);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        sizePolicy2.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(lineEdit_6);


        verticalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_8 = new QLabel(signUpWrap);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_8->addWidget(label_8);

        lineEdit_7 = new QLineEdit(signUpWrap);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout_8->addWidget(lineEdit_7);


        verticalLayout->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 0, -1, -1);
        label_9 = new QLabel(signUpWrap);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_9->addWidget(label_9);

        dateEdit = new QDateEdit(signUpWrap);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout_9->addWidget(dateEdit);


        verticalLayout->addLayout(verticalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(signUpWrap);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addWidget(signUpWrap);


        verticalLayout_10->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QApplication::translate("signup", "Dialog", nullptr));
        label_5->setText(QApplication::translate("signup", "Sunday, 21-10-2021 3:14pm", nullptr));
        shutdownButton_2->setText(QString());
        restartButton_2->setText(QString());
        label_10->setText(QApplication::translate("signup", "Sign Up", nullptr));
        label->setText(QApplication::translate("signup", "Username", nullptr));
        label_2->setText(QApplication::translate("signup", "Email", nullptr));
        label_3->setText(QApplication::translate("signup", "Repeat Email", nullptr));
        label_4->setText(QApplication::translate("signup", "Password", nullptr));
        label_6->setText(QApplication::translate("signup", "Repeat Password", nullptr));
        label_7->setText(QApplication::translate("signup", "First Name", nullptr));
        label_8->setText(QApplication::translate("signup", "Last Name", nullptr));
        label_9->setText(QApplication::translate("signup", "Date Of Birth:", nullptr));
        pushButton->setText(QApplication::translate("signup", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
