#include <QString>
#include "Dictionary.h"

#ifndef LANGUAGE_H
#define LANGUAGE_H

class Language
{

private:
    QString name;
    QString structure;
    QString consonants, vowels;
    QString onsetClusters, codaClusters;
//	Dictionary dictionary;

public:
	Language();
    Language(QString name);

//	Dictionary getDictionary() { return dictionary; };
    QString getName() { return name; }
    QString getCons() { return consonants; }
    QString getVows() { return vowels; }
    QString getOnsetClusters() { return onsetClusters; }
    QString getCodaClusters() { return codaClusters; }
    QString getStructure(){ return structure; }

    void setName(QString n);
    void setCons(QString c);
    void setVows(QString v);
    void setOnsetClusters(QString c);
    void setCodaClusters(QString c);
    void setStructure(QString s);
};

#endif
