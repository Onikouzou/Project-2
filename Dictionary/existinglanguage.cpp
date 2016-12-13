#include "existinglanguage.h"
#include "ui_existinglanguage.h"
#include <QInputDialog>
#include <QStringList>
#include <QMessageBox>
#include "customdialog.h"
#include "mainmenu.h"
#include "choosesounds.h"
#include "choosestructure.h"
#include <QObject>

ExistingLanguage::ExistingLanguage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExistingLanguage)
{
    ui->setupUi(this);

    lang = Language(existingSlot.getName());
    ui->lblName->setText(lang.getName());
}

ExistingLanguage::~ExistingLanguage()
{
    delete ui;
}

void ExistingLanguage::on_btnChooseSounds_clicked()
{
    sounds = new ChooseSounds(this);


    QObject::connect(&sounds->soundSlot, SIGNAL(consChanged(QString)),
                     &existingSlot, SLOT(setCons(QString)));

    QObject::connect(&sounds->soundSlot, SIGNAL(vowsChanged(QString)),
                     &existingSlot, SLOT(setVows(QString)));

    lang.setConsonants(existingSlot.getCons());
    lang.setVowels(existingSlot.getVows());

    sounds->show();
}

void ExistingLanguage::on_btnChooseStructure_clicked()
{
    structure = new chooseStructure(this);
    structure->show();
}

void ExistingLanguage::on_btnChooseWords_clicked()
{
    if (lang.getStructure() == "" || lang.getConsonants() == "" || lang.getVowels() == "")
    {
        QMessageBox error;
        error.setText("You need to do the previous things first.");
        error.exec();
    }
    else
    {
        // Make the window
    }
}

void ExistingLanguage::on_btnSearchDictionary_clicked()
{

}

void ExistingLanguage::on_btnReturn_clicked()
{

}
