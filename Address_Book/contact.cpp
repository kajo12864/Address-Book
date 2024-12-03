#include "contact.h"
#include <qdir.h>

Contact::Contact(QString name, QString phone_number, QIcon icon, int contact_type) {
    this->name = name;
    this->phone_number = phone_number;
    this->icon = icon;
    this->contact_type = contact_type;

}
