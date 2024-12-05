#include "necessaryinfoform.h"
#include "contact.h"
#include "emergency_contact.h"
#include "family_contact.h"
#include "friend_contact.h"
#include "ui_necessaryinfoform.h"
#include <qlistwidget.h>
#include <QImage>
#include <QFileDialog>
#include <QMessageBox>
#include <QIntValidator>
#include <QLineEdit>
 QVector<Contact*> Nec_Contacts_Data; //Vector to hold contact class & subclass objects

//Constructor
NecessaryInfoForm::NecessaryInfoForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NecessaryInfoForm)
{
    ui->setupUi(this);

    //Sends signal over to .h
    connect(ui->buttonConfirm, SIGNAL(on_buttonConfirm_clicked), this, SIGNAL(on_buttonConfirm_clicked()));

    //restricts phone number input to only accept integers
    ui->lineNumber->setValidator(new QIntValidator);

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
    QString name = ui->lineName->text();
    QString number = ui->lineNumber->text();
    QString contact_type = ui->comboBox->currentText();
    QIcon icon; //Contact profile picture information
    icon.addPixmap(ui->image_label->pixmap()); //Converts pixmap from preview image into a QIcon

    // auto = placeholder for data type until initialized
    // checks if the phone number already exists
    auto findExistingNumber = std::find_if(Nec_Contacts_Data.begin(), Nec_Contacts_Data.end(), [&number](auto &contact) { return (contact->get_number() == number); });

    //checks if the name already exists
    auto findExistingName = std::find_if(Nec_Contacts_Data.begin(), Nec_Contacts_Data.end(), [&name](auto &contact) { return (contact->get_name() == name); });

    //Form validations
    if (name == "") {
        QMessageBox::warning(this, "Input Missing!", "Please enter contact name.");
    }
    // if the find variable does not make it all the way to the end of the vector, then the name was found
    else if (findExistingName != Nec_Contacts_Data.end()) {
        QMessageBox::critical(this, "Invalid Name!", "Name already exists. Please enter a different name or update the existing contact.");
    }
    else if (number == "") {
        QMessageBox::warning(this, "Input Missing!", "Please enter contact phone number.");
    }
    else if (number.length() != 10) {
        QMessageBox::critical(this, "Invalid Phone Number!", "Phone number must be 10 digits long.");
    }
    // if the find variable does not make it all the way to the end of the vector, then the number was found
    else if (findExistingNumber != Nec_Contacts_Data.end()) {
        QMessageBox::critical(this, "Invalid Phone Number!", "Phone number already exists. Please enter a different number or update the existing contact.");
    }
    else {
        qDebug() << "New contact info emitted \n";
        emit this->new_Contact_Info(icon,name,number,contact_type); //Sends a signal out to the Main Window to receive new contact information.
        if(contact_type == "Normal"){
            Contact new_contact(name,number,icon,contact_type);
            Nec_Contacts_Data.append(new Contact(name,number,icon,contact_type)); //Adds the contact to the vector of contact data
        }
        else if(contact_type == "Friend"){
            Nec_Contacts_Data.append(new Friend_Contact(name,number,icon,contact_type));
        }
        else if(contact_type == "Family"){
            Nec_Contacts_Data.append(new Family_Contact(name,number,icon,contact_type));
        }
        else if(contact_type == "Emergency"){
            Nec_Contacts_Data.append(new Emergency_Contact(name,number,icon,contact_type));
        }

        //reset inputs
        ui->lineName->clear();
        ui->lineNumber->clear();
        ui->image_label->clear();
    }
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

