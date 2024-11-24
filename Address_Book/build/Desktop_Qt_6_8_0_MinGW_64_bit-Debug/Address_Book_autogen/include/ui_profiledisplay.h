/********************************************************************************
** Form generated from reading UI file 'profiledisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEDISPLAY_H
#define UI_PROFILEDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profiledisplay
{
public:
    QLabel *image_label;
    QLabel *image_label_2;
    QLabel *image_label_3;
    QLabel *image_label_4;
    QLabel *image_label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *image_label_6;
    QLabel *lbl_name;
    QLabel *lbl_number;
    QLabel *lbl_contact;
    QLabel *lbl_dob;
    QLabel *lbl_address;
    QPushButton *pushButton_3;

    void setupUi(QWidget *profiledisplay)
    {
        if (profiledisplay->objectName().isEmpty())
            profiledisplay->setObjectName("profiledisplay");
        profiledisplay->resize(362, 165);
        profiledisplay->setMinimumSize(QSize(362, 165));
        profiledisplay->setMaximumSize(QSize(362, 165));
        profiledisplay->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 233, 238);\n"
""));
        image_label = new QLabel(profiledisplay);
        image_label->setObjectName("image_label");
        image_label->setGeometry(QRect(10, 10, 61, 61));
        image_label_2 = new QLabel(profiledisplay);
        image_label_2->setObjectName("image_label_2");
        image_label_2->setGeometry(QRect(90, 0, 61, 21));
        image_label_3 = new QLabel(profiledisplay);
        image_label_3->setObjectName("image_label_3");
        image_label_3->setGeometry(QRect(90, 20, 61, 21));
        image_label_4 = new QLabel(profiledisplay);
        image_label_4->setObjectName("image_label_4");
        image_label_4->setGeometry(QRect(15, 80, 61, 21));
        image_label_5 = new QLabel(profiledisplay);
        image_label_5->setObjectName("image_label_5");
        image_label_5->setGeometry(QRect(15, 100, 61, 21));
        pushButton = new QPushButton(profiledisplay);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 130, 81, 24));
        pushButton_2 = new QPushButton(profiledisplay);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 130, 91, 24));
        image_label_6 = new QLabel(profiledisplay);
        image_label_6->setObjectName("image_label_6");
        image_label_6->setGeometry(QRect(90, 40, 91, 21));
        lbl_name = new QLabel(profiledisplay);
        lbl_name->setObjectName("lbl_name");
        lbl_name->setGeometry(QRect(140, 0, 191, 21));
        lbl_number = new QLabel(profiledisplay);
        lbl_number->setObjectName("lbl_number");
        lbl_number->setGeometry(QRect(150, 20, 181, 21));
        lbl_contact = new QLabel(profiledisplay);
        lbl_contact->setObjectName("lbl_contact");
        lbl_contact->setGeometry(QRect(170, 40, 161, 21));
        lbl_dob = new QLabel(profiledisplay);
        lbl_dob->setObjectName("lbl_dob");
        lbl_dob->setGeometry(QRect(50, 80, 171, 21));
        lbl_address = new QLabel(profiledisplay);
        lbl_address->setObjectName("lbl_address");
        lbl_address->setGeometry(QRect(70, 100, 271, 21));
        pushButton_3 = new QPushButton(profiledisplay);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(274, 130, 81, 24));

        retranslateUi(profiledisplay);

        QMetaObject::connectSlotsByName(profiledisplay);
    } // setupUi

    void retranslateUi(QWidget *profiledisplay)
    {
        profiledisplay->setWindowTitle(QCoreApplication::translate("profiledisplay", "Profile", nullptr));
        image_label->setText(QString());
        image_label_2->setText(QCoreApplication::translate("profiledisplay", "Name:", nullptr));
        image_label_3->setText(QCoreApplication::translate("profiledisplay", "Phone #: ", nullptr));
        image_label_4->setText(QCoreApplication::translate("profiledisplay", "DOB: ", nullptr));
        image_label_5->setText(QCoreApplication::translate("profiledisplay", "Address: ", nullptr));
        pushButton->setText(QCoreApplication::translate("profiledisplay", "Edit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("profiledisplay", "Delete Contact", nullptr));
        image_label_6->setText(QCoreApplication::translate("profiledisplay", "Contact Type:", nullptr));
        lbl_name->setText(QString());
        lbl_number->setText(QString());
        lbl_contact->setText(QString());
        lbl_dob->setText(QString());
        lbl_address->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("profiledisplay", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profiledisplay: public Ui_profiledisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEDISPLAY_H
