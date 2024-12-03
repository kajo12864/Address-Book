#include "mainwindow.h"
#include "necessaryinfoform.h"
#include <QApplication>
#include <QObject>
#include <qdir.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Instantiating forms (for delivering necessary info form info to main grid)
    MainWindow mainpage;
    NecessaryInfoForm necinfo;

    //Signals
    //Registering a new contact
    QObject::connect(&necinfo, SIGNAL(new_Contact_Info(const QIcon &, const QString &, const QString &, const QString &)),
                    &mainpage,SLOT(new_Contact_Info(const QIcon &, const QString &, const QString &,const QString &)));
    //Opening Necessary Info GUI from Main Window
    QObject::connect(&mainpage, SIGNAL(open_NecI_GUI( )),
                     &necinfo,SLOT(open_NecI_GUI( )));
    //Displaying Main Window
    mainpage.show();
        //WIP: Load from file
        //QFile file("contacts.sav");
        //QDataStream in(&file);
        //in >> contacts;
    return a.exec();
}
