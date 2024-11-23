#include "necessaryinfoform.h"
#include "ui_necessaryinfoform.h"
#include <qlistwidget.h>
//Constructor
NecessaryInfoForm::NecessaryInfoForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NecessaryInfoForm)
{
    ui->setupUi(this);

    //Sends signal over to .h
    connect(ui->buttonConfirm, SIGNAL(on_buttonConfirm_clicked), this, SIGNAL(on_buttonConfirm_clicked()));

}
//Destructor
NecessaryInfoForm::~NecessaryInfoForm()
{
    this->hide();
}

//Confirm Button Pressed
void NecessaryInfoForm::on_buttonConfirm_clicked()
{
    QString new_contact_text;
    new_contact_text = ui->plainTextName->toPlainText();
    new_contact_text.append("\n");
    new_contact_text.append(ui->plainTextNumber->toPlainText());
    emit this->new_Contact_Info(new_contact_text);
    //ui->label->setText(new_contact_text); //Used for debugging (checking what input was entered / if the button does anything)
}

void NecessaryInfoForm::on_buttonCancel_clicked()
{
    this->hide();
}
void NecessaryInfoForm::open_NecI_GUI(){
        this->show();
}
void NecessaryInfoForm::on_Profilepic_clicked()
{
    QString file_name =QFileDialog::getOpenFileName(this, tr("Open file"), QDir::homePath(), tr("Images(*.png *.xpm *.jpg"));
    if(!file_name.isEmpty()){
        QMessageBox::information(this, "...", file_name);
        QImage img(file_name);
        QPixmap pix= QPixmap::fromImage(img);

    }
}
