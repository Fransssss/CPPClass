// Fransiskus Agapa

#ifndef CPPCLASS_CAPITALWORD_H
#define CPPCLASS_CAPITALWORD_H

#include "string"
#include "cctype"

using std::islower;
using std::toupper;
using std::isspace;
using std::isalpha;
using std::string;
using std::string;

string Capitalize(string& word)
{
    for(size_t i = 0; i < word.size(); ++i)
    {
        if(i == 0)
        {
            if(islower(word[i]))
            {
                word[i] = toupper(word[i]);
            }
        }

        if(isspace(word[i]))                                     // if space is found
        {
            if(isalpha(word[i + 1]))                             // check if later index is alphabet
            {
                if(islower(word[i + 1]))                         // check if the alaphbet is in lower case
                {
                    word[i + 1] = toupper(word[i + 1]);          // if the alphabet is in lower case, make it in upper case
                }
            }
        }
    }

    return word;
}

#endif //CPPCLASS_CAPITALWORD_H
