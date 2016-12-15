#include "signalslots.h"

void signalslots::setName(QString n)
{
    if (m_Name != n)
    {
        m_Name = n;
        emit nameChanged(n);
    }
}

void signalslots::setCons(QString c)
{
    if (m_Cons != c)
    {
        m_Cons = c;
        emit consChanged(c);
    }
}

void signalslots::setVows(QString v)
{
    if (m_Vows != v)
    {
        m_Vows = v;
        emit vowsChanged(v);
    }
}

void signalslots::setStructure(QString s)
{
    if (m_Structure != s)
    {
        m_Structure = s;
        emit structureChanged(s);
    }
}
