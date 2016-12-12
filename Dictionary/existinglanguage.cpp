#include "existinglanguage.h"
#include "ui_existinglanguage.h"
#include <QInputDialog>
#include <QCheckBox>
#include <QStringList>
#include <QRadioButton>
#include "customdialog.h"
#include "mainmenu.h"
#include "choosesounds.h"
#include "choosestructure.h"

ExistingLanguage::ExistingLanguage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExistingLanguage)
{
    ui->setupUi(this);
}

ExistingLanguage::~ExistingLanguage()
{
    delete ui;
}

void ExistingLanguage::on_btnChooseSounds_clicked()
{
    sounds = new ChooseSounds(this);
    sounds->show();
}

void ExistingLanguage::on_btnChooseStructure_clicked()
{
    structure = new chooseStructure(this);
    structure->show();
}

void ExistingLanguage::on_btnChooseWords_clicked()
{
    bool unchecked = false;

    // this is a framework I found online. Credit to http://www.andrewnoske.com/wiki/Code_-_qt_custom_input_dialog
    CustomDialog words("Words", this);
    words.addLabel("Please select the words you would like to use below:");
    // Create words based on chosen sounds and structure.
    // List words somehow so they can be added to dictionary on a click
    // Probably bring up a dialog box that asks for type of word and definition(s)
    words.addCheckBox("Option 1", &unchecked);
    words.addCheckBox("Option 2", &unchecked);
    words.addCheckBox("Option 3", &unchecked);

    words.exec();

    if(words.wasCancelled())
      return;
}

void ExistingLanguage::on_btnSearchDictionary_clicked()
{

}

void ExistingLanguage::on_btnReturn_clicked()
{

}
