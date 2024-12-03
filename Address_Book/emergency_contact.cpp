#include "emergency_contact.h"

Emergency_Contact::Emergency_Contact(QString name, QString phone_number, QIcon icon, QString contact_type):Contact(name, phone_number, icon, contact_type) {
    this->name = name;
    this->phone_number = phone_number;
    this->icon = icon;
    this->contact_type = contact_type;
}
