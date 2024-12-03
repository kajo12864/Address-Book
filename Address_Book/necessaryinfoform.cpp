#include "necessaryinfoform.h"
#include "contact.h"
#include "emergency_contact.h"
#include "family_contact.h"
#include "friend_contact.h"
#include "ui_necessaryinfoform.h"
#include <qlistwidget.h>
#include <QImage>
#include <QFileDialog>
 QVector<Contact*> Contacts_Data;

//Constructor
NecessaryInfoForm::NecessaryInfoForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NecessaryInfoForm)
{
    ui->setupUi(this);

    //Sends signal over to .h
    connect(ui->buttonConfirm, SIGNAL(on_buttonConfirm_clicked), this, SIGNAL(on_buttonConfirm_clicked()));

    //Defines and adds items to the contact combobox
    QComboBox *combobox = ui->comboBox;
    combobox->addItem("Normal");
    combobox->addItem("Friend");
    combobox->addItem("Family");
    combobox->addItem("Emergency");
}
//Destructor
NecessaryInfoForm::~NecessaryInfoForm()
{
    this->hide();
}

//Confirm Button Pressed
void NecessaryInfoForm::on_buttonConfirm_clicked()
{
    QString name = ui->plainTextName->toPlainText();
    QString number = ui->plainTextNumber->toPlainText();
    QString contact_type = ui->comboBox->currentText();
    QIcon icon; //Contact profile picture information
    icon.addPixmap(ui->image_label->pixmap()); //Converts pixmap from preview image into a QIcon
    qDebug() << "New contact info emitted \n";
    emit this->new_Contact_Info(icon,name,number,contact_type); //Sends a signal out to the Main Window to receive new contact information.

    if(contact_type == "Normal"){
        Contact new_contact(name,number,icon,contact_type);
        Contacts_Data.append(new Contact(name,number,icon,contact_type)); //Adds the contact to the vector of contact data
    }
    else if(contact_type == "Friend"){
        Contacts_Data.append(new Friend_Contact(name,number,icon,contact_type));
        }
    else if(contact_type == "Family"){
        Contacts_Data.append(new Family_Contact(name,number,icon,contact_type));
    }
    else if(contact_type == "Emergency"){
        Contacts_Data.append(new Emergency_Contact(name,number,icon,contact_type));
    }
    //WIP: Saving contact data to file
    //QFile savefile("contacts.sav");
    //QDataStream &operator<<(QDataStream &out,  Contact &);
    //QDataStream &operator>>(QDataStream &, Contact &);
    //ui->label->setText(new_contact_text); //Used for debugging (checking what text input was entered)
}

QDataStream &operator<<(QDataStream &out,  Contact &new_contact)
{
    out << new_contact.get_name();
    return out;
}
//Cancelling adding a new contact
void NecessaryInfoForm::on_buttonCancel_clicked()
{
    this->hide();
}
//Receiving that the add contact button has been clicked
void NecessaryInfoForm::open_NecI_GUI(){
        this->show();
}


//Button that handles adding a profile picture image
void NecessaryInfoForm::on_Profilepic_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"), "file://", tr("Image Files (*.png *.jpg *.bmp)"));
    QImage newImage;
    newImage.load(fileName);
    ui->image_label->setPixmap(QPixmap::fromImage(newImage));
}

