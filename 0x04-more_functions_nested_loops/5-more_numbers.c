#include "main.h"

/**
* more_numbers - prints digits 0 to 14 up to 10 times
*
* Return: void
*/

void more_numbers(void)
{
	int n;

	for (n = 0; n < 15; n++)
	{
		if (n > 9)
			_putchar(n / 10);
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
