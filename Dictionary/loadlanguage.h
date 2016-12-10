#ifndef LOADLANGUAGE_H
#define LOADLANGUAGE_H

#include <QMainWindow>
#include "existinglanguage.h"
#include <QListWidget>

namespace Ui {
class loadlanguage;
}

class loadlanguage : public QMainWindow
{
    Q_OBJECT

public:
    explicit loadlanguage(QWidget *parent = 0);
    QListWidget listLoad;
    ~loadlanguage();

private slots:
    void on_btnClose_clicked();

    void on_btnLoad_clicked();

private:
    Ui::loadlanguage *ui;
    ExistingLanguage *existing;
};

#endif // LOADLANGUAGE_H
