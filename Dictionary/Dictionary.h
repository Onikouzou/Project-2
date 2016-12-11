// Dictionary.h
// Authors: Vince Cefalu & Matt Neis

#include <cstdlib>
#include <iostream>
#include <string>
#include <locale>	// Used in lowercase function

#ifndef DICTIONARY_H
#define DICTIONARY_H
#define ENUM

// The types that words can have along with an UNKNOWN identifier when
// attempting to find the type and you are unsuccessful
enum class wordType {
	NOUN = 1, VERB, ADJECTIVE, ADVERB, PRONOUN, PREPOSITION,
	CONJUNCTION, DETERMINER, EXCLAMATION, PREFIX, SUFFIX, ABBREVIATION, UNKNOWN
};

typedef unsigned int uint;
class Dictionary
{

private:
	static const int TABLE_SIZE = 100000; // The size of the array. Affects hash calculation when changed
	uint entries; // Counter for the total amount of entries added

	// Structure that represents individual definitions
	struct definition
	{
		wordType type;			// The type of the word for this definition
		std::string def;		// The definition of the word
		definition* next;		// The pointer to the next definition if it exists
	};

	// The item structure that represents a dictionary entry
	struct entry
	{
		std::string word;			// The word stored in English (for the moment)
		definition* definition;		// The definitions of the word
		entry* next;				// Linked list pointer, connects list items to one another)
	};

	entry* jisho[TABLE_SIZE];	// Array of pointers to entry (the dictionary array itself)

	void toLowercase(std::string &word);

public:
	Dictionary();
	uint hash(std::string &word);
	bool addEntry(std::string &word);
	bool addEntry(std::string &word, wordType type, std::string definition);
	bool addDefinition(std::string &word, wordType type, std::string def);
	bool changeDefinition(std::string &word, wordType type, std::string def, int defIndex);
	wordType getType(std::string &word);
	std::string getDefinition(std::string &word);
	uint getSize();
	std::string printDictionary();
};

#endif