#ifndef PROFILEDISPLAY_H
#define PROFILEDISPLAY_H

#include "contact.h"
#include <QWidget>
#include <qlistwidget.h>

namespace Ui {
class profiledisplay;
}

//Autogenerated by Qt
class profiledisplay : public QWidget
{
    Q_OBJECT

public:
    explicit profiledisplay(QWidget *parent = nullptr); //Autogenerated by Qt
    ~profiledisplay(); //Autogenerated by Qt

private slots:
    void on_editBtn_clicked();
    void on_closeBtn_clicked();
    void on_deleteBtn_clicked();
    void set_Contact_Profile_Details(QListWidgetItem item);


signals:
    void open_EditI_GUI(); //Opens edit info gui;

    void remove_Contact(const QString &name, const QString &number); //Used to remove contact

private:
    Ui::profiledisplay *ui;
};

#endif // PROFILEDISPLAY_H
