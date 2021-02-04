/********************************************************************************
** Form generated from reading UI file 'signin_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_DIALOG_H
#define UI_SIGNIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignIn_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *SignIn_Dialog)
    {
        if (SignIn_Dialog->objectName().isEmpty())
            SignIn_Dialog->setObjectName(QString::fromUtf8("SignIn_Dialog"));
        SignIn_Dialog->resize(640, 480);
        SignIn_Dialog->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(27, 39, 50, 255),stop:1 rgba(47, 53, 74, 255));\n"
"	color: #000000;\n"
"\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(SignIn_Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_4 = new QPushButton(SignIn_Dialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(200, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"	color: #fff;\n"
"	font-size: 11px;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 3px;\n"
"	padding: 5px;\n"
"\n"
"}"));

        verticalLayout->addWidget(pushButton_4);

        label = new QLabel(SignIn_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-size: 30px;\n"
"\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 20, 20, 20);
        pushButton_2 = new QPushButton(SignIn_Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"	color: #fff;\n"
"	font-size: 11px;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 3px;\n"
"	padding: 5px;\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(SignIn_Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"	color: #fff;\n"
"	font-size: 11px;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 3px;\n"
"	padding: 5px;\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(SignIn_Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"	color: #fff;\n"
"	font-size: 11px;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 3px;\n"
"	padding: 5px;\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SignIn_Dialog);

        QMetaObject::connectSlotsByName(SignIn_Dialog);
    } // setupUi

    void retranslateUi(QDialog *SignIn_Dialog)
    {
        SignIn_Dialog->setWindowTitle(QApplication::translate("SignIn_Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("SignIn_Dialog", "Back", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SignIn_Dialog", "Select your user type:", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("SignIn_Dialog", "Customer", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SignIn_Dialog", "Shipping", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("SignIn_Dialog", "Commerce", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SignIn_Dialog: public Ui_SignIn_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_DIALOG_H
