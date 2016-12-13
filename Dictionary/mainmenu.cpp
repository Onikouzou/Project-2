/* This is the main menu as it stands right now.
 * A lot will be changed once we put in the actual dictionary class but
 * right now it opens the base windows and stuff.
 * */

#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "existinglanguage.h"
#include <QInputDialog>
#include <QStringList>
#include <QMessageBox>
#include <QString>
#include "Language.h"

// global variables
QString name;

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_btnCreateLanguage_clicked()
{
    name = QInputDialog::getText(this, "New Language",
            "Enter name of new language: ",
            QLineEdit::Normal);

}

void MainMenu::on_btnLoadLanguage_clicked()
{
    // variables and list creation
    QInputDialog load;
    QStringList nameList;
    nameList << name;

    // create the dialog box for displaying the list of existing languages
    load.setOptions(QInputDialog::UseListViewForComboBoxItems);
    load.setComboBoxItems(nameList);
    load.setWindowTitle("Load Language");
    load.exec();

    // open up the existing language window and hide the main menu
    existing = new ExistingLanguage(this);
    existing->show();
    MainMenu::hide();
}

void MainMenu::on_btnExit_clicked()
{
    close();
}
