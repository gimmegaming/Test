#pragma once

#include "createmenus.h"

namespace Application
{
    class ToolsOptions : public CreateMenus
    {
        Q_OBJECT
    public:
        ToolsOptions(bool recCenter, bool recButtons, int recWidth, int recHeight, QWidget *parent = 0);
        ~ToolsOptions();
    protected:
    signals:
    private slots:
    private:
    };
}
