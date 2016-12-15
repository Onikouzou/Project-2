// Dictionary.cpp
// Authors: Vince Cefalu & Matt Neis

#include <cstdlib>
#include <string>
#include <locale>

#include "Dictionary.h"


// -----------
// Dictionary
// -----------
// Constructor for the Dictionary object
Dictionary::Dictionary()
{
	for (int i = 0; i < TABLE_SIZE; i++)
	{
		// Initialization
		jisho[i] = new entry;
		jisho[i]->word = "0";
		jisho[i]->definition = new definition;
		jisho[i]->definition->type = wordType::UNKNOWN;
		jisho[i]->definition->def = "n/a";
		jisho[i]->definition->next = NULL;
		jisho[i]->next = NULL;
	} // End for

	entries = 0;
} // End constructor


  // ------------
  // toLowercase
  // ------------
  // Changes a word to all lowercase letters
  // Ignores characters that have no lowercase,
  // or characters that are not from the Roman Alphabet
  // ---------------------------------------------------
  // string word		The string
  // 
  // return string	Returns the string in all lowercase letters
void Dictionary::toLowercase(std::string &word)
{
	std::locale loc;
	for (int i = 0; i < word.length(); i++)
	{
		word[i] = tolower(word[i], loc);
	}
}


// -----
// hash
// -----
// Calculates the hash value used to find the index
// of the word
// ------------
// string word			The word
// wordType type		The type
//
// Return unsigned int	Returns the index value where the
//						word will be stored
uint Dictionary::hash(std::string &word)
{
	uint hash = 0; // The hash value for the word
	uint sum = 0;
	uint index; // Where the word is stored in the array

				// Make the word lowercase
	toLowercase(word);

	// This time we will calculate the hash based on 'folding'
	// the string 3 bytes at a time
	// Courtesy of research.cs.vt.edu/AVresearch/hashing/strings.php
	uint multiplier = 1;

	for (int i = 0; i < word.length(); i++)
	{
		sum += static_cast<uint>(word[i]) * multiplier;
		multiplier *= 256;
		if (i % 3 == 0 && i != 0)
		{
			hash += sum;
			sum = 0;
			multiplier = 1;
		}
	}
	if (sum != 0)
		hash += sum;

	// Calculate the index using modulo operation
	index = static_cast<uint>(hash % TABLE_SIZE);

	return index;
} // End hash


  // ---------
  // addEntry
  // ---------
  // Adds an entry to the dictionary, word only
  // The definition and type are left at default
  // --------------------------------------------
  // string word			The word
  //
  // return bool			Returns true if the word was successfully
  //						added
bool Dictionary::addEntry(std::string &word)
{
	uint index = hash(word);

	if (jisho[index]->word == "0") // If there is no entry
	{
		jisho[index]->word = new char[word.length() + 1];
		jisho[index]->word = word.c_str();
		jisho[index]->definition->type = wordType::UNKNOWN;
		jisho[index]->definition->def = "n/a";
	} // End if
	else if (jisho[index]->word.compare(word) == 0) // If the word already exists
	{
		// Entry add failed
		return false;
	}
	else
	{
		entry* ptr = jisho[index];

		// Move through the linked list until there is an empty spot
		while (ptr->next != NULL)
		{
			// Again, if the words are the same, fail the add operation
			if (ptr->word.compare(word) == 0)
			{
				return false;
			}
			ptr = ptr->next;
		} // End while

		  // Found a spot, so create the new entry
		entry* n = new entry;
		n->definition = new Dictionary::definition;

		n->word = new char[word.length() + 1];
		jisho[index]->word = word.c_str();
		n->definition->type = wordType::UNKNOWN;
		n->definition->def = "n/a";
		n->next = NULL;

		ptr->next = n;
	} // End else

	entries++;
	return true;
} // End addItem


  // ---------
  // addEntry
  // ---------
  // Adds an entry to the dictionary, with word,
  // definition and type
  // --------------------
  // string word			The word
  // wordType type		The type of word
  // string definition	The definition of the word
  //
  // return bool			Returns true if the word was successfully
  //						added
bool Dictionary::addEntry(std::string &word, wordType type, std::string definition)
{
	uint index = hash(word);

	if (jisho[index]->word == "0")
	{
		jisho[index]->word = new char[word.length() + 1];
		jisho[index]->word = word.c_str();
		jisho[index]->definition->type = type;
		jisho[index]->definition->def = definition;
	} // End if
	else if (jisho[index]->word.compare(word) == 0) // If the words are exactly the same
	{
		// Entry add failed
		return false;
	}
	else
	{
		entry* ptr = jisho[index];

		// Move through the linked list until there is an empty spot
		while (ptr->next != NULL)
		{
			// Again, if the words are the same, fail the add operation
			if (ptr->word.compare(word) == 0)
			{
				return false;
			}
			ptr = ptr->next;
		} // End while

		  // Found a spot, so create the new entry
		entry* n = new entry;
		n->definition = new Dictionary::definition;

		n->word = new char[word.length() + 1];
		jisho[index]->word = word.c_str();
		n->definition->type = type;
		n->definition->def = definition;
		n->next = NULL;

		ptr->next = n;
	} // End else

	entries++;
	return true;
} // End addItem


  // --------------
  // addDefinition
  // --------------
  // Adds a definition to an existing entry
  // Cannot possibly check to duplicate definitions
  // because subtle changes in wording, punctuation, etc.
  // can be present. Therefore it will just add to the
  // end of the list of definitions
  // -------------------------------
  // string word		The word
  // wordType type	The word's type
  // string def		The word's definition
  //
  // return bool		Returns true if the add operation succeeded
  bool Dictionary::addDefinition(std::string &word, wordType type, std::string def)
  {
  	uint index = hash(word);
  
  	// Attempt to find the specified word
  	entry* ptr = jisho[index];
  	bool notFound = true;
  	bool first = true;
  	while (notFound)
  	{
  		if (ptr->word.compare(word) == 0)
  			notFound = false;
  		else if (ptr->next != NULL)
  			ptr = ptr->next;
  		else
  			break;
  	}
  
  	// If the word entry doesn't exist, fail the operation
  	if (notFound)
  		return false;
  
  	// Find the last definition
  	definition* defptr = ptr->definition;
  	while (defptr->next != NULL)
  	{
  		defptr = defptr->next;
  		first = false;
  	}
  
  	// Now add the new definition
  	if (first)
  	{
  		defptr->type = type;
  		defptr->def = def;
  	}
  	else
  	{
  		defptr->next = new Dictionary::definition;
  		defptr = defptr->next;
  		defptr->type = type;
  		defptr->def = def;
  	}
  
  	return true;
  
  } // End addDefinition


  // -----------------
  // changeDefinition
  // -----------------
  // Changes the selected definition of the selected word
  // -----------------------------------------------------
  // string word		The word
  // string def		The new definition
  // wordType type	The type associated with the definition
  // int index		The index of the definition (0-inf)
  //
  // return bool		Returns true if it succeeds in changing the definition
  bool Dictionary::changeDefinition(std::string &word, wordType type, std::string def, int defIndex)
  {
  	uint index = hash(word);
  
  	// Make sure the index is not negative
  	if (defIndex < 0)
  		return false;
  
  	// Attempt to find the specified word
  	entry* ptr = jisho[index];
  	bool notFound = true;
  	while (notFound)
  	{
  		if (ptr->word.compare(word) == 0)
  			notFound = false;
  		else if (ptr->next != NULL)
  			ptr = ptr->next;
  		else
  			break;
  	}
  
  	// If the word entry doesn't exist, fail the operation
  	if (notFound)
  		return false;
  
  	// Attempt to find the specified definition entry
  	definition* defptr = ptr->definition;
  	for (int i = 0; i < defIndex; i++)
  	{
  		if (defptr->next != NULL)
  			defptr = defptr->next;
  		else
  			return false; // No definition at the specified index
  	}
  
  	// Found it, now change the definition
  	defptr->def = def;
  	defptr->type = type;
  
  	return true;
  } // End changeDefinition


  // --------
  // getType
  // --------
  // Gets the type of the specified word
  // Might be useful for sorting purposes later on, but
  // currently only grabs the first definition's type
  // -------------------------------------------------
  // string word			The word
  //
  // return wordType		Returns the word's type as the wordType enum
  wordType Dictionary::getType(std::string &word)
  {
  	uint index = hash(word);
  
  	// Find the specific word if there are multiple at
  	// this index
  	entry* ptr = jisho[index];
  	while (ptr->next != NULL)
  	{
  		if (ptr->word.compare(word) == 0)
  			return ptr->definition->type;
  		else
  			ptr = ptr->next;
  	} // End while
  
  	  // If the entry was the last in the linked list,
  	  // then the loop skips it
  	if (ptr->word.compare(word) == 0)
  	{
  		return ptr->definition->type;
  	}
  
  	// If we fail, then return the unkown type
  	return wordType::UNKNOWN;
  } // End getType


  // --------------
  // getDefinition
  // --------------
  // Finds a specific word's definition
  // Again, only goes for the first definition currently
  // ----------------------------------------------------
  // string word				The word
  //
  // return string		Returns the definition as a string
  std::string Dictionary::getDefinition(std::string &word)
  {
  	uint index = hash(word);
  
  	// Find the specific word if there are multiple at
  	// this index
  	entry* ptr = jisho[index];
  	while (ptr->next != NULL)
  	{
  		if (ptr->word.compare(word) == 0)
  		{
  			return ptr->definition->def;
  		}
  		else
  			ptr = ptr->next;
  	} // End while
  
  	// If the entry was the last in the linked list,
  	// then the previous loop skips it, so we need to
  	// get it here
  	if (ptr->word.compare(word) == 0)
  	{
  		return ptr->definition->def;
  	}
  
  	// If for some reason we fail, then return
  	// a failure string
  	return "FAILED";
  } // End getDefinition


  // --------
  // getSize
  // --------
  // Gets the size of the dictionary ( how many entries it has)
  // -----------------------------------------------------------
  // return unsigned int		Returns an unsigned integer representing
  //							the total amount of entries
uint Dictionary::getSize()
{
	return entries;
} // End getSize


  // ----------------
  // printDictionary
  // ----------------
  // Prints the dictionary to a text file that is formatted
  // so that it can be reused and rewritten whenever
  // the program is run
  // -------------------
  // return string		The dictionary as a string (will be huge so change this later)
  std::string Dictionary::printDictionary()
  {
  	entry* entry;
  	std::string type;
  	std::string def;
  	std::string out = "";
  
  	for (int i = 0; i < TABLE_SIZE; i++)
  	{
  		entry = jisho[i];
  
  		while (entry->word != "0")
  		{
  			switch (entry->definition->type)
  			{
  			case wordType::NOUN:
  			{
  				type = "n";
  				break;
  			}
  			case wordType::VERB:
  			{
  				type = "v";
  				break;
  			}
  			case wordType::ADJECTIVE:
  			{
  				type = "adj";
  				break;
  			}
  			case wordType::ADVERB:
  			{
  				type = "adv";
  				break;
  			}
  			case wordType::PRONOUN:
  			{
  				type = "pro";
  				break;
  			}
  			case wordType::PREPOSITION:
  			{
  				type = "prep";
  				break;
  			}
  			case wordType::CONJUNCTION:
  			{
  				type = "c";
  				break;
  			}
  			case wordType::DETERMINER:
  			{
  				type = "d";
  				break;
  			}
  			case wordType::EXCLAMATION:
  			{
  				type = "e";
  				break;
  			}
  			case wordType::PREFIX:
  			{
  				type = "pref";
  				break;
  			}
  			case wordType::SUFFIX:
  			{
  				type = "s";
  				break;
  			}
  			case wordType::ABBREVIATION:
  			{
  				type = "abbr";
  				break;
  			}
  			default:
  			{
  				type = "UNKNOWN";
  			}
  			} // End switch
  
  			def = entry->definition->def;
  			out += entry->word + "  " + type + "  " + def + "\n";
  
  			if (entry->next != NULL)
  				entry = entry->next;
  			else
  				break;
  		} // End while
  
  	} // End for
  
  	return out;
  }
