#include "main.h"

/**
* _strlen - return the length of a string
*
* @s: expected string parameter
*/

int _strlen(char *s)
{
	int l = 0, n = 0; /* l counts length of string, n loops through */

	while (s[n] != '\0')
	{
		l++;
		n++;
	}

	return l;
}
