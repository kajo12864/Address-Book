#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <qlistwidget.h>
#include <ui_necessaryinfoform.h>
#include <ui_profiledisplay.h>
#include <QFrame>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

//Autogenerated by Qt
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr); //Autogenerated by Qt
    ~MainWindow(); //Autogenerated by Qt
    //std::string contacts[2] = {"John Smith", "Diana Doe"};


private slots:
void on_pushButton_clicked(); //Used when the user clicks the add contact button
void new_Contact_Info(const QIcon &icon, const QString &name, const QString &number,const QString &contact_type); //Used to receive contact info from necessaryinfoform
void on_listWidget_itemDoubleClicked(QListWidgetItem *item); //Used to create a new profile window when a list item is double-clicked
void profile_Display(QListWidgetItem item);
signals:
void open_NecI_GUI(); //Opens required info input gui

void set_Contact_Profile_Details(QListWidgetItem item); //Sends data from the main list window to the newly opened individual profile
private:

    Ui::MainWindow *ui;
    QWidget *necessaryInfoForm;
    QWidget *profiledisplay;
    QMap<QString, QString> contacts; //Similar to an array. Keeps track of the ID of each contact.
};


#endif // MAINWINDOW_H
