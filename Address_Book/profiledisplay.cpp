#include "profiledisplay.h"
#include "ui_profiledisplay.h"
#include "editprofileinfoform.h"
profiledisplay::profiledisplay(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::profiledisplay)
{
    ui->setupUi(this);
    //Sends signal over to .h
    connect(ui->pushButton, SIGNAL(on_pushButton_clicked), this, SIGNAL(on_pushButton_clicked()));

}

profiledisplay::~profiledisplay()
{
    delete ui;
}

//Opens Edit Info GUI
void profiledisplay::on_pushButton_clicked()
{
    emit this->open_EditI_GUI();
}

int heremain(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Instantiating forms
    profiledisplay mainpage;
    EditProfileInfoForm editinfo;
    //Signals
    //Opening Necessary Info GUI from Main Window
    QObject::connect(&mainpage, SIGNAL(open_EditI_GUI( )),
                     &editinfo,SLOT(open_EditI_GUI( )));
    return a.exec();
}
