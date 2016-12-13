#include <iostream>
#include <fstream>
#include <QString>
#include <cstdlib>
#include <time.h>

#include "Language.h"


static void generateWords(Language lang, QString* words)
{
    // Generate X number of words in one go
    const int NUM_WORDS = 16;

    // Random seed
    srand(time(NULL));

    // Calculates all of the possible syllable structures
    // based on the given "master" structure
    QString syll = lang.getStructure();
    const int STRUCT_SIZE = 100;
    QString structures[STRUCT_SIZE];
    QString temp;
    int count = 0;
    int mandatories = 0;
    bool stillOptionals = true;
    bool emptyRight = false;
    bool emptyLeft = false;

    for (int i = 0; i < syll.length(); i++)
    {
        if (syll[i] == 'V' || syll[i] == 'C')
            mandatories++;
    } // End for

    // It's ugly but w/e
    while (stillOptionals)
    {
        structures[count] = syll;
        count++;

        // Check the right side for optionals
        temp = syll;
        while (temp[temp.length() - 1] == 'c' || temp[temp.length() - 1] == 'v')
        {
            temp.remove(temp.length() - 1, 1);
            if (temp.length() != mandatories)
            {
                structures[count] = temp;
                count++;
            }
        } // End while

        // Check the left side for optionals
        temp = syll;
        while (temp[0] == 'c' || temp[0] == 'v')
        {
            temp.remove(0, 1);
            if (temp.length() != mandatories)
            {
                structures[count] = temp;
                count++;
            }
        } // End while

        // Take one optional off both sides
        if (syll[syll.length() - 1] == 'c' || syll[syll.length() - 1] == 'v')
        {
            syll.remove(syll.length() - 1, 1);
        }
        else
        {
            emptyRight = true;
        }

        if (syll[0] == 'c' || syll[0] == 'v')
        {
            syll.remove(0, 1);
        }
        else
        {
            emptyLeft = true;
        }

        if (emptyLeft || emptyRight)
            stillOptionals = false;
    } // End while

    if (!emptyLeft && !emptyRight)
    {
        if (syll[syll.length() - 1] == 'c' || syll[syll.length() - 1] == 'v')
        {
            syll.remove(syll.length() - 1);
        }
        else if (syll[0] == 'c' || syll[0] == 'v')
        {
            syll.remove(0, 1);
        }

        structures[count] = syll;
        count++;
    } // End if

    QString tempVowels = lang.getVowels();
    QString tempCons = lang.getConsonants();

    // Need these to make sure cluster is okay
    QString tempOnsetClusters = lang.getOnsetClusters();
    QString tempCodaClusters = lang.getCodaClusters();

    // Create a random num of syllables (1-3) using random structures
    // for each, and put them together to make words. Omit syllables
    // that do not follow the rules
    for (int i = 0; i < NUM_WORDS; i++)
    {
        int numOfSyll = rand() % 3 + 1;
        int j = 0;
        QString tempWord = "";

        while (j < numOfSyll)
        {
            QString tempStructure = structures[rand() % count];
            QString tempSyllable = "";

            // Use a structure to create a syllable
            int k = 0;
            while(k < tempStructure.size())
            {
                int pos = 0;
                if (tempStructure.mid(k, 1) == "v" || tempStructure.mid(k, 1) == "V")
                {
                    pos = rand() % tempVowels.length();
                    if (tempVowels[pos] == ' ')
                        pos--;
                    tempSyllable += tempVowels[pos];
                    k++;
                }
                else if (tempStructure.mid(k, 1) == "c" || tempStructure.mid(k, 1) == "C")
                {
                    pos = rand() % tempCons.length();
                    if (tempCons[pos] == ' ')
                        pos--;
                    tempSyllable += tempCons[pos];
                    k++;
                }
            } // End while

            tempWord = tempWord + tempSyllable;
            j++;
        } // End while

        words[i] = tempWord;
    } // End for
} // End generateWords
