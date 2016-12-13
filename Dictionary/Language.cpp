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


// --------
// setName
// --------
// Sets or changes the name of the language
// -----------------------------------------
// const char* name		The new name
//
// Return bool			Returns true if successful
bool Language::setName(QString n)
{
	name = n;
	return true;
}


// --------------
// setConsonants
// --------------
// Sets the list of permitted consonants in the language
// Sounds are delimeted by a ' ' character
// ----------------------------------------
// const char* sounds	The permitted sounds
//
// Return bool			Returns true if successful
bool Language::setConsonants(QString c)
{
	consonants = c;
	return true;
}


// ----------
// setVowels
// ----------
// Sets the list of permitted vowels in the language
// Sounds are delimeted by a ' ' character
// ----------------------------------------
// const char* sounds	The permitted sounds
//
// Return bool			Returns true if successful
bool Language::setVowels(QString v)
{
	vowels = v;
	return true;
}


bool Language::setOnsetClusters(QString c)
{
//	QString delimiter = "  ";
	// Split the line into the two parts
	// From stackOverflow
//	size_t pos = 0;
//	int i = 0;
//  QString temp = c;
//    while ((pos = temp.indexOf(delimiter)) != NULL)
//	{
//		if (temp.substr(0, pos).length() > 2)
//			return false;

//        temp.remove(0, pos + delimiter.length());
//		i++;
//	} // End while

	onsetClusters = c;
	return true;
}


bool Language::setCodaClusters(QString c)
{
//  QString delimiter = "  ";
	// Split the line into the two parts
	// From stackOverflow
//	size_t pos = 0;
//	int i = 0;
//  QString temp = c;
//    while ((pos = temp.find(delimiter)) != QString::npos)
//	{
//		if (temp.substr(0, pos).length() > 2)
//			return false;

//        temp.remove(0, pos + delimiter.length());
//		i++;
//	} // End while

	codaClusters = c;
	return true;
}


// -------------
// setStructure
// -------------
// Sets the permitted syllabic structure of the language
// ------------------------------------------------------
// const char* structure	The permitted syllabic structure
//
// Return bool				Returns true if successful
bool Language::setStructure(QString s)
{
	for (int i = 0; i < s.length(); i++)
	{
        if (s.mid(i, 1) != "v" && s.mid(i, 1) != "V" && s.mid(i, 1) != "c" && s.mid(i, 1) != "C")
            return false;
	}
	structure = s;
	return true;
}
