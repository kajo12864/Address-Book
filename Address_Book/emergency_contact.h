#ifndef EMERGENCY_CONTACT_H
#define EMERGENCY_CONTACT_H

#include "contact.h"

class Emergency_Contact : public Contact
{
public:
    Emergency_Contact(QString name, QString phone_number, QIcon icon, QString contact_type);
};

#endif // EMERGENCY_CONTACT_H
