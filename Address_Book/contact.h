#ifndef CONTACT_H
#define CONTACT_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <qdatetime.h>

class Contact
{
private:
    //required data
    QString name;
    QString phone_number;
    QIcon icon;
    int contact_type; //0 : Normal , 1 : Friend , 2 : Family, 3 : Emergency
    //optional data
    QDate birthdate;
    QString address;
public:
    Contact(QString name, QString phone_number, QIcon icon, int contact_type);
    QString get_name(){
        return name;
    };
};

#endif // CONTACT_H
