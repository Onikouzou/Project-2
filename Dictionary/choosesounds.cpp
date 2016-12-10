#include "choosesounds.h"
#include "ui_choosesounds.h"

ChooseSounds::ChooseSounds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChooseSounds)
{
    ui->setupUi(this);
}

ChooseSounds::~ChooseSounds()
{
    delete ui;
}

void ChooseSounds::on_btnAddWord_clicked()
{

}
