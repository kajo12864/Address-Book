#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "./profiledisplay.h"
#include "editprofileinfoform.h"
#include "emergency_contact.h"
#include "family_contact.h"
#include "friend_contact.h"
#include <QObject>
 QVector<Contact*> Contacts_Data; //Vector to hold contact class & subclass objects
//Set-up
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString menuinfo;
    //Profile information can be broken up using \n. For instance, we would want the name to be on the first line and phone number on the second.
    //This is a profile used for quickly testing how items will appear in the list.
    //menuinfo = "TEST PROFILE \n 555-1234-5678";
    //QListWidgetItem *item = new QListWidgetItem(QIcon(":/images/images/test_profile.png"), menuinfo);
    //QListWidget *listW = ui->listWidget;
    //listW->addItem(item);

    //Another test which communicates with mainwindow.h to add contacts (names only). Test intermediate for loading contacts from save file.
    //for (int el = 0; el < 2; el++) {
        //QListWidgetItem *listContacts = new QListWidgetItem(this->contacts[el].c_str(), nullptr);
        //listW->addItem(listContacts);
    //}
    //Sends signal over to .h
    connect(ui->pushButton, SIGNAL(clicked()), this, SIGNAL(on_pushButton_clicked()));
    connect(ui->listWidget, SIGNAL(doubleClicked()), this, SIGNAL(profile_Display()));
}

//Closing the window
MainWindow::~MainWindow()
{
    delete ui;
}

//Opening the Add Contact form
void MainWindow::on_pushButton_clicked()
{
    emit this->open_NecI_GUI();
}

//Receiving contact information from the Add Contact form
void MainWindow::new_Contact_Info(const QIcon &icon, const QString &name, const QString &number, const QString &contact_type){
    //QStringList textcontents;
    QString new_contact_text = name; //Converts user name input to plain text
    new_contact_text.append("\n");
    new_contact_text.append(number); //Converts user phone number input to plain text
    QListWidgetItem *item = new QListWidgetItem(icon, new_contact_text);
    ui->listWidget->addItem(item);
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

//Removing contacts
void MainWindow::remove_Contact(const QString &given_name, const QString &given_number){
    qDebug() << "Received remove contact request. Told to remove";
    qDebug() << given_name;
    QString re_contact_text = given_name; //Converts user name input to plain text
    QString re_contact_phone = given_number;
    //For each list item, check if the name and number match the given parameters
    for (int i = 0; i < ui->listWidget->count();++i){
        QListWidgetItem* item = ui->listWidget->item(i);
        QString text = item->text();
        QStringList text_contents = text.split('\n');
        QString name = text_contents[0];
        QString number = text_contents[1];
        if(name == given_name && number == given_number){
            qDebug() << "Found matching name & number";
            ui->listWidget->removeItemWidget(item);
            qDebug() << "Removed item successfully.";
        }
    }
    //for (int var = 0; var < contact.size(); ++var) {
    //    qDebug() << contact[var];
    //    ui->listWidget->removeItemWidget(contact[var]);
    //}
}

//Displays an individual user's profile. This creates a new window instance each time.
void MainWindow::profile_Display(QListWidgetItem item)
{

    class profiledisplay* win;
    win = new class profiledisplay;
    QObject::connect(this,SIGNAL(set_Contact_Profile_Details(const Contact &)), win,SLOT(set_Contact_Profile_Details(const Contact &)));
    win->show();
    //For deleting contacts
    QObject::connect(win,SIGNAL(remove_Contact(const QString &,const QString &)),this,SLOT(remove_Contact(const QString &,const QString &)));
    QString text = item.text();
    QStringList text_contents = text.split('\n');
    QString name = text_contents[0];
    for(int i=0; i < Contacts_Data.size(); i++){
        if (Contacts_Data[i]->get_name() == name){
            qDebug() << "Found matching contact! \n";
            Contact* sendover_contact = Contacts_Data[i];
            qDebug() << "Emitting individual profile info \n";
            emit this->set_Contact_Profile_Details(*sendover_contact);
        }
    }

    //WIP (intended for displaying edit profile properties screen)
    //connect(&win, SIGNAL(open_EditI_GUI( )),&editinfo,SLOT(open_EditI_GUI( )));
}

//Receives when user double clicks on a list item
void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    profile_Display(*item);
}

