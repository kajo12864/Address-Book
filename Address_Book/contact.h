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

};

#endif // CONTACT_H
