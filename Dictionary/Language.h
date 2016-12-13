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
	Dictionary dictionary;

public:
	Language();
    Language(QString name);

	Dictionary getDictionary() { return dictionary; };
    QString getName() { return name; };
    QString getConsonants() { return consonants; };
    QString getVowels() { return vowels; };
    QString getOnsetClusters() { return onsetClusters; };
    QString getCodaClusters() { return codaClusters; };
    QString getStructure(){ return structure; };

    bool setName(QString n);
    bool setConsonants(QString c);
    bool setVowels(QString v);
    bool setOnsetClusters(QString c);
    bool setCodaClusters(QString c);
    bool setStructure(QString s);
};

#endif
