#ifndef EXISTINGLANGUAGE_H
#define EXISTINGLANGUAGE_H

#include <QMainWindow>
#include <QInputDialog>
#include <QCheckBox>
#include <customdialog.h>
#include "Language.h"
#include "choosesounds.h"

namespace Ui {
class ExistingLanguage;
}

class ExistingLanguage : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExistingLanguage(QWidget *parent = 0);
//    ExistingLanguage(QWidget *parent = 0, std::string name);
    ~ExistingLanguage();

private slots:
    void on_btnChooseSounds_clicked();

    void on_btnChooseStructure_clicked();

    void on_btnChooseWords_clicked();

    void on_btnSearchDictionary_clicked();

    void on_btnReturn_clicked();

private:
    Ui::ExistingLanguage *ui;
//    Language lang;
    ChooseSounds *sounds;

};

#endif // EXISTINGLANGUAGE_H
