#ifndef CHOOSESOUNDS_H
#define CHOOSESOUNDS_H

#include <QMainWindow>

namespace Ui {
class ChooseSounds;
}

class ChooseSounds : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChooseSounds(QWidget *parent = 0);
    ~ChooseSounds();

private slots:
    void on_btnAddWord_clicked();

private:
    Ui::ChooseSounds *ui;
};

#endif // CHOOSESOUNDS_H
