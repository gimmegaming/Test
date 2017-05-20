#include "helpaboutus.h"

namespace Application
{
    HelpAboutUs::HelpAboutUs(bool recCenter, bool recButtons, int recWidth, int recHeight, QWidget *parent) : CreateMenus(recCenter, recButtons, recWidth, recHeight, parent)
    {
        this->setWindowTitle("About Us");
    }

    HelpAboutUs::~HelpAboutUs()
    {

    }
}
