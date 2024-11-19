#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "./necessaryinfoform.h"//
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString menuinfo;
    //Profile information can be broken up using \n. For instance, we would want the name to be on the first line and phone number on the second.
    menuinfo = "TEST PROFILE \n 555-1234-5678";
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/images/images/test_profile.png"), menuinfo);
    ui->listWidget->addItem(item);
    //Sends signal over to .h
    connect(ui->pushButton, SIGNAL(on_pushButton_clicked), this, SIGNAL(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    emit this->open_NecI_GUI();
}


void MainWindow::new_Contact_Info(const QString &text){
    ui->listWidget->addItem(text);
}
