// Fransiskus Agapa

#ifndef CPPCLASS_VALIDDIGIT_H
#define CPPCLASS_VALIDDIGIT_H

#include "string"
#include "cctype"

using std::isdigit;
using std::string;

bool Validate(const string& strDigit)
{
    int amountValidDigit = strDigit.size();                // indicate all digit has to be digit
    int keepTrackValidDigit = 0;                           // keep track of digit valid in strDigit

    for(size_t i = 0; i < amountValidDigit; ++i)
    {
        if(isdigit(strDigit[i]))                          // every time digit is seen
        {
            keepTrackValidDigit++;                        // increment by one
        }
    }

    if(keepTrackValidDigit != amountValidDigit)           // after the tracking and not all digit then return false
    {
        return false;
    }

    return true;
}

#endif //CPPCLASS_VALIDDIGIT_H
