#include "existinglanguage.h"
#include "ui_existinglanguage.h"
#include <QInputDialog>
#include <QCheckBox>
#include <QStringList>
#include "customdialog.h"
#include "mainmenu.h"

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
    bool unchecked = false;

    // this is a framework I found online. Credit to http://www.andrewnoske.com/wiki/Code_-_qt_custom_input_dialog
    CustomDialog sounds("Sounds", this);
    sounds.addLabel("Please select the sounds you would like to use below:");
    sounds.addCheckBox("Option 1", &unchecked);
    sounds.addCheckBox("Option 2", &unchecked);
    sounds.addCheckBox("Option 3", &unchecked);
    sounds.addCheckBox("option 4", &unchecked);

    sounds.exec();

    if(sounds.wasCancelled())
      return;
}

void ExistingLanguage::on_btnChooseStructure_clicked()
{
    bool unchecked = false;

    // this is a framework I found online. Credit to http://www.andrewnoske.com/wiki/Code_-_qt_custom_input_dialog
    CustomDialog structure("Structure", this);
    structure.addLabel("Please select the structure you would like to use below:"); // not exactly sure on what you want for this yet
    structure.addCheckBox("Option 1", &unchecked);
    structure.addCheckBox("Option 2", &unchecked);
    structure.addCheckBox("Option 3", &unchecked);

    structure.exec();

    if(structure.wasCancelled())
      return;
}

void ExistingLanguage::on_btnChooseWords_clicked()
{
    bool unchecked = false;

    // this is a framework I found online. Credit to http://www.andrewnoske.com/wiki/Code_-_qt_custom_input_dialog
    CustomDialog words("Words", this);
    words.addLabel("Please select the words you would like to use below:");
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
