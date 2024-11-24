#include "necessaryinfoform.h"
#include "ui_necessaryinfoform.h"
#include <qlistwidget.h>
#include <QImage>
#include <QFileDialog>
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
    QIcon icon;
    icon.addPixmap(ui->image_label->pixmap());
    new_contact_text = ui->plainTextName->toPlainText();
    new_contact_text.append("\n");
    new_contact_text.append(ui->plainTextNumber->toPlainText());
    emit this->new_Contact_Info(icon,new_contact_text);
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
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"), "file://", tr("Image Files (*.png *.jpg *.bmp)"));
    QImage newImage;
    newImage.load(fileName);
    ui->image_label->setPixmap(QPixmap::fromImage(newImage));
}

