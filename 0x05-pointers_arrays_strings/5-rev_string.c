#include "main.h"

/**
* rev_string - prints a string in reverse
*
* @s: expected string parameter
*/

void rev_string(char *s)
{
	char rs; /* string to reverse */
	int c, l = 0; /* l gets the string length */
	int n = 0; /* n loops through */

	while (s[n] != '\0')
	{
		l++;
		n++;
	}

	n = l - 1;

	for (c = 0; c <= (l - 1) / 2; c++)
	{
		rs = s[c];
		s[c] = s[n];
		s[n] = rs;
		n--;
	}
}
