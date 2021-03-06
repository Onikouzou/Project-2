#include <QObject>
#include <QString>

#ifndef SIGNALSLOTS_H
#define SIGNALSLOTS_H

class signalslots : public QObject
{
    Q_OBJECT

public:
    signalslots() { m_Name = ""; m_Cons = ""; m_Vows = ""; }

    QString getName() const { return m_Name; }
    QString getCons() const { return m_Cons; }
    QString getVows() const { return m_Vows; }
    QString getStructure() const { return m_Structure; }

public slots:
    void setName(QString n);
    void setCons(QString c);
    void setVows(QString v);
    void setStructure(QString s);

signals:
    void nameChanged(QString newName);
    void consChanged(QString newCons);
    void vowsChanged(QString newVows);
    void structureChanged(QString newStructure);

private:
    QString m_Name;
    QString m_Cons;
    QString m_Vows;
    QString m_Structure;
};

#endif // SIGNALSLOTS_H
