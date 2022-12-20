#include "main.h"

/**
* puts2 - prints every other character of a string
*
* @str: expected string parameter
*/

void puts2(char *str)
{
	int n = 0; /* n loops through */

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n = n + 2;
	}
	_putchar('\n');
}
