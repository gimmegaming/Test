#include <QApplication>
#include <QDesktopWidget>
#include <QString>
#include <QDir>

#include "mainwindow.h"

using namespace Application;
// using Application::MainWindow;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    const QString location = "images";
    QDir createFolder;

    // Application::MainWindow window;
    MainWindow window;
    window.setWindowTitle("Gimmegaming");
    window.setStyleSheet("Application--MainWindow {background-color: #8899AA;}");
    window.resize(((QApplication::desktop()->screen()->width() * 0.8) * 0.5), (QApplication::desktop()->screen()->height() * 0.8));

    window.move((QApplication::desktop()->screen()->rect().center()) - (window.rect().center()));


    if(!createFolder.exists(location))
    {
        createFolder.mkdir(location);
    }

    window.show();
    return app.exec();
}
