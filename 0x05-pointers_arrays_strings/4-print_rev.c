#include "main.h"

/**
* print_rev - prints a string in reverse
*
* @s: expected string parameter
*/

void print_rev(char *s)
{
	int c, l = 0; /* l gets the string length */
	int n = 0; /* n loops through */

	while (s[n] != '\0')
	{
		l++;
		n++;
	}

	for (c = l; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
