#ifndef CHOOSESTRUCTURE_H
#define CHOOSESTRUCTURE_H

#include <QDialog>
#include <QString>

namespace Ui {
class chooseStructure;
}

class chooseStructure : public QDialog
{
    Q_OBJECT

public:
    explicit chooseStructure(QWidget *parent = 0);
    ~chooseStructure();
    QString structure;

private slots:
    void on_btnLowerC_clicked();

    void on_btnUpperC_clicked();

    void on_btnLowerV_clicked();

    void on_btnUpperV_clicked();

private:
    Ui::chooseStructure *ui;
};

#endif // CHOOSESTRUCTURE_H
