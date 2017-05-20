#include "helptech.h"

namespace Application
{
    HelpTech::HelpTech(bool recCenter, bool recButtons, int recWidth, int recHeight, QWidget *parent) : CreateMenus(recCenter, recButtons, recWidth, recHeight, parent)
    {
        this->setWindowTitle("Technical Support");
    }

    HelpTech::~HelpTech()
    {

    }
}
