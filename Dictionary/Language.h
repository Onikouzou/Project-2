#include <string>
#include "Dictionary.h"

#ifndef LANGUAGE_H
#define LANGUAGE_H

class Language
{
private:
	std::string name;
	std::string structure;
	std::string consonants, vowels;
	std::string onsetClusters, codaClusters;
	Dictionary dictionary;

public:
	Language();
	Language(std::string name);

	Dictionary getDictionary() { return dictionary; };
	std::string getName() { return name; };
	std::string getConsonants() { return consonants; };
	std::string getVowels() { return vowels; };
	std::string getOnsetClusters() { return onsetClusters; };
	std::string getCodaClusters() { return codaClusters; };
	std::string getStructure(){ return structure; };

	bool setName(std::string n);
	bool setConsonants(std::string c);
	bool setVowels(std::string v);
	bool setOnsetClusters(std::string c);
	bool setCodaClusters(std::string c);
	bool setStructure(std::string s);
};

#endif
