#include "editprofileinfoform.h"
#include "ui_editprofileinfoform.h"

EditProfileInfoForm::EditProfileInfoForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EditProfileInfoForm)
{
    ui->setupUi(this);
}

EditProfileInfoForm::~EditProfileInfoForm()
{
    delete ui;
}

//Receiving that the add contact button has been clicked
void EditProfileInfoForm::open_EditI_GUI(){
    this->show();
}
