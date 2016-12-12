#include "choosestructure.h"
#include "ui_choosestructure.h"

chooseStructure::chooseStructure(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chooseStructure)
{
    ui->setupUi(this);
}

chooseStructure::~chooseStructure()
{
    delete ui;
}

void chooseStructure::on_btnLowerC_clicked()
{
    structure += "c";
    ui->labelStructure->setText(structure);
}

void chooseStructure::on_btnUpperC_clicked()
{
    structure += "C";
    ui->labelStructure->setText(structure);
}

void chooseStructure::on_btnLowerV_clicked()
{
    structure += "v";
    ui->labelStructure->setText(structure);
}

void chooseStructure::on_btnUpperV_clicked()
{
    structure += "V";
    ui->labelStructure->setText(structure);
}
