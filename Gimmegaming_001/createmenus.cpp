#include "createmenus.h"

namespace Application
{
    CreateMenus::CreateMenus(QWidget *parent) : QDialog(parent)
    {
        createLayout(parent);
        createButtons();
    }

    CreateMenus::CreateMenus(bool recCenter, bool recButtons, int recWidth, int recHeight, QWidget *parent) : QDialog(parent)
    {
        createLayout(recCenter, recWidth, recHeight, parent);
        if(recButtons)
        {
            nWidth = recWidth;
            nHeight = recHeight;
            createButtons();
        }
    }

    void CreateMenus::createLayout(QWidget *recParent)
    {
        this->setGeometry((recParent->x() + titleBarWidth), (recParent->y() + titleBarHeight), nWidth, nHeight);
    }

    void CreateMenus::createLayout(bool recCenter, int recWidth, int recHeight, QWidget *recParent)
    {
        if(recCenter)
        {
            this->setGeometry(QRect(QPoint(((recParent->x() + titleBarWidth) + ((recParent->width() / 2) - (recWidth / 2))), (recParent->y() + titleBarHeight) + ((recParent->height() / 2) - (recHeight / 2))), QSize(recWidth, recHeight)));
        }
        else
        {
            this->setGeometry(QRect(QPoint(recParent->x() + titleBarWidth, recParent->y() + titleBarHeight), QSize(recWidth, recHeight)));
        }
    }

    void CreateMenus::createButtons(void)
    {
        xSpacer = 10;
        ySpacer = 5;
        buttonSpacer = 5;
        buttonWidth = 60;
        buttonHeight = 25;
        buttonYPoint = (nHeight - buttonHeight - ySpacer);
        cancelXPoint = (nWidth - xSpacer - buttonWidth);
        okXPoint = (cancelXPoint - buttonSpacer - buttonWidth);

        okButton = new QPushButton("OK", this);
        okButton->setGeometry(QRect(QPoint(okXPoint, buttonYPoint), QSize(buttonWidth, buttonHeight)));
        connect(okButton, SIGNAL(released()), this, SLOT(okFunc()));

        cancelButton = new QPushButton("Cancel", this);
        cancelButton->setGeometry(QRect(QPoint(cancelXPoint, buttonYPoint), QSize(buttonWidth, buttonHeight)));
        connect(cancelButton, SIGNAL(released()), this, SLOT(cancelFunc()));
    }

    void CreateMenus::okFunc(void)
    {
        accept();
    }

    void CreateMenus::cancelFunc(void)
    {
        close();
    }

    CreateMenus::~CreateMenus()
    {

    }
}
