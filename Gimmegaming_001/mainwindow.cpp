#include "mainwindow.h"

namespace Application
{
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    createActions();
}

void MainWindow::createActions(void)
{
    for(int i = 0; i < MENUSIZE; i++)
    {
        mapper[i] = new QSignalMapper(this);
        for(int j = 0; j < ACTIONSIZE; j++)
        {
            if(actionNames[i][j] != NULL)
            {
                actions[i][j] = new QAction(actionNames[i][j], this);
                mapper[i]->setMapping(actions[i][j], j);
                connect(actions[i][j], SIGNAL(triggered()), mapper[i], SLOT(map()));

                if(actionNames[i][j] == "New")
                {
                    actions[i][j]->setShortcut(QKeySequence::New);
                }
                else if(actionNames[i][j] == "Open")
                {
                    actions[i][j]->setShortcut(QKeySequence::Open);
                }
                else if(actionNames[i][j] == "Close")
                {
                    actions[i][j]->setShortcut(QKeySequence::Close);
                }
                else if(actionNames[i][j] == "Save")
                {
                    actions[i][j]->setShortcut(QKeySequence::Save);
                }
                else if(actionNames[i][j] == "SaveAs")
                {
                    actions[i][j]->setShortcut(QKeySequence::SaveAs);
                }
                else if(actionNames[i][j] == "Print")
                {
                    actions[i][j]->setShortcut(QKeySequence::Print);
                }
            }
        }
    }
    connect(mapper[0], SIGNAL(mapped(int)), this, SLOT(filesFunc(int)));
    connect(mapper[1], SIGNAL(mapped(int)), this, SLOT(editFunc(int)));
    connect(mapper[2], SIGNAL(mapped(int)), this, SLOT(toolsFunc(int)));
    connect(mapper[3], SIGNAL(mapped(int)), this, SLOT(helpFunc(int)));
    createMenus();
}

void MainWindow::createMenus(void)
{
    for(int i = 0; i < MENUSIZE; i++)
    {
        menus[i] = menuBar()->addMenu(menuNames[i]);
        for(int j = 0; j < ACTIONSIZE; j++)
        {
            if(actionNames[i][j] != NULL)
            {
                menus[i]->addAction(actions[i][j]);

                if(actionNames[i][j] == "Close" || actionNames[i][j] == "SaveAs" || actionNames[i][j] == "Print Preview")
                {
                    menus[i]->addSeparator();
                }
            }
        }
    }
}

void MainWindow::filesFunc(int recI)
{
    if(actionNames[0][recI] == "New")
    {

    }
    else if(actionNames[0][recI] == "Open")
    {
        CreateMenus *fileOpen = new OpenFile(this);

        fileOpen->show();
    }
    else if(actionNames[0][recI] == "Close")
    {

    }
    else if(actionNames[0][recI] == "Save")
    {

    }
    else if(actionNames[0][recI] == "SaveAs")
    {

    }
    else if(actionNames[0][recI] == "Print Preview")
    {

    }
    else if(actionNames[0][recI] == "Exit")
    {
        close();
    }
}

void MainWindow::editFunc(int recI)
{
    if(actionNames[1][recI] == "Database Connection")
    {

    }
    else if(actionNames[1][recI] == "Network Connection")
    {

    }
}

void MainWindow::toolsFunc(int recI)
{
    if(actionNames[2][recI] == "Options")
    {
        CreateMenus *optionsTools = new ToolsOptions(true, true, 1000, 1000, this);

        optionsTools->show();
    }
    else if(actionNames[2][recI] == "Calculator")
    {

    }
    else if(actionNames[2][recI] == "Calendar")
    {

    }
}

void MainWindow::helpFunc(int recI)
{
    if(actionNames[3][recI] == "Contact Us")
    {
        CreateMenus *contactHelp = new HelpContact(true, false, 400, 400, this);

        contactHelp->show();
    }
    else if(actionNames[3][recI] == "Technical Support")
    {
        CreateMenus *techHelp = new HelpTech(true, false, 500, 600, this);

        techHelp->show();
    }
    else if(actionNames[3][recI] == "About Us")
    {
        CreateMenus *aboutUsHelp = new HelpAboutUs(true, false, 300, 300, this);

        aboutUsHelp->show();
    }
}

MainWindow::~MainWindow()
{

}
}
