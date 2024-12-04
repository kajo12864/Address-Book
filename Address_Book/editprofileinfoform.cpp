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

//Cancel button (deletes profile window)
void EditProfileInfoForm::on_cancelBtn_clicked()
{
    EditProfileInfoForm::~EditProfileInfoForm();
}

