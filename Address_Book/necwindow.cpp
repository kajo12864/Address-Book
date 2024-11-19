#include "necwindow.h"
#include "necessaryinfoform.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/images/images/test_profile.png"), "TEST PROFILE");
    ui->listWidget->addItem(item);
}

MainWindow::~MainWindow()
{
    delete ui;
}


