#include "profiledisplay.h"
#include "ui_profiledisplay.h"
#include "editprofileinfoform.h"

profiledisplay::profiledisplay(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::profiledisplay)
{
    EditProfileInfoForm theForm;
    //Sends signal over to .h
    ui->setupUi(this);
    //Sends signal over to .h
    connect(ui->editBtn, SIGNAL(clicked()), this, SLOT(open_EditI_GUI()));
    connect(ui->deleteBtn, SIGNAL(clicked()), this, SLOT(on_deleteBtn_clicked()));
}

profiledisplay::~profiledisplay()
{
    delete ui;
}

//Not Yet Implemented - Will Open Edit Info GUI
void profiledisplay::on_editBtn_clicked()
{
    qDebug() << "Opening edit fields";
    class EditProfileInfoForm* edit_window;
    edit_window = new class EditProfileInfoForm;
    edit_window->show();
}

//Closes current window
void profiledisplay::on_closeBtn_clicked()
{
    profiledisplay::~profiledisplay();
}



void profiledisplay::set_Contact_Profile_Details(QListWidgetItem item)
{
    qDebug() << "SENT \n";
    QString text = item.text();
    QStringList text_contents = text.split('\n');
    QString name = text_contents[0];
    QString number = text_contents[1];
    QIcon icon = item.icon();
    //Converting icon into a pixmap so it may be displayed on a label
    QSize max(0, 0); for(QList<QSize> sizes =  icon.availableSizes(); !sizes.isEmpty(); sizes.removeFirst()) if(sizes.first().width() > max.width()) max = sizes.first();
    QPixmap pixmap = icon.pixmap(max);
    ui->lbl_name->setText(name);
    ui->lbl_number->setText(number);
    ui->image_label->setPixmap(pixmap);

}


//delete contact button
void profiledisplay::on_deleteBtn_clicked()
{
    //Not Yet Implemented
    QString name = ui->lbl_name->text();
    QString number = ui->lbl_number->text();
    emit this->remove_Contact(name, number); //Sends a signal out to the Main Window to delete contact.
    qDebug() << "Contact removed \n" << name;
}

