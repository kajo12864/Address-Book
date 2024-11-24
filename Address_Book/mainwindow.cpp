#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "./profiledisplay.h"
#include "editprofileinfoform.h"

//Set-up
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString menuinfo;
    //Profile information can be broken up using \n. For instance, we would want the name to be on the first line and phone number on the second.
    //This is a profile used for quickly testing how items will appear in the list.
    menuinfo = "TEST PROFILE \n 555-1234-5678";
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/images/images/test_profile.png"), menuinfo);
    QListWidget *listW = ui->listWidget;
    listW->addItem(item);
    //Sends signal over to .h
    connect(ui->pushButton, SIGNAL(on_pushButton_clicked), this, SIGNAL(on_pushButton_clicked()));
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
void MainWindow::new_Contact_Info(const QIcon &icon, const QString &text){
    QListWidgetItem *item = new QListWidgetItem(icon, text);
    ui->listWidget->addItem(item);
}

//Displays an individual user's profile. This creates a new window instance each time.
void profile_Display()
{
    profiledisplay* win;
    win = new profiledisplay;
    win->show();
    EditProfileInfoForm editinfo;
    //WIP
    //connect(&win, SIGNAL(open_EditI_GUI( )),&editinfo,SLOT(open_EditI_GUI( )));
}

//Receives when user double clicks on a list item
void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    profile_Display();
}

