/********************************************************************************
** Form generated from reading UI file 'necessaryinfoform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NECESSARYINFOFORM_H
#define UI_NECESSARYINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NecessaryInfoForm
{
public:
    QPushButton *buttonConfirm;
    QLabel *label_2;
    QPlainTextEdit *plainTextName;
    QPushButton *buttonCancel;
    QPlainTextEdit *plainTextNumber;
    QLabel *label;
    QLabel *label_3;
    QPushButton *Profilepic;
    QLabel *image_label;

    void setupUi(QWidget *NecessaryInfoForm)
    {
        if (NecessaryInfoForm->objectName().isEmpty())
            NecessaryInfoForm->setObjectName("NecessaryInfoForm");
        NecessaryInfoForm->resize(240, 260);
        NecessaryInfoForm->setMinimumSize(QSize(240, 260));
        NecessaryInfoForm->setMaximumSize(QSize(240, 260));
        NecessaryInfoForm->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 233, 238);\n"
"color: black\n"
"\n"
""));
        buttonConfirm = new QPushButton(NecessaryInfoForm);
        buttonConfirm->setObjectName("buttonConfirm");
        buttonConfirm->setGeometry(QRect(10, 220, 111, 31));
        buttonConfirm->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 239, 239);\n"
""));
        buttonConfirm->setCheckable(false);
        label_2 = new QLabel(NecessaryInfoForm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 121, 16));
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        plainTextName = new QPlainTextEdit(NecessaryInfoForm);
        plainTextName->setObjectName("plainTextName");
        plainTextName->setGeometry(QRect(20, 90, 171, 21));
        buttonCancel = new QPushButton(NecessaryInfoForm);
        buttonCancel->setObjectName("buttonCancel");
        buttonCancel->setGeometry(QRect(130, 220, 81, 31));
        buttonCancel->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 239, 239);\n"
""));
        plainTextNumber = new QPlainTextEdit(NecessaryInfoForm);
        plainTextNumber->setObjectName("plainTextNumber");
        plainTextNumber->setGeometry(QRect(20, 140, 171, 21));
        label = new QLabel(NecessaryInfoForm);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 211, 51));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setUnderline(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setWordWrap(true);
        label_3 = new QLabel(NecessaryInfoForm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 120, 121, 16));
        label_3->setFont(font);
        Profilepic = new QPushButton(NecessaryInfoForm);
        Profilepic->setObjectName("Profilepic");
        Profilepic->setGeometry(QRect(20, 170, 101, 31));
        Profilepic->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 239, 239);\n"
""));
        image_label = new QLabel(NecessaryInfoForm);
        image_label->setObjectName("image_label");
        image_label->setGeometry(QRect(110, 170, 41, 41));
        image_label->setScaledContents(true);

        retranslateUi(NecessaryInfoForm);

        QMetaObject::connectSlotsByName(NecessaryInfoForm);
    } // setupUi

    void retranslateUi(QWidget *NecessaryInfoForm)
    {
        NecessaryInfoForm->setWindowTitle(QCoreApplication::translate("NecessaryInfoForm", "Required Information", nullptr));
        buttonConfirm->setText(QCoreApplication::translate("NecessaryInfoForm", "Create Contact", nullptr));
        label_2->setText(QCoreApplication::translate("NecessaryInfoForm", "Name:", nullptr));
        buttonCancel->setText(QCoreApplication::translate("NecessaryInfoForm", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("NecessaryInfoForm", "Please enter the necessary contact information:", nullptr));
        label_3->setText(QCoreApplication::translate("NecessaryInfoForm", "Phone Number:", nullptr));
        Profilepic->setText(QCoreApplication::translate("NecessaryInfoForm", "Profile Picture", nullptr));
        image_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NecessaryInfoForm: public Ui_NecessaryInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NECESSARYINFOFORM_H
