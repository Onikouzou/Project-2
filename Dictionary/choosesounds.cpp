#include "choosesounds.h"
#include "ui_choosesounds.h"
#include <QInputDialog>
#include <QListWidget>

ChooseSounds::ChooseSounds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChooseSounds)
{
    ui->setupUi(this);
    sounds = "";
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
}

void ChooseSounds::on_btnP_toggled(bool checked)
{
    if (checked = true)
    //    ui->listConsonants->addItem("p");
        sounds += "p ";
        ui->lblCons->setText(sounds);

}

void ChooseSounds::on_btnBilabialFricative_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɸ");
}

void ChooseSounds::on_btnB_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("b");
}

void ChooseSounds::on_btnM_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("m");
}

void ChooseSounds::on_btnBilabialTrill_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʙ");
}

void ChooseSounds::on_btnBeta_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("β");
}

void ChooseSounds::on_btnF_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("f");
}

void ChooseSounds::on_btnLabiodentalNasal_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɱ");
}

void ChooseSounds::on_btnV_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("v");
}

void ChooseSounds::on_btnLabiodentaApprox_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʋ");
}

void ChooseSounds::on_btnTheta_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("θ");
}

void ChooseSounds::on_btnVoicedDentalFricative_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ð");
}

void ChooseSounds::on_btnT_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("t");
}

void ChooseSounds::on_btnS_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("s");
}

void ChooseSounds::on_btnAlveolarLatFric_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɬ");
}

void ChooseSounds::on_btnD_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("d");
}

void ChooseSounds::on_btnN_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("n");
}

void ChooseSounds::on_btnR_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("r");
}

void ChooseSounds::on_btnAlveolarTapFlap_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɾ");
}

void ChooseSounds::on_btnZ_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("z");
}

void ChooseSounds::on_btnDentalAlveolarFricative_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɮ");
}

void ChooseSounds::on_btnAlveolarPostApprox_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɹ");
}

void ChooseSounds::on_btnL_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("l");
}

void ChooseSounds::on_btnEsh_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʃ");
}

void ChooseSounds::on_btnEzh_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʒ");
}

void ChooseSounds::on_btnRetroflexStop_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʈ");
}

void ChooseSounds::on_btnRetroflexStop_2_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɖ");
}

void ChooseSounds::on_btnRetroflexSibilant_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʂ");
}

void ChooseSounds::on_btnRetroflexNasal_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɳ");
}

void ChooseSounds::on_btnRetroflexFlap_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɽ");
}

void ChooseSounds::on_btnVoicedRetroflexSibilant_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʐ");
}

void ChooseSounds::on_btnRetroflexApproximant_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɻ");
}

void ChooseSounds::on_btnRetroflexLateralApproximant_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɭ");
}

void ChooseSounds::on_btnC_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("c");
}

void ChooseSounds::on_btnPalatalFricative_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ç");
}

void ChooseSounds::on_btnPalatalStop_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɟ");
}

void ChooseSounds::on_btnPalatalNasal_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɲ");
}

void ChooseSounds::on_btnPalatalFricative_2_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʝ");
}

void ChooseSounds::on_btnJ_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("j");
}

void ChooseSounds::on_btnPalatalLateralApproximant_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʎ");
}

void ChooseSounds::on_btnK_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("k");
}

void ChooseSounds::on_btnX_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("x");
}

void ChooseSounds::on_btnG_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("g");
}

void ChooseSounds::on_btnVelarNasal_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ŋ");
}

void ChooseSounds::on_btnVoicedVelarFricative_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɣ");
}

void ChooseSounds::on_btnVoicedVelarApproximant_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɰ");
}

void ChooseSounds::on_btnVelarLateralApproximant_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʟ");
}

void ChooseSounds::on_btnQ_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("q");
}

void ChooseSounds::on_btnX2_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("x");
}

void ChooseSounds::on_btnVoicedUvularStop_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɢ");
}

void ChooseSounds::on_btnUvularNasal_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɢ");
}

void ChooseSounds::on_btnUvularTrill_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʀ");
}

void ChooseSounds::on_btnUvularFricative_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʁ");
}

void ChooseSounds::on_btnPharyngealFricative_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ħ");
}

void ChooseSounds::on_btnPharyngealFricative_2_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʕ");
}

void ChooseSounds::on_btnGlottalStop_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ʔ");
}

void ChooseSounds::on_btnH_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("h");
}

void ChooseSounds::on_btnGlottalFricative_toggled(bool checked)
{
    if (checked = true)
        ui->listConsonants->addItem("ɦ");
}
