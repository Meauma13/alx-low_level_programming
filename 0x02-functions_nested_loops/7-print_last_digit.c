#include <limits.h>
#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: expected parameter whose last digit is to be printed
* Return: the last digit
*
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		if (n == INT_MIN)
		{
			long num;
			num = (n) - (n) - (n);
		}
		n = (n) - (n) - (n);
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
