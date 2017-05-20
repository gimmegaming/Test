#pragma once

#include "createmenus.h"

namespace Application
{
class OpenFile : public CreateMenus
{
    Q_OBJECT
public:
    OpenFile(QWidget *parent = 0);
    ~OpenFile();
protected:
signals:
private slots:
private:
};
}
