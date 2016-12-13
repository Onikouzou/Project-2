#include "choosewords.h"
#include "ui_choosewords.h"
#include "Language.h"

chooseWords::chooseWords(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chooseWords)
{
    ui->setupUi(this);
    QString wordList[16];
    lang = Language();
    lang.setConsonants("b c d f g h j k l m n p q r s t v w x z ");
    lang.setVowels("a e i o u ");
    lang.setStructure("ccVcc");

    generateWords(lang, wordList);\

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
