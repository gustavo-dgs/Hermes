/********************************************************************************
** Form generated from reading UI file 'signin_commerce_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_COMMERCE_DIALOG_H
#define UI_SIGNIN_COMMERCE_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignIn_Commerce_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SignIn_Commerce_Dialog)
    {
        if (SignIn_Commerce_Dialog->objectName().isEmpty())
            SignIn_Commerce_Dialog->setObjectName(QString::fromUtf8("SignIn_Commerce_Dialog"));
        SignIn_Commerce_Dialog->resize(640, 480);
        SignIn_Commerce_Dialog->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(27, 39, 50, 255),stop:1 rgba(47, 53, 74, 255));\n"
"	color: #000000;\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(SignIn_Commerce_Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 20, 20, 20);
        pushButton = new QPushButton(SignIn_Commerce_Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(200, 16777215));
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

        verticalLayout_3->addWidget(pushButton);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(28);
        formLayout->setContentsMargins(-1, 14, -1, 10);
        label = new QLabel(SignIn_Commerce_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-size: 14px;\n"
"\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(SignIn_Commerce_Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: #000;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(SignIn_Commerce_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(SignIn_Commerce_Dialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: #000;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(SignIn_Commerce_Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(SignIn_Commerce_Dialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: #000;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(SignIn_Commerce_Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(SignIn_Commerce_Dialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: #000;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(SignIn_Commerce_Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(SignIn_Commerce_Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        lineEdit_5 = new QLineEdit(SignIn_Commerce_Dialog);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: #000;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_5);

        lineEdit_6 = new QLineEdit(SignIn_Commerce_Dialog);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: #000;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_6);

        label_7 = new QLabel(SignIn_Commerce_Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        lineEdit_7 = new QLineEdit(SignIn_Commerce_Dialog);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: #000;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_7);


        verticalLayout_3->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(SignIn_Commerce_Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
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


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);


        retranslateUi(SignIn_Commerce_Dialog);

        QMetaObject::connectSlotsByName(SignIn_Commerce_Dialog);
    } // setupUi

    void retranslateUi(QDialog *SignIn_Commerce_Dialog)
    {
        SignIn_Commerce_Dialog->setWindowTitle(QApplication::translate("SignIn_Commerce_Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SignIn_Commerce_Dialog", "Back", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SignIn_Commerce_Dialog", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SignIn_Commerce_Dialog", "RIF", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SignIn_Commerce_Dialog", "Address", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SignIn_Commerce_Dialog", "Phone Numer", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SignIn_Commerce_Dialog", "Gmail", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SignIn_Commerce_Dialog", "Confirm Gmail", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SignIn_Commerce_Dialog", "Manager ID", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("SignIn_Commerce_Dialog", "Sign In", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SignIn_Commerce_Dialog: public Ui_SignIn_Commerce_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_COMMERCE_DIALOG_H
