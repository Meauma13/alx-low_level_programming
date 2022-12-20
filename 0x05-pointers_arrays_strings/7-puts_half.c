#include "main.h"

/**
* puts_half - prints second half of a string
*
* @str: expected string parameter
*/

void puts_half(char *str)
{
	int c, t; /* c count, t target */
	int l = 0; /* gets string length */
	int n = 0; /* n loops through */

	while (str[n] != '\0')
	{
		n++;
		l++;
	}

	if (l % 2 == 0)
	{
		t = l / 2;
		for (c = t; c <= l - 1; c++)
		{
			_putchar(str[c]);
		}
	}
	else
	{
		t = (l - 1) / 2;
		for (c = t; c <= l - 1; c++)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
