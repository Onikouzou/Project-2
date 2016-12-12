#include "choosesounds.h"
#include "ui_choosesounds.h"
#include <QInputDialog>
#include <QListWidget>

#include "SoundHelper.cpp"

ChooseSounds::ChooseSounds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChooseSounds)
{
    ui->setupUi(this);
    consSounds = "";
    vowSounds = "";
    masterConsList = "p b m ʙ ɸ β ɱ f v ʋ θ ð t d n r ɾ s z ɬ ɮ ɹ l ʃ ʒ ʈ ɖ ɳ ɽ ʂ ʐ ɻ ɭ c ɟ ɲ ç ʝ j ʎ k g ŋ x ɣ ɰ ʟ q ɢ ɴ ʀ χ ʁ ħ ʕ ʔ h ɦ ";
    masterVowList = "i y e ɪ ʏ ø ɛ æ ɨ ʉ ɘ ə œ ɜ a ʊ ɵ ɞ ɐ ä ɯ u ɤ o ʌ ɔ ɑ ɒ ";
}

ChooseSounds::~ChooseSounds()
{
    delete ui;
}

void ChooseSounds::on_btnSubmit_clicked()
{

}

void ChooseSounds::on_btnReset_clicked()
{
    ui->listConsonants->clear();
    ui->listVowels->clear();
    consSounds = "";
    vowSounds = "";
    ui->lblCons->setText(consSounds);
    //ui->lblVow->setText(vowSounds);
    // Reset all buttons to false :(
}

void ChooseSounds::setConsSounds(QString character, bool checked)
{
    int charPos = 0;
    while (charPos < masterConsList.length())
    {
        QString temp = masterConsList.mid(charPos, 1);
        if (temp == character)
            break;
        else
            charPos = charPos + 2;
    }
    if (checked)
    {
         consSounds = addCharacter(masterConsList, consSounds, charPos);
    }
    else
    {
        consSounds = removeCharacter(masterConsList, consSounds, charPos);
    }

    ui->lblCons->setText(consSounds);
}

void ChooseSounds::setVowSounds(QString character, bool checked)
{
    int charPos = 0;
    while (charPos < masterVowList.length())
    {
        QString temp = masterVowList.mid(charPos, 1);
        if (temp == character)
            break;
        else
            charPos = charPos + 2;
    }
    if (checked)
    {
         vowSounds = addCharacter(masterVowList, vowSounds, charPos);
    }
    else
    {
        vowSounds = removeCharacter(masterVowList, vowSounds, charPos);
    }

    ui->lblVow->setText(vowSounds);
}

// Consonants
void ChooseSounds::on_btnP_toggled(bool checked)                        { setConsSounds("p", checked); }
void ChooseSounds::on_btnB_toggled(bool checked)                        { setConsSounds("b", checked); }
void ChooseSounds::on_btnM_toggled(bool checked)                        { setConsSounds("m", checked); }
void ChooseSounds::on_btnBilabialTrill_toggled(bool checked)            { setConsSounds("ʙ", checked); }
void ChooseSounds::on_btnBilabialFricative_toggled(bool checked)        { setConsSounds("ɸ", checked); }
void ChooseSounds::on_btnBeta_toggled(bool checked)                     { setConsSounds("β", checked); }
void ChooseSounds::on_btnLabiodentalNasal_toggled(bool checked)         { setConsSounds("ɱ", checked); }
void ChooseSounds::on_btnF_toggled(bool checked)                        { setConsSounds("f", checked); }
void ChooseSounds::on_btnV_toggled(bool checked)                        { setConsSounds("v", checked); }
void ChooseSounds::on_btnLabiodentaApprox_toggled(bool checked)         { setConsSounds("ʋ", checked); }
void ChooseSounds::on_btnTheta_toggled(bool checked)                    { setConsSounds("θ", checked); }
void ChooseSounds::on_btnVoicedDentalFricative_toggled(bool checked)    { setConsSounds("ð", checked); }
void ChooseSounds::on_btnT_toggled(bool checked)                        { setConsSounds("t", checked); }
void ChooseSounds::on_btnD_toggled(bool checked)                        { setConsSounds("d", checked); }
void ChooseSounds::on_btnN_toggled(bool checked)                        { setConsSounds("n", checked); }
void ChooseSounds::on_btnR_toggled(bool checked)                        { setConsSounds("r", checked); }
void ChooseSounds::on_btnAlveolarTapFlap_toggled(bool checked)          { setConsSounds("ɾ", checked); }
void ChooseSounds::on_btnS_toggled(bool checked)                        { setConsSounds("s", checked); }
void ChooseSounds::on_btnZ_toggled(bool checked)                        { setConsSounds("z", checked); }
void ChooseSounds::on_btnAlveolarLatFric_toggled(bool checked)          { setConsSounds("ɬ", checked); }
void ChooseSounds::on_btnDentalAlveolarFricative_toggled(bool checked)  { setConsSounds("ɮ", checked); }
void ChooseSounds::on_btnAlveolarPostApprox_toggled(bool checked)       { setConsSounds("ɹ", checked); }
void ChooseSounds::on_btnL_toggled(bool checked)                        { setConsSounds("l", checked); }
void ChooseSounds::on_btnEsh_toggled(bool checked)                      { setConsSounds("ʃ", checked); }
void ChooseSounds::on_btnEzh_toggled(bool checked)                      { setConsSounds("ʒ", checked); }
void ChooseSounds::on_btnRetroflexStop_toggled(bool checked)            { setConsSounds("ʈ", checked); }
void ChooseSounds::on_btnRetroflexStop_2_toggled(bool checked)          { setConsSounds("ɖ", checked); }
void ChooseSounds::on_btnRetroflexNasal_toggled(bool checked)           { setConsSounds("ɳ", checked); }
void ChooseSounds::on_btnRetroflexFlap_toggled(bool checked)            { setConsSounds("ɽ", checked); }
void ChooseSounds::on_btnRetroflexSibilant_toggled(bool checked)        { setConsSounds("ʂ", checked); }
void ChooseSounds::on_btnVoicedRetroflexSibilant_toggled(bool checked)  { setConsSounds("ʐ", checked); }
void ChooseSounds::on_btnRetroflexApproximant_toggled(bool checked)     { setConsSounds("ɻ", checked); }
void ChooseSounds::on_btnRetroflexLateralApprox_toggled(bool checked)   { setConsSounds("ɭ", checked); }
void ChooseSounds::on_btnC_toggled(bool checked)                        { setConsSounds("c", checked); }
void ChooseSounds::on_btnPalatalStop_toggled(bool checked)              { setConsSounds("ɟ", checked); }
void ChooseSounds::on_btnPalatalNasal_toggled(bool checked)             { setConsSounds("ɲ", checked); }
void ChooseSounds::on_btnPalatalFricative_toggled(bool checked)         { setConsSounds("ç", checked); }
void ChooseSounds::on_btnPalatalFricative_2_toggled(bool checked)       { setConsSounds("ʝ", checked); }
void ChooseSounds::on_btnJ_toggled(bool checked)                        { setConsSounds("j", checked); }
void ChooseSounds::on_btnPalatalLateralApproximant_toggled(bool checked){ setConsSounds("ʎ", checked); }
void ChooseSounds::on_btnK_toggled(bool checked)                        { setConsSounds("k", checked); }
void ChooseSounds::on_btnG_toggled(bool checked)                        { setConsSounds("g", checked); }
void ChooseSounds::on_btnVelarNasal_toggled(bool checked)               { setConsSounds("ŋ", checked); }
void ChooseSounds::on_btnX_toggled(bool checked)                        { setConsSounds("x", checked); }
void ChooseSounds::on_btnVoicedVelarFricative_toggled(bool checked)     { setConsSounds("ɣ", checked); }
void ChooseSounds::on_btnVoicedVelarApproximant_toggled(bool checked)   { setConsSounds("ɰ", checked); }
void ChooseSounds::on_btnVelarLateralApproximant_toggled(bool checked)  { setConsSounds("ʟ", checked); }
void ChooseSounds::on_btnQ_toggled(bool checked)                        { setConsSounds("q", checked); }
void ChooseSounds::on_btnVoicedUvularStop_toggled(bool checked)         { setConsSounds("ɢ", checked); }
void ChooseSounds::on_btnUvularNasal_toggled(bool checked)              { setConsSounds("ɴ", checked); }
void ChooseSounds::on_btnUvularTrill_toggled(bool checked)              { setConsSounds("ʀ", checked); }
void ChooseSounds::on_btnX2_toggled(bool checked)                       { setConsSounds("χ", checked); }
void ChooseSounds::on_btnUvularFricative_toggled(bool checked)          { setConsSounds("ʁ", checked); }
void ChooseSounds::on_btnPharyngealFricative_toggled(bool checked)      { setConsSounds("ħ", checked); }
void ChooseSounds::on_btnPharyngealFricative_2_toggled(bool checked)    { setConsSounds("ʕ", checked); }
void ChooseSounds::on_btnGlottalStop_toggled(bool checked)              { setConsSounds("ʔ", checked); }
void ChooseSounds::on_btnH_toggled(bool checked)                        { setConsSounds("h", checked); }
void ChooseSounds::on_btnGlottalFricative_toggled(bool checked)         { setConsSounds("ɦ", checked); }

// Vowels
void ChooseSounds::on_btnFrontClose_toggled(bool checked)               { setVowSounds("i", checked); }
