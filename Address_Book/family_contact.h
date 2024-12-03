#ifndef FAMILY_CONTACT_H
#define FAMILY_CONTACT_H

#include "contact.h"

class Family_Contact : public Contact
{
public:
    Family_Contact(QString name, QString phone_number, QIcon icon, QString contact_type);
};

#endif // FAMILY_CONTACT_H
