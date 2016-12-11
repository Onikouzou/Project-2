#include "Language.h"


// ---------
// Language
// ---------
// Name constructor for the Language object
// There is not a no-argument constructor because
// every language needs to be referenced by name in
// the GUI, even if it's simply "Language01"
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


// ----------
// setSounds
// ----------
// Sets the list of permitted sounds in the language
// Sounds are delimeted by a ' ' character
// ----------------------------------------
// const char* sounds	The permitted sounds
//
// Return bool			Returns true if successful
bool Language::setSounds(std::string s)
{
	sounds = s;
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
	structure = s;
	return true;
}