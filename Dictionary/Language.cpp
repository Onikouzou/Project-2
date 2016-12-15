#include "Language.h"


// ---------
// Language
// ---------
// Default constructor for the Language object
Language::Language()
{
	name = "Unnamed";
    structure = "";
    consonants = "";
    vowels = "";
    onsetClusters = "";
    codaClusters = "";
//	dictionary = Dictionary();
}

// ---------
// Language
// ---------
// Name constructor for the Language object
Language::Language(QString n)
{
	name = n;
    structure = "";
    consonants = "";
    vowels = "";
    onsetClusters = "";
    codaClusters = "";
//	dictionary = Dictionary();
}


void Language::setName(QString n)
{
    name = n;
}


void Language::setCons(QString c)
{
    consonants = c;
}


void Language::setVows(QString v)
{
    vowels = v;
}


void Language::setOnsetClusters(QString c)
{
    onsetClusters = c;
}


void Language::setCodaClusters(QString c)
{
    codaClusters = c;
}


void Language::setStructure(QString s)
{
    bool okay = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.mid(i, 1) != "v" && s.mid(i, 1) != "V" && s.mid(i, 1) != "c" && s.mid(i, 1) != "C")
            okay = false;
    }

    if (okay)
        structure = s;
}
