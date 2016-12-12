#include "Language.h"


// ---------
// Language
// ---------
// Default constructor for the Language object
Language::Language()
{
	name = "Unnamed";
	dictionary = Dictionary();
}

// ---------
// Language
// ---------
// Name constructor for the Language object
Language::Language(std::string n)
{
	name = n;
	dictionary = Dictionary();
}


// --------
// setName
// --------
// Sets or changes the name of the language
// -----------------------------------------
// const char* name		The new name
//
// Return bool			Returns true if successful
bool Language::setName(std::string n)
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
bool Language::setConsonants(std::string c)
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
bool Language::setVowels(std::string v)
{
	vowels = v;
	return true;
}


bool Language::setOnsetClusters(std::string c)
{
	std::string delimiter = "  ";
	// Split the line into the two parts
	// From stackOverflow
	size_t pos = 0;
	int i = 0;
	std::string temp = c;
	while ((pos = temp.find(delimiter)) != std::string::npos)
	{
		if (temp.substr(0, pos).length() > 2)
			return false;

		temp.erase(0, pos + delimiter.length());
		i++;
	} // End while

	onsetClusters = c;
	return true;
}


bool Language::setCodaClusters(std::string c)
{
	std::string delimiter = "  ";
	// Split the line into the two parts
	// From stackOverflow
	size_t pos = 0;
	int i = 0;
	std::string temp = c;
	while ((pos = temp.find(delimiter)) != std::string::npos)
	{
		if (temp.substr(0, pos).length() > 2)
			return false;

		temp.erase(0, pos + delimiter.length());
		i++;
	} // End while

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
bool Language::setStructure(std::string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
		case 'v':
		case 'V':
		case 'c':
		case 'C': { break; }
		default: { return false; }
		}
	}
	structure = s;
	return true;
}