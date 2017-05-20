#pragma once

#include <QDialog>
#include <QPushButton>

namespace Application
{
class CreateMenus : public QDialog
{
    Q_OBJECT
public:
    explicit CreateMenus(QWidget *parent = 0);
    explicit CreateMenus(bool recCenter, bool recButtons, int recWidth, int recHeight, QWidget *parent = 0);
    ~CreateMenus();
protected:
    QPushButton *okButton, *cancelButton;
    int titleBarWidth = 8, titleBarHeight = 31, nWidth = 500, nHeight = 300;
    int buttonSpacer, okXPoint, cancelXPoint, buttonYPoint, buttonWidth, buttonHeight, xSpacer, ySpacer;
signals:
private slots:
    void okFunc(void);
    void cancelFunc(void);
private:
    void createLayout(QWidget *recParent);
    void createLayout(bool recCenter, int recWidth, int recHeight, QWidget *recParent);
    void createButtons(void);
};
}
