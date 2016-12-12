#include <string>
#include "Dictionary.h"

#ifndef LANGUAGE_H
#define LANGUAGE_H

class Language
{
private:
	std::string name;
	std::string structure;
	std::string sounds;
	Dictionary dictionary;

public:
    Language();
	Language(std::string name);
	Dictionary getDictionary() { return dictionary; };
	std::string getName() { return name; };
	std::string getSounds() { return sounds; };
	std::string getStructure(){ return structure; };

	bool setName(std::string name);
	bool setSounds(std::string sounds);
	bool setStructure(std::string structure);
};

#endif
