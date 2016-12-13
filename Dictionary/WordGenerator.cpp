//#include <iostream>
//#include <fstream>
//#include <QString>
//#include <cstdlib>
//#include <time.h>

//#include "Language.h"


//static void generateWords(Language lang, QString* words)
//{
//    // Generate X number of words in one go
//    const int NUM_WORDS = 10;

//    // Random seed
//    srand(time(NULL));

//    // Calculates all of the possible syllable structures
//    // based on the given "master" structure
//    QString syll = lang.getStructure();
//    const int STRUCT_SIZE = 100;
//    QString structures[STRUCT_SIZE];
//    QString temp;
//    int count = 0;
//    int mandatories = 0;
//    bool stillOptionals = true;
//    bool emptyRight = false;
//    bool emptyLeft = false;

//    for (int i = 0; i < syll.length(); i++)
//    {
//        if (syll[i] == 'V' || syll[i] == 'C')
//            mandatories++;
//    } // End for

//    // It's ugly but w/e
//    while (stillOptionals)
//    {
//        structures[count] = syll;
//        count++;

//        // Check the right side for optionals
//        temp = syll;
//        while (temp[temp.length() - 1] == 'c' || temp[temp.length() - 1] == 'v')
//        {
//            temp.remove(temp.end() - 1);
//            if (temp.length() != mandatories)
//            {
//                structures[count] = temp;
//                count++;
//            }
//        } // End while

//        // Check the left side for optionals
//        temp = syll;
//        while (temp[0] == 'c' || temp[0] == 'v')
//        {
//            temp.remove(temp.begin());
//            if (temp.length() != mandatories)
//            {
//                structures[count] = temp;
//                count++;
//            }
//        } // End while

//        // Take one optional off both sides
//        if (syll[syll.length() - 1] == 'c' || syll[syll.length() - 1] == 'v')
//        {
//            syll.remove(syll.end() - 1);
//        }
//        else
//        {
//            emptyRight = true;
//        }

//        if (syll[0] == 'c' || syll[0] == 'v')
//        {
//            syll.remove(syll.begin());
//        }
//        else
//        {
//            emptyLeft = true;
//        }

//        if (emptyLeft || emptyRight)
//            stillOptionals = false;
//    } // End while

//    if (!emptyLeft && !emptyRight)
//    {
//        if (syll[syll.length() - 1] == 'c' || syll[syll.length() - 1] == 'v')
//        {
//            syll.remove(syll.end() - 1);
//        }
//        else if (syll[0] == 'c' || syll[0] == 'v')
//        {
//            syll.remove(syll.begin());
//        }

//        structures[count] = syll;
//        count++;
//    } // End if

//    QString tempVowels = lang.getVowels();
//    QString tempCons = lang.getConsonants();

//    // Need these to make sure cluster is okay
//    QString tempOnsetClusters = lang.getOnsetClusters();
//    QString tempCodaClusters = lang.getCodaClusters();

//    // Create a random num of syllables (1-4) using random structures
//    // for each, and put them together to make words. Omit syllables
//    // that do not follow the rules
//    for (int i = 0; i < NUM_WORDS; i++)
//    {
//        int numOfSyll = rand() % 3 + 1;
//        int j = 0;
//        QString tempWord = "";

//        while (j < numOfSyll)
//        {
//            QString tempStructure = structures[rand() % count];
//            QString tempSyllable = "";

//            bool onset = true;

//            // Use a structure to create a syllable
//            int k = 0;
//            while(k < tempStructure.size())
//            {
//                int pos = 0;
//                switch (tempStructure[k])
//                {
//                case 'V':
//                case 'v':
//                {
//                    pos = rand() % tempVowels.length();
//                    if (tempVowels[pos] == ' ')
//                        pos--;
//                    tempSyllable += tempVowels[pos];
//                    onset = false;
//                    k++;
//                    break;
//                }
//                case 'C':
//                case 'c':
//                {
//                    QString possibleNext = "";
//                    if (tempSyllable.length() > 0)
//                    {
//                        QCharRef tempChar = tempSyllable[tempSyllable.length() - 1];
//                        if (onset)
//                        {
//                            bool passed = false;
//                            for (int n = 0; n < tempOnsetClusters.length() - 1; n++)
//                            {
//                                if (tempOnsetClusters[n] == tempChar)
//                                {
//                                    possibleNext += tempOnsetClusters[n + 1] + " ";
//                                    passed = true;
//                                }
//                                else
//                                {
//                                    if (passed)
//                                        break;
//                                }
//                                n = n + 2;
//                            } // End for
//                        }
//                        else
//                        {
//                            bool stuff = false;
//                            for (int n = 0; n < tempVowels.length(); n++)
//                            {
//                                if (tempVowels[n] == tempSyllable[tempSyllable.length() - 1])
//                                {
//                                    possibleNext = tempCons;
//                                    stuff = true;
//                                    break;
//                                }
//                                n++;
//                            } // End for

//                            if (!stuff)
//                            {
//                                bool passed = false;
//                                for (int n = 0; n < tempCodaClusters.length() - 1; n++)
//                                {
//                                    if (tempCodaClusters[n] == tempChar)
//                                    {
//                                        possibleNext += tempCodaClusters[n + 1] + " ";
//                                        passed = true;
//                                    }
//                                    else
//                                    {
//                                        if (passed)
//                                            break;
//                                    }
//                                    n = n + 2;
//                                } // End for
//                            }
//                        }

//                        if (possibleNext.length() > 0)
//                        {
//                            pos = rand() % possibleNext.length();
//                            if (possibleNext[pos] == ' ')
//                                pos--;

//                            tempSyllable += possibleNext[pos];
//                            k++;
//                        }
//                        else
//                        {
//                            tempSyllable.remove(tempSyllable.length() - 1, 1);
//                            if (k > 0)
//                                k--;
//                        }
//                    }
//                    else
//                    {
//                        pos = rand() % tempCons.length();
//                        if (tempCons[pos] == ' ')
//                            pos--;

//                        tempSyllable += tempCons[pos];
//                        k++;
//                    }
//                    break;
//                }
//                default:;
//                } // End switch
//            } // End while

//            tempWord = tempWord + tempSyllable;
//            j++;
//        } // End while

//        words[i] = tempWord;
//    } // End for
//} // End generateWords
