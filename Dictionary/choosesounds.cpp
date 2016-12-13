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
    soundSlot.setCons(consSounds);
    soundSlot.setVows(vowSounds);
}

void ChooseSounds::on_btnReset_clicked()
{
    consSounds = "";
    vowSounds = "";
    ui->lblCons->setText(consSounds);
    ui->lblVow->setText(vowSounds);

    // Reset all buttons to false :(
    // Consonants
    ui->btnP->setChecked(false);
    ui->btnB->setChecked(false);
    ui->btnM->setChecked(false);
    ui->btnBilabialTrill->setChecked(false);
    ui->btnBilabialFricative->setChecked(false);
    ui->btnBeta->setChecked(false);
    ui->btnLabiodentalNasal->setChecked(false);
    ui->btnF->setChecked(false);
    ui->btnV->setChecked(false);
    ui->btnLabiodentaApprox->setChecked(false);
    ui->btnTheta->setChecked(false);
    ui->btnVoicedDentalFricative->setChecked(false);
    ui->btnT->setChecked(false);
    ui->btnD->setChecked(false);
    ui->btnN->setChecked(false);
    ui->btnR->setChecked(false);
    ui->btnAlveolarTapFlap->setChecked(false);
    ui->btnS->setChecked(false);
    ui->btnZ->setChecked(false);
    ui->btnAlveolarLatFric->setChecked(false);
    ui->btnDentalAlveolarFricative->setChecked(false);
    ui->btnAlveolarPostApprox->setChecked(false);
    ui->btnL->setChecked(false);
    ui->btnEsh->setChecked(false);
    ui->btnEzh->setChecked(false);
    ui->btnRetroflexStop->setChecked(false);
    ui->btnRetroflexStop_2->setChecked(false);
    ui->btnRetroflexNasal->setChecked(false);
    ui->btnRetroflexFlap->setChecked(false);
    ui->btnRetroflexSibilant->setChecked(false);
    ui->btnVoicedRetroflexSibilant->setChecked(false);
    ui->btnRetroflexApproximant->setChecked(false);
    ui->btnRetroflexLateralApprox->setChecked(false);
    ui->btnC->setChecked(false);
    ui->btnPalatalStop->setChecked(false);
    ui->btnPalatalNasal->setChecked(false);
    ui->btnPalatalFricative->setChecked(false);
    ui->btnPalatalFricative_2->setChecked(false);
    ui->btnJ->setChecked(false);
    ui->btnPalatalLateralApproximant->setChecked(false);
    ui->btnK->setChecked(false);
    ui->btnG->setChecked(false);
    ui->btnVelarNasal->setChecked(false);
    ui->btnX->setChecked(false);
    ui->btnVoicedVelarFricative->setChecked(false);
    ui->btnVoicedVelarApproximant->setChecked(false);
    ui->btnVelarLateralApproximant->setChecked(false);
    ui->btnQ->setChecked(false);
    ui->btnVoicedUvularStop->setChecked(false);
    ui->btnUvularNasal->setChecked(false);
    ui->btnUvularTrill->setChecked(false);
    ui->btnX2->setChecked(false);
    ui->btnUvularFricative->setChecked(false);
    ui->btnPharyngealFricative->setChecked(false);
    ui->btnPharyngealFricative_2->setChecked(false);
    ui->btnGlottalStop->setChecked(false);
    ui->btnH->setChecked(false);
    ui->btnGlottalFricative->setChecked(false);

    // Vowels
    ui->btnFrontClose->setChecked(false);
    ui->btnFrontClose2->setChecked(false);
    ui->btnFrontCloseMid->setChecked(false);
    ui->btnNearFrontNearClose->setChecked(false);
    ui->btnNearFrontNearClose2->setChecked(false);
    ui->btnNearFrontCloseMid->setChecked(false);
    ui->btnNearFrontOpenMid->setChecked(false);
    ui->btnNearFrontNearOpen->setChecked(false);
    ui->btnCentralClose->setChecked(false);
    ui->btnCentralClose2->setChecked(false);
    ui->btnCentralCloseMid->setChecked(false);
    ui->btnCentralMid->setChecked(false);
    ui->btnCentralOpenMid->setChecked(false);
    ui->btnCentralOpenMid2->setChecked(false);
    ui->btnCentralOpen->setChecked(false);
    ui->btnNearBackNearClose->setChecked(false);
    ui->btnNearBackCloseMid->setChecked(false);
    ui->btnNearBackOpenMid->setChecked(false);
    ui->btnNearBackNearOpen->setChecked(false);
    ui->btnNearBackOpen->setChecked(false);
    ui->btnBackClose->setChecked(false);
    ui->btnBackClose2->setChecked(false);
    ui->btnBackCloseMid->setChecked(false);
    ui->btnBackCloseMid2->setChecked(false);
    ui->btnBackOpenMid->setChecked(false);
    ui->btnBackOpenMid2->setChecked(false);
    ui->btnBackOpen->setChecked(false);
    ui->btnBackOpen2->setChecked(false);
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
void ChooseSounds::on_btnFrontClose2_toggled(bool checked)              { setVowSounds("y", checked); }
void ChooseSounds::on_btnFrontCloseMid_toggled(bool checked)            { setVowSounds("e", checked); }
void ChooseSounds::on_btnNearFrontNearClose_toggled(bool checked)       { setVowSounds("ɪ", checked); }
void ChooseSounds::on_btnNearFrontNearClose2_toggled(bool checked)      { setVowSounds("ʏ", checked); }
void ChooseSounds::on_btnNearFrontCloseMid_toggled(bool checked)        { setVowSounds("ø", checked); }
void ChooseSounds::on_btnNearFrontOpenMid_toggled(bool checked)         { setVowSounds("ɛ", checked); }
void ChooseSounds::on_btnNearFrontNearOpen_toggled(bool checked)        { setVowSounds("æ", checked); }
void ChooseSounds::on_btnCentralClose_toggled(bool checked)             { setVowSounds("ɨ", checked); }
void ChooseSounds::on_btnCentralClose2_toggled(bool checked)            { setVowSounds("ʉ", checked); }
void ChooseSounds::on_btnCentralCloseMid_toggled(bool checked)          { setVowSounds("ɘ", checked); }
void ChooseSounds::on_btnCentralMid_toggled(bool checked)               { setVowSounds("ə", checked); }
void ChooseSounds::on_btnCentralOpenMid_toggled(bool checked)           { setVowSounds("œ", checked); }
void ChooseSounds::on_btnCentralOpenMid2_toggled(bool checked)          { setVowSounds("ɜ", checked); }
void ChooseSounds::on_btnCentralOpen_toggled(bool checked)              { setVowSounds("a", checked); }
void ChooseSounds::on_btnNearBackNearClose_toggled(bool checked)        { setVowSounds("ʊ", checked); }
void ChooseSounds::on_btnNearBackCloseMid_toggled(bool checked)         { setVowSounds("ɵ", checked); }
void ChooseSounds::on_btnNearBackOpenMid_toggled(bool checked)          { setVowSounds("ɞ", checked); }
void ChooseSounds::on_btnNearBackNearOpen_toggled(bool checked)         { setVowSounds("ɐ", checked); }
void ChooseSounds::on_btnNearBackOpen_toggled(bool checked)             { setVowSounds("ä", checked); }
void ChooseSounds::on_btnBackClose_toggled(bool checked)                { setVowSounds("ɯ", checked); }
void ChooseSounds::on_btnBackClose2_toggled(bool checked)               { setVowSounds("u", checked); }
void ChooseSounds::on_btnBackCloseMid_toggled(bool checked)             { setVowSounds("ɤ", checked); }
void ChooseSounds::on_btnBackCloseMid2_toggled(bool checked)            { setVowSounds("o", checked); }
void ChooseSounds::on_btnBackOpenMid_toggled(bool checked)              { setVowSounds("ʌ", checked); }
void ChooseSounds::on_btnBackOpenMid2_toggled(bool checked)             { setVowSounds("ɔ", checked); }
void ChooseSounds::on_btnBackOpen_toggled(bool checked)                 { setVowSounds("ɑ", checked); }
void ChooseSounds::on_btnBackOpen2_toggled(bool checked)                { setVowSounds("ɒ", checked); }
