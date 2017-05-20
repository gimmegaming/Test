#pragma once

#include "createmenus.h"

namespace Application
{
    class HelpAboutUs : public CreateMenus
    {
        Q_OBJECT
    public:
        HelpAboutUs(bool recCenter, bool recButtons, int recWidth, int recHeight, QWidget *parent = 0);
        ~HelpAboutUs();
    protected:
    signals:
    private slots:
    private:
    };
}
