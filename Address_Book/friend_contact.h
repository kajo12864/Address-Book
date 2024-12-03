#ifndef FRIEND_CONTACT_H
#define FRIEND_CONTACT_H

#include "contact.h"

class Friend_Contact : public Contact
{
public:
    Friend_Contact(QString name, QString phone_number, QIcon icon, QString contact_type);
};

#endif // FRIEND_CONTACT_H
