#ifndef NEWLANGUAGE_H
#define NEWLANGUAGE_H

#include <QMainWindow>
#include "existinglanguage.h"
#include "loadlanguage.h"
#include <QString>

namespace Ui {
class newlanguage;
}

class newlanguage : public QMainWindow
{
    Q_OBJECT

public:
    explicit newlanguage(QWidget *parent = 0);
    QString name;
    ~newlanguage();

private slots:
    void on_btnClose_clicked();

    void on_btnOkay_clicked();

private:
    Ui::newlanguage *ui;
    ExistingLanguage *existing;
};

#endif // NEWLANGUAGE_H
