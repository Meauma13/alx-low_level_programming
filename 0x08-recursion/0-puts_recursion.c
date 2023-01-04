#include "main.h"

/**
* _puts_recursion - prints a string and a newline
*
* @s: expected string parameter
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
