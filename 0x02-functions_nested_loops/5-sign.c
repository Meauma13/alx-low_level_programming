#include "main.h"

/**
* print_sign - tests the sign of a number
* @n: expected parameter to be tested
* Return: 1, if alphabett, otherwise 0
*/

/*print_sign tests the sign of a number*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}
}
