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

    // Consonants
    sounds.addCheckBox("p", &unchecked);
    sounds.addCheckBox("b", &unchecked);
    sounds.addCheckBox("m", &unchecked);
    sounds.addCheckBox("ʙ", &unchecked);
    sounds.addCheckBox("ɸ", &unchecked);
    sounds.addCheckBox("β", &unchecked);
    sounds.addCheckBox("ɱ", &unchecked);
    sounds.addCheckBox("f", &unchecked);
    sounds.addCheckBox("v", &unchecked);
    sounds.addCheckBox("ʋ", &unchecked);
    sounds.addCheckBox("t", &unchecked);
    sounds.addCheckBox("d", &unchecked);
    sounds.addCheckBox("n", &unchecked);
    sounds.addCheckBox("r", &unchecked);
    sounds.addCheckBox("θ", &unchecked);
    sounds.addCheckBox("ð", &unchecked);
    sounds.addCheckBox("s", &unchecked);
    sounds.addCheckBox("z", &unchecked);
    sounds.addCheckBox("ʃ", &unchecked);
    sounds.addCheckBox("ʒ", &unchecked);
    sounds.addCheckBox("ɬ", &unchecked);
    sounds.addCheckBox("ɮ", &unchecked);
    sounds.addCheckBox("ɹ", &unchecked);
    sounds.addCheckBox("l", &unchecked);
    sounds.addCheckBox("ʈ", &unchecked);
    sounds.addCheckBox("ɖ", &unchecked);
    sounds.addCheckBox("ɳ", &unchecked);
    sounds.addCheckBox("ɽ", &unchecked);
    sounds.addCheckBox("ʂ", &unchecked);
    sounds.addCheckBox("ʐ", &unchecked);
    sounds.addCheckBox("ɻ", &unchecked);
    sounds.addCheckBox("ɭ", &unchecked);
    sounds.addCheckBox("c", &unchecked);
    sounds.addCheckBox("ɟ", &unchecked);
    sounds.addCheckBox("ɲ", &unchecked);
    sounds.addCheckBox("ç", &unchecked);
    sounds.addCheckBox("ʝ", &unchecked);
    sounds.addCheckBox("j", &unchecked);
    sounds.addCheckBox("ʎ", &unchecked);
    sounds.addCheckBox("k", &unchecked);
    sounds.addCheckBox("g", &unchecked);
    sounds.addCheckBox("ŋ", &unchecked);
    sounds.addCheckBox("x", &unchecked);
    sounds.addCheckBox("ɣ", &unchecked);
    sounds.addCheckBox("ɰ", &unchecked);
    sounds.addCheckBox("ʟ", &unchecked);
    sounds.addCheckBox("q", &unchecked);
    sounds.addCheckBox("ɢ", &unchecked);
    sounds.addCheckBox("ɴ", &unchecked);
    sounds.addCheckBox("ʀ", &unchecked);
    sounds.addCheckBox("χ", &unchecked);
    sounds.addCheckBox("ʁ", &unchecked);
    sounds.addCheckBox("ħ", &unchecked);
    sounds.addCheckBox("ʕ", &unchecked);
    sounds.addCheckBox("ʔ", &unchecked);
    sounds.addCheckBox("h", &unchecked);
    sounds.addCheckBox("ɦ", &unchecked);

    // Vowels
    sounds.addCheckBox("i", &unchecked);
    sounds.addCheckBox("y", &unchecked);
    sounds.addCheckBox("ɪ", &unchecked);
    sounds.addCheckBox("ʏ", &unchecked);
    sounds.addCheckBox("e", &unchecked);
    sounds.addCheckBox("ø", &unchecked);
    sounds.addCheckBox("ɛ", &unchecked);
    sounds.addCheckBox("œ", &unchecked);
    sounds.addCheckBox("æ", &unchecked);
    sounds.addCheckBox("a", &unchecked);
    sounds.addCheckBox("ɶ", &unchecked);
    sounds.addCheckBox("ɨ", &unchecked);
    sounds.addCheckBox("ʉ", &unchecked);
    sounds.addCheckBox("ɘ", &unchecked);
    sounds.addCheckBox("ɵ", &unchecked);
    sounds.addCheckBox("ə", &unchecked);
    sounds.addCheckBox("ɜ", &unchecked);
    sounds.addCheckBox("ɞ", &unchecked);
    sounds.addCheckBox("ɐ", &unchecked);
    sounds.addCheckBox("ʊ", &unchecked);
    sounds.addCheckBox("ɯ", &unchecked);
    sounds.addCheckBox("u", &unchecked);
    sounds.addCheckBox("ɤ", &unchecked);
    sounds.addCheckBox("o", &unchecked);
    sounds.addCheckBox("ʌ", &unchecked);
    sounds.addCheckBox("ɔ", &unchecked);
    sounds.addCheckBox("ɑ", &unchecked);
    sounds.addCheckBox("ɒ", &unchecked);


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

    // Make these radio buttons (only can choose one)
    structure.addCheckBox("cV", &unchecked);
    structure.addCheckBox("ccVcc", &unchecked);
    structure.addCheckBox("cVc", &unchecked);
    // Button c
    // Button C
    // Button v
    // Button V
    // Each button adds the letter to an uneditable text box/area

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
