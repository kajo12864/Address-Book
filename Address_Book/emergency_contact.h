#ifndef EMERGENCY_CONTACT_H
#define EMERGENCY_CONTACT_H

#include "contact.h"

class Emergency_Contact : public Contact
{
public:
    Emergency_Contact(QString name, QString phone_number, QIcon icon, QString contact_type);
    void Call(){qDebug() << "Calling" << name << " with emergency priority";} //If this were a real app project, this would be used to call the contact
};

#endif // EMERGENCY_CONTACT_H
