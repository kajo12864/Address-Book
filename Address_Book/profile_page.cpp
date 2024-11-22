#include "profile_page.h"
#include "ui_profile_page.h"
#include <qlistwidget.h>

//Constructor
ProfilePageForm::ProfilePageForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProfilePageForm)
{
    ui->setupUi(this);
    ui->typeComboBox->addItem("Emergency");
    ui->typeComboBox->addItem("Family");
    ui->typeComboBox->addItem("Friend");
    ui->typeComboBox->addItem("Blocked");

    //Sends signal over to .h
    connect(ui->buttonConfirm, SIGNAL(on_buttonConfirm_clicked), this, SIGNAL(on_buttonConfirm_clicked()));

}
//Destructor
ProfilePageForm::~ProfilePageForm()
{
    this->hide();
}

profile_page::profile_page() {
}
