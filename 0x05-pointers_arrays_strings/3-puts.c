#include "main.h"

/**
* _puts - prints a string to stdout
*
* @str: expected string parameter
*/

void _puts(char *str)
{
	int n = 0; /* n loops through */

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
