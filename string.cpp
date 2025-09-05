//
// string
//
// This file contains simple string manipulation routines.
//
// author: Stephen Nichols
//

#include <string.h>
#include <ctype.h>
#include "string.hpp"

// this function trims all of the whitespace from the passed string, both front and back
void trimstr ( char *str )
{
    char *endPtr = &str[strlen(str)];
    char *frontPtr = str;

	// the string is empty, return
	if ( endPtr == str )
		return;

	// skip past the null
	endPtr--;

    // scan from the end of the string
    while (endPtr != str) {
        if (isspace(*endPtr))
        {
            *endPtr = 0;
            endPtr--;
        }
        else
        {
            break;
        }
    }

	// adjust endPtr to point to the null
	endPtr++;

    // scan from the front of the string
    while ( isspace ( *frontPtr ) ) {
        frontPtr++;

        // we've consumed the whole string!  (should never happen)
        if ( frontPtr == endPtr ) 
            break;
    }

    // move the whole string down
	if ( str != frontPtr ) {
		int length = (int)(endPtr - frontPtr)+1;
	    memmove ( str, frontPtr, length );
	}
}

// this function mimics strdup
char* newStr (const char* str)
{
    if ( str )
        return _strdup ( str );

    return NULL;
}
