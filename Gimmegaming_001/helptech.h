#pragma once

#include "createmenus.h"

namespace Application
{
    class HelpTech : public CreateMenus
    {
        Q_OBJECT
    public:
        HelpTech(bool recCenter, bool recButtons, int recWidth, int recHeight, QWidget *parent = 0);
        ~HelpTech();
    protected:
    signals:
    private slots:
    private:
    };
}
