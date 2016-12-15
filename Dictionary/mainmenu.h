/* Header file for the mainmenu.cpp
 * ---------------------------------
 *
 *
 * */

#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include "existinglanguage.h"
#include <QInputDialog>
#include <QStringList>
#include <QMessageBox>
#include <QString>
#include "signalslots.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    static const int NAME_MAX = 100;
    QString names[NAME_MAX];
    int nameCount;
    signalslots mainSlot;
    ~MainMenu();

private slots:
    void on_btnCreateLanguage_clicked();

    void on_btnLoadLanguage_clicked();

    void on_btnExit_clicked();

private:
    Ui::MainMenu *ui;
    ExistingLanguage *existing;
};

#endif // MAINMENU_H
