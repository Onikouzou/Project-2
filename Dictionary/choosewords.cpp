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
    lang.setConsonants("p b m f v θ ð t d n r s z l ʃ ʒ j k g ŋ h ");
    lang.setVowels("i e ɪ æ ə ɜ a ʊ ɐ u ʌ ɔ ");
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
