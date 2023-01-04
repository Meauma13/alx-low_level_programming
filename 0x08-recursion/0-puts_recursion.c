#include "main.h"

/**
* _puts_recursion - prints a string and a newline
*
* @s: expected string parameter
*/

void _puts_recursion(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
