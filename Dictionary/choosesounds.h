#ifndef CHOOSESOUNDS_H
#define CHOOSESOUNDS_H

#include <QMainWindow>
#include <QStringList>
#include <QString>

namespace Ui {
class ChooseSounds;
}

class ChooseSounds : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChooseSounds(QWidget *parent = 0);
    ~ChooseSounds();
    QString sounds;

private slots:
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
    void on_btnRetroflexLateralApproximant_toggled(bool checked);
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

private:
    Ui::ChooseSounds *ui;
};

#endif // CHOOSESOUNDS_H
