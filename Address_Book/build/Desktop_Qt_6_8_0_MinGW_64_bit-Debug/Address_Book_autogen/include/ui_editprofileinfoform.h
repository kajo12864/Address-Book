/********************************************************************************
** Form generated from reading UI file 'editprofileinfoform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILEINFOFORM_H
#define UI_EDITPROFILEINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProfileInfoForm
{
public:
    QLabel *label;
    QTextEdit *addressTxtBox;
    QLabel *label_5;
    QLabel *label_2;
    QComboBox *typeComboBox;
    QLabel *label_6;
    QLabel *label_3;
    QTextEdit *nameTxtBox;
    QLabel *label_4;
    QPushButton *avatarBtn;
    QTextEdit *phoneTxtBox;
    QDateEdit *dobTxtBox;
    QLabel *label_7;
    QPushButton *applyBtn;
    QPushButton *cancelBtn;
    QLabel *image_label;

    void setupUi(QWidget *EditProfileInfoForm)
    {
        if (EditProfileInfoForm->objectName().isEmpty())
            EditProfileInfoForm->setObjectName("EditProfileInfoForm");
        EditProfileInfoForm->resize(352, 475);
        EditProfileInfoForm->setMinimumSize(QSize(352, 475));
        EditProfileInfoForm->setMaximumSize(QSize(352, 475));
        EditProfileInfoForm->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 233, 238);\\n"));
        label = new QLabel(EditProfileInfoForm);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 63, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        addressTxtBox = new QTextEdit(EditProfileInfoForm);
        addressTxtBox->setObjectName("addressTxtBox");
        addressTxtBox->setGeometry(QRect(10, 310, 331, 31));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        addressTxtBox->setFont(font1);
        label_5 = new QLabel(EditProfileInfoForm);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 290, 71, 20));
        label_5->setFont(font);
        label_2 = new QLabel(EditProfileInfoForm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 141, 21));
        label_2->setFont(font);
        typeComboBox = new QComboBox(EditProfileInfoForm);
        typeComboBox->setObjectName("typeComboBox");
        typeComboBox->setGeometry(QRect(10, 250, 331, 28));
        typeComboBox->setFont(font1);
        label_6 = new QLabel(EditProfileInfoForm);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 360, 63, 20));
        label_6->setFont(font);
        label_3 = new QLabel(EditProfileInfoForm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 170, 63, 20));
        label_3->setFont(font);
        nameTxtBox = new QTextEdit(EditProfileInfoForm);
        nameTxtBox->setObjectName("nameTxtBox");
        nameTxtBox->setGeometry(QRect(10, 50, 331, 31));
        nameTxtBox->setFont(font1);
        label_4 = new QLabel(EditProfileInfoForm);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 230, 131, 21));
        label_4->setFont(font);
        avatarBtn = new QPushButton(EditProfileInfoForm);
        avatarBtn->setObjectName("avatarBtn");
        avatarBtn->setGeometry(QRect(10, 390, 141, 29));
        avatarBtn->setFont(font1);
        phoneTxtBox = new QTextEdit(EditProfileInfoForm);
        phoneTxtBox->setObjectName("phoneTxtBox");
        phoneTxtBox->setGeometry(QRect(10, 110, 331, 31));
        phoneTxtBox->setFont(font1);
        dobTxtBox = new QDateEdit(EditProfileInfoForm);
        dobTxtBox->setObjectName("dobTxtBox");
        dobTxtBox->setGeometry(QRect(10, 190, 331, 29));
        dobTxtBox->setFont(font1);
        label_7 = new QLabel(EditProfileInfoForm);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 311, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(true);
        label_7->setFont(font2);
        applyBtn = new QPushButton(EditProfileInfoForm);
        applyBtn->setObjectName("applyBtn");
        applyBtn->setGeometry(QRect(90, 440, 75, 24));
        cancelBtn = new QPushButton(EditProfileInfoForm);
        cancelBtn->setObjectName("cancelBtn");
        cancelBtn->setGeometry(QRect(180, 440, 75, 24));
        image_label = new QLabel(EditProfileInfoForm);
        image_label->setObjectName("image_label");
        image_label->setGeometry(QRect(170, 360, 71, 71));

        retranslateUi(EditProfileInfoForm);

        QMetaObject::connectSlotsByName(EditProfileInfoForm);
    } // setupUi

    void retranslateUi(QWidget *EditProfileInfoForm)
    {
        EditProfileInfoForm->setWindowTitle(QCoreApplication::translate("EditProfileInfoForm", "Edit Profile Information", nullptr));
        label->setText(QCoreApplication::translate("EditProfileInfoForm", "Name:", nullptr));
        label_5->setText(QCoreApplication::translate("EditProfileInfoForm", "Address:", nullptr));
        label_2->setText(QCoreApplication::translate("EditProfileInfoForm", "Phone Number:", nullptr));
        label_6->setText(QCoreApplication::translate("EditProfileInfoForm", "Avatar:", nullptr));
        label_3->setText(QCoreApplication::translate("EditProfileInfoForm", "DOB:", nullptr));
        label_4->setText(QCoreApplication::translate("EditProfileInfoForm", "Contact Type:", nullptr));
        avatarBtn->setText(QCoreApplication::translate("EditProfileInfoForm", "Edit/Upload New Avatar", nullptr));
        label_7->setText(QCoreApplication::translate("EditProfileInfoForm", "Add / Edit the following profile information as needed", nullptr));
        applyBtn->setText(QCoreApplication::translate("EditProfileInfoForm", "Apply", nullptr));
        cancelBtn->setText(QCoreApplication::translate("EditProfileInfoForm", "Cancel", nullptr));
        image_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditProfileInfoForm: public Ui_EditProfileInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILEINFOFORM_H
