#include "ui_loadlanguage.h"
#include "loadlanguage.h"
#include "existinglanguage.h"
#include <QListWidget>

loadlanguage::loadlanguage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loadlanguage)
{
    ui->setupUi(this);
}

loadlanguage::~loadlanguage()
{
    delete ui;
}

void loadlanguage::on_btnClose_clicked()
{
    close();
}

void loadlanguage::on_btnLoad_clicked()
{
    existing = new ExistingLanguage(this);
    existing->show();

    close();
}
