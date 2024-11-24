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
    QString new_contact_text; //Contact text information
    QIcon icon; //Contact profile picture information
    icon.addPixmap(ui->image_label->pixmap()); //Converts pixmap from preview image into a QIcon
    new_contact_text = ui->plainTextName->toPlainText(); //Converts user name input to plain text
    new_contact_text.append("\n");
    new_contact_text.append(ui->plainTextNumber->toPlainText()); //Converts user phone number input to plain text
    emit this->new_Contact_Info(icon,new_contact_text); //Sends a signal out to the Main Window to receive new contact information.
    //ui->label->setText(new_contact_text); //Used for debugging (checking what text input was entered)
}

//Cancelling adding a new contact
void NecessaryInfoForm::on_buttonCancel_clicked()
{
    this->hide();
}
//Receiving that the add contact button has been clicked
void NecessaryInfoForm::open_NecI_GUI(){
        this->show();
}

//Button that handles adding a profile picture image
void NecessaryInfoForm::on_Profilepic_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"), "file://", tr("Image Files (*.png *.jpg *.bmp)"));
    QImage newImage;
    newImage.load(fileName);
    ui->image_label->setPixmap(QPixmap::fromImage(newImage));
}

