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
    QString contact_type = "Normal";
    //optional data
    QDate birthdate;
    QString address;
public:
    Contact(QString name, QString phone_number, QIcon icon, QString contact_type);
    //Get info
    QString get_name(){
        return name;
    };
    QString get_number() {
        return phone_number;
    }
    QIcon get_icon() {
        return icon;
    }
    QDate get_dob(){
        return birthdate;
    }
    QString get_address(){
        return address;
    }
    QString get_contact_type(){
        return contact_type;
    }

    //Virtual function "Call"
    virtual void Call(){qDebug() << "Calling" << name;} //If this were a real app project, this would be used to call the contact
};

#endif // CONTACT_H
