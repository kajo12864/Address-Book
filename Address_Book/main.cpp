#include "mainwindow.h"
#include "necessaryinfoform.h"
#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Instantiating forms (for delivering necessary info form info to main grid)
    MainWindow mainpage;
    NecessaryInfoForm necinfo;

    //Signals
    QObject::connect(&necinfo, SIGNAL(new_Contact_Info(const QString&)),
                    &mainpage,SLOT(new_Contact_Info(const QString &)));
    //Displaying Main Window
    mainpage.show();
    return a.exec();
}
