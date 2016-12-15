#include "choosewords.h"
#include "ui_choosewords.h"
#include "Language.h"

chooseWords::chooseWords(QWidget *parent, signalslots *s) :
    QDialog(parent),
    ui(new Ui::chooseWords)
{
    ui->setupUi(this);
    QString wordList[16];

    generateWords(s, wordList);\

    QString allWords = "";
    for(int i=0; i<16; i++)
    {
        allWords+= wordList[i] + "\n";
    }

    ui->listWords->addItem(allWords);
}

chooseWords::~chooseWords()
{
    delete ui;
}
