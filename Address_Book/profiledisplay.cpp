#include "profiledisplay.h"
#include "ui_profiledisplay.h"
#include "editprofileinfoform.h"
profiledisplay::profiledisplay(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::profiledisplay)
{
    //Sends signal over to .h
    ui->setupUi(this);

    //WIP - Setting up the form with contact info
    QLabel *labelForName = ui->lbl_name;
    //QLabel *labelForContact = ui->lbl_contact;
    //QLabel *labelForNumber = ui->lbl_number;
    //QLabel *labelForDOB = ui->lbl_dob;
    //QLabel *labelForAddress = ui->lbl_address;
    labelForName->setText("Diana Jones");
    //labelForContact->setText("hi");
    //labelForNumber->setText("hi");
    //labelForDOB->setText("hi");
    //labelForAddress->setText("hi");

    //Sends signal over to .h
    connect(ui->editBtn, SIGNAL(on_editBtn_clicked), this, SIGNAL(on_editBtn_clicked()));
}

profiledisplay::~profiledisplay()
{
    delete ui;
}

//Not Yet Implemented - Will Open Edit Info GUI
void profiledisplay::on_editBtn_clicked()
{
    emit this->open_EditI_GUI();
}

//Closes current window
void profiledisplay::on_closeBtn_clicked()
{
    profiledisplay::~profiledisplay();
}


//delete contact button
void profiledisplay::on_deleteBtn_clicked()
{
    //Not Yet Implemented
}

