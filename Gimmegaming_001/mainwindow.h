#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QSignalMapper>
#include <QString>

#include "openfile.h"
#include "toolsoptions.h"
#include "helpaboutus.h"
#include "helptech.h"
#include "helpcontact.h"

#define MENUSIZE 4
#define ACTIONSIZE 10

const QString menuNames[MENUSIZE] = {"Files", "Edit", "Tools", "Help"};

const QString actionNames[MENUSIZE][ACTIONSIZE] =
{
    {"New", "Open", "Close", "Save", "SaveAs", "Print", "Print Preview", "Exit"},
    {"Database Connection", "Network Connection"},
    {"Options", "Calculator", "Calendar"},
    {"Contact Us", "Technical Support", "About Us"}
};

namespace Application
{
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
signals:

private slots:
    void filesFunc(int recI);
    void editFunc(int recI);
    void toolsFunc(int recI);
    void helpFunc(int recI);
private:
    void createMenus(void);
    void createActions(void);

    QAction *actions[MENUSIZE][ACTIONSIZE];
    QMenu *menus[MENUSIZE];
    QSignalMapper *mapper[MENUSIZE];
};
}


#endif
