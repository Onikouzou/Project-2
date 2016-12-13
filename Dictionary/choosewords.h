#ifndef CHOOSEWORDS_H
#define CHOOSEWORDS_H

#include <QDialog>
#include "WordGenerator.cpp"

namespace Ui {
class chooseWords;
}

class chooseWords : public QDialog
{
    Q_OBJECT

public:
    explicit chooseWords(QWidget *parent = 0);
    ~chooseWords();

private:
    Ui::chooseWords *ui;
    Language lang;
};

#endif // CHOOSEWORDS_H
