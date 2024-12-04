#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "./profiledisplay.h"
#include "editprofileinfoform.h"
#include <QObject>
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
}

//Removing contacts
void MainWindow::remove_Contact(const QString &name, const QString &number){
    qDebug() << "Hi";
    qDebug() << name;
    QString new_contact_text = name; //Converts user name input to plain text
   // new_contact_text.append("\n");
    //new_contact_text.append(number); //Converts user phone number input to plain text
    //QListWidgetItem *item = new QListWidgetItem(icon, new_contact_text);
    QList<QListWidgetItem *> contact = ui->listWidget->findItems(new_contact_text, Qt::MatchExactly);
    qDebug() << contact.toList();
    for (int var = 0; var < contact.size(); ++var) {
        qDebug() << contact[var];
        ui->listWidget->removeItemWidget(contact[var]);
    }
}

//Displays an individual user's profile. This creates a new window instance each time.
void MainWindow::profile_Display(QListWidgetItem item)
{

    class profiledisplay* win;
    win = new class profiledisplay;
    QObject::connect(this,SIGNAL(set_Contact_Profile_Details(const QListWidgetItem &)), win,SLOT(set_Contact_Profile_Details(const QListWidgetItem &)));
    win->show();
    EditProfileInfoForm editinfo;
     qDebug() << "Emitting edit profile info \n";
     emit this->set_Contact_Profile_Details(item);


    //WIP (intended for displaying edit profile properties screen)
    //connect(&win, SIGNAL(open_EditI_GUI( )),&editinfo,SLOT(open_EditI_GUI( )));
}

//Receives when user double clicks on a list item
void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    profile_Display(*item);
}

