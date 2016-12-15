#ifndef CHOOSESOUNDS_H
#define CHOOSESOUNDS_H

#include <QMainWindow>
#include <QStringList>
#include <QString>
#include <QObject>
#include "signalslots.h"

namespace Ui {
class ChooseSounds;
}

class ChooseSounds : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChooseSounds(QWidget *parent = 0);
    ~ChooseSounds();
    QString consSounds;
    QString vowSounds;
    signalslots signalslot;

private slots:
    // Consonants
    void on_btnSubmit_clicked();
    void on_btnP_toggled(bool checked);
    void on_btnBilabialFricative_toggled(bool checked);
    void on_btnB_toggled(bool checked);
    void on_btnM_toggled(bool checked);
    void on_btnBilabialTrill_toggled(bool checked);
    void on_btnBeta_toggled(bool checked);
    void on_btnF_toggled(bool checked);
    void on_btnLabiodentalNasal_toggled(bool checked);
    void on_btnV_toggled(bool checked);
    void on_btnLabiodentaApprox_toggled(bool checked);
    void on_btnTheta_toggled(bool checked);
    void on_btnVoicedDentalFricative_toggled(bool checked);
    void on_btnT_toggled(bool checked);
    void on_btnS_toggled(bool checked);
    void on_btnAlveolarLatFric_toggled(bool checked);
    void on_btnD_toggled(bool checked);
    void on_btnN_toggled(bool checked);
    void on_btnR_toggled(bool checked);
    void on_btnAlveolarTapFlap_toggled(bool checked);
    void on_btnReset_clicked();
    void on_btnZ_toggled(bool checked);
    void on_btnDentalAlveolarFricative_toggled(bool checked);
    void on_btnAlveolarPostApprox_toggled(bool checked);
    void on_btnL_toggled(bool checked);
    void on_btnEsh_toggled(bool checked);
    void on_btnEzh_toggled(bool checked);
    void on_btnRetroflexStop_toggled(bool checked);
    void on_btnRetroflexStop_2_toggled(bool checked);
    void on_btnRetroflexSibilant_toggled(bool checked);
    void on_btnRetroflexNasal_toggled(bool checked);
    void on_btnRetroflexFlap_toggled(bool checked);
    void on_btnVoicedRetroflexSibilant_toggled(bool checked);
    void on_btnRetroflexApproximant_toggled(bool checked);
    void on_btnRetroflexLateralApprox_toggled(bool checked);
    void on_btnC_toggled(bool checked);
    void on_btnPalatalFricative_toggled(bool checked);
    void on_btnPalatalStop_toggled(bool checked);
    void on_btnPalatalNasal_toggled(bool checked);
    void on_btnPalatalFricative_2_toggled(bool checked);
    void on_btnJ_toggled(bool checked);
    void on_btnPalatalLateralApproximant_toggled(bool checked);
    void on_btnK_toggled(bool checked);
    void on_btnX_toggled(bool checked);
    void on_btnG_toggled(bool checked);
    void on_btnVelarNasal_toggled(bool checked);
    void on_btnVoicedVelarFricative_toggled(bool checked);
    void on_btnVoicedVelarApproximant_toggled(bool checked);
    void on_btnVelarLateralApproximant_toggled(bool checked);
    void on_btnQ_toggled(bool checked);
    void on_btnX2_toggled(bool checked);
    void on_btnVoicedUvularStop_toggled(bool checked);
    void on_btnUvularNasal_toggled(bool checked);
    void on_btnUvularTrill_toggled(bool checked);
    void on_btnUvularFricative_toggled(bool checked);
    void on_btnPharyngealFricative_toggled(bool checked);
    void on_btnPharyngealFricative_2_toggled(bool checked);
    void on_btnGlottalStop_toggled(bool checked);
    void on_btnH_toggled(bool checked);
    void on_btnGlottalFricative_toggled(bool checked);

    // Vowels
    void on_btnFrontClose_toggled(bool checked);
    void on_btnFrontClose2_toggled(bool checked);
    void on_btnFrontCloseMid_toggled(bool checked);
    void on_btnNearFrontNearClose_toggled(bool checked);
    void on_btnNearFrontNearClose2_toggled(bool checked);
    void on_btnNearFrontCloseMid_toggled(bool checked);
    void on_btnNearFrontOpenMid_toggled(bool checked);
    void on_btnNearFrontNearOpen_toggled(bool checked);
    void on_btnCentralClose_toggled(bool checked);
    void on_btnCentralClose2_toggled(bool checked);
    void on_btnCentralCloseMid_toggled(bool checked);
    void on_btnCentralMid_toggled(bool checked);
    void on_btnCentralOpenMid_toggled(bool checked);
    void on_btnCentralOpenMid2_toggled(bool checked);
    void on_btnCentralOpen_toggled(bool checked);
    void on_btnNearBackNearClose_toggled(bool checked);
    void on_btnNearBackCloseMid_toggled(bool checked);
    void on_btnNearBackOpenMid_toggled(bool checked);
    void on_btnNearBackNearOpen_toggled(bool checked);
    void on_btnNearBackOpen_toggled(bool checked);
    void on_btnBackClose_toggled(bool checked);
    void on_btnBackClose2_toggled(bool checked);
    void on_btnBackCloseMid_toggled(bool checked);
    void on_btnBackCloseMid2_toggled(bool checked);
    void on_btnBackOpenMid_toggled(bool checked);
    void on_btnBackOpenMid2_toggled(bool checked);
    void on_btnBackOpen_toggled(bool checked);
    void on_btnBackOpen2_toggled(bool checked);

private:
    Ui::ChooseSounds *ui;
    void setConsSounds(QString character, bool checked);
    void setVowSounds(QString character, bool checked);
    const QString masterConsList = "p b m ʙ ɸ β ɱ f v ʋ θ ð t d n r ɾ s z ɬ ɮ ɹ l ʃ ʒ ʈ ɖ ɳ ɽ ʂ ʐ ɻ ɭ c ɟ ɲ ç ʝ j ʎ k g ŋ x ɣ ɰ ʟ q ɢ ɴ ʀ χ ʁ ħ ʕ ʔ h ɦ ";
    const QString masterVowList = "i y e ɪ ʏ ø ɛ æ ɨ ʉ ɘ ə œ ɜ a ʊ ɵ ɞ ɐ ä ɯ u ɤ o ʌ ɔ ɑ ɒ ";
};

#endif // CHOOSESOUNDS_H
