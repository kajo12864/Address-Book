#ifndef CONTACT_H
#define CONTACT_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <qdatetime.h>

class Contact
{
protected:
    //required data
    QString name;
    QString phone_number;
    QIcon icon;
    QString contact_type;
    //optional data
    QDate birthdate;
    QString address;
public:
    Contact(QString name, QString phone_number, QIcon icon, QString contact_type);
    QString get_name(){
        return name;
    };
    Contact();
    virtual void Call(){qDebug() << "Calling" << name;} //If this were a real app project, this would be used to call the contact
};

#endif // CONTACT_H
