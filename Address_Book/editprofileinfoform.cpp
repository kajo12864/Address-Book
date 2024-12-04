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

//Receiving that the edit information button has been clicked
void EditProfileInfoForm::open_EditI_GUI(){
    this->show();
}

//Cancel button (deletes profile window)
void EditProfileInfoForm::on_cancelBtn_clicked()
{
    EditProfileInfoForm::~EditProfileInfoForm();
}

