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
#include "WordGenerator.cpp"

ExistingLanguage::ExistingLanguage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExistingLanguage)
{
    ui->setupUi(this);

    lang = Language(existingSlot.getName());
    lang.setConsonants("b c d f g h j k l m n p q r s t v w x z ");
    lang.setVowels("a e i o u ");
    lang.setStructure("ccVcc");
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
        QString words[10];
        generateWords(lang, words);
        QMessageBox error;
        error.setText(words[1]);
        error.exec();
    }
    else
    {
        QString words[10];
        generateWords(lang, words);
         QMessageBox wordList;
         QString allWords = "";
         for (int i = 0; i < 10; i++)
         {
             allWords += words[i] + "\n";
         }
         wordList.setText(allWords);
         wordList.exec();
    }
}

void ExistingLanguage::on_btnSearchDictionary_clicked()
{

}

void ExistingLanguage::on_btnReturn_clicked()
{

}
