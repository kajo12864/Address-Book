#ifndef CONTACTSVECTOR_H
#define CONTACTSVECTOR_H

#include "contact.h"
#endif // CONTACTSVECTOR_H

//Should allow the vector of contacts to be globally used across .cpp files
class ContactsVector{
public:
    QVector<Contact*> Contacts_Data; //Creates a vector that can hold contacts and subclasses of contact
};

