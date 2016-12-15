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
#include "choosewords.h"

ExistingLanguage::ExistingLanguage(QWidget *parent, QString langName) :
    QMainWindow(parent),
    ui(new Ui::ExistingLanguage)
{
    ui->setupUi(this);

    lang.setName(langName);
    ui->lblName->setText(langName);
}

ExistingLanguage::~ExistingLanguage()
{
    delete ui;
}

void ExistingLanguage::on_btnChooseSounds_clicked()
{
    sounds = new ChooseSounds(this);

    QObject::connect(&sounds->signalslot, SIGNAL(consChanged(QString)),
                     &signalslot, SLOT(setCons(QString)));

    QObject::connect(&sounds->signalslot, SIGNAL(vowsChanged(QString)),
                     &signalslot, SLOT(setVows(QString)));

    sounds->show();

    ui->lblSounds->setText(signalslot.getCons());
}

void ExistingLanguage::on_btnChooseStructure_clicked()
{
    structure = new chooseStructure(this);

    QObject::connect(&structure->signalslot, SIGNAL(structureChanged(QString)),
                     &signalslot, SLOT(setStructure(QString)));

    structure->show();
}

void ExistingLanguage::on_btnChooseWords_clicked()
{
    lang.setCons(signalslot.getCons());
    lang.setVows(signalslot.getVows());
    lang.setStructure(signalslot.getStructure());

    if (lang.getCons().compare("") != 0 && lang.getVows().compare("") != 0
            && lang.getStructure().compare("") != 0 /*&& lang.getCodaClusters() != "" && lang.getOnsetClusters() != ""*/)
    {
        words = new chooseWords(this, &signalslot);
        words->show();
    }
    else
    {
        QMessageBox error;
        error.setText("You need to finish other parts first.");
        error.exec();
    }

}

void ExistingLanguage::on_btnSearchDictionary_clicked()
{

}

void ExistingLanguage::on_btnReturn_clicked()
{

}
