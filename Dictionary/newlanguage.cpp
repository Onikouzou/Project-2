#include "newlanguage.h"
#include "ui_newlanguage.h"
#include "existinglanguage.h"
#include "loadlanguage.h"
#include <QString>

newlanguage::newlanguage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newlanguage)
{
    ui->setupUi(this);
}

newlanguage::~newlanguage()
{
    delete ui;
}

void newlanguage::on_btnClose_clicked()
{
    close();
}

void newlanguage::on_btnOkay_clicked()
{
    existing = new ExistingLanguage(this);
    QString name = ui->lnName->text();
    existing->show();

    close();
}
