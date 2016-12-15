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
    nameCount = 0;

    for (int i = 0; i < NAME_MAX; i++)
        names[i] = "";
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_btnCreateLanguage_clicked()
{
    if (nameCount < NAME_MAX)
    {
        names[nameCount] = QInputDialog::getText(this, "New Language",
                "Enter name of new language: ",
                QLineEdit::Normal);
        nameCount++;
    }
    else
    {
        QMessageBox error;
        error.setText("There are too many names.");
        error.exec();
    }
}

void MainMenu::on_btnLoadLanguage_clicked()
{
    // variables and list creation
    QInputDialog load;
    QStringList nameList;
    for (int i = 0; i < nameCount; i++)
        nameList << names[i];

    // create the dialog box for displaying the list of existing languages
    load.setOptions(QInputDialog::UseListViewForComboBoxItems);
    load.setComboBoxItems(nameList);
    load.setWindowTitle("Load Language");

    QString nameChosen = "";
    if (load.exec())
    {
        nameChosen = load.textValue();
    }

    // open up the existing language window and hide the main menu
    existing = new ExistingLanguage(this, nameChosen);

    existing->show();
}

void MainMenu::on_btnExit_clicked()
{
    close();
}
