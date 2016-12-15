#ifndef CHOOSEWORDS_H
#define CHOOSEWORDS_H

#include <QDialog>
#include "WordGenerator.cpp"
#include "signalslots.h"

namespace Ui {
class chooseWords;
}

class chooseWords : public QDialog
{
    Q_OBJECT

public:
    explicit chooseWords(QWidget *parent = 0, signalslots *s = 0);
    ~chooseWords();
    signalslots signalslot;

private:
    Ui::chooseWords *ui;
};

#endif // CHOOSEWORDS_H
