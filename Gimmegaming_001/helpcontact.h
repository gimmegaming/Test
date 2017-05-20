#pragma once

#include "createmenus.h"

namespace Application
{
    class HelpContact : public CreateMenus
    {
        Q_OBJECT
    public:
        HelpContact(bool recCenter, bool recButtons, int recWidth, int recHeight, QWidget *parent = 0);
        ~HelpContact();
    protected:
    signals:
    private slots:
    private:
    };
}
