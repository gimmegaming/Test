#include "helpcontact.h"

namespace Application
{
    HelpContact::HelpContact(bool recCenter, bool recButtons, int recWidth, int recHeight, QWidget *parent) : CreateMenus(recCenter, recButtons, recWidth, recHeight, parent)
    {
        this->setWindowTitle("Contact Us");
    }

    HelpContact::~HelpContact()
    {

    }
}
