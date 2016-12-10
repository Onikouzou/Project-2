#ifndef EXISTINGLANGUAGE_H
#define EXISTINGLANGUAGE_H

#include <QMainWindow>
#include <QInputDialog>
#include <QCheckBox>
#include <customdialog.h>

namespace Ui {
class ExistingLanguage;
}

class ExistingLanguage : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExistingLanguage(QWidget *parent = 0);
    ~ExistingLanguage();

private slots:
    void on_btnChooseSounds_clicked();

    void on_btnChooseStructure_clicked();

    void on_btnChooseWords_clicked();

    void on_btnSearchDictionary_clicked();

    void on_btnReturn_clicked();

private:
    Ui::ExistingLanguage *ui;
    CustomDialog *sounds;
};

#endif // EXISTINGLANGUAGE_H
