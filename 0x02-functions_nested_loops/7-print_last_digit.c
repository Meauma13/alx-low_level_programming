#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: expected parameter whose last digit is to be printed
* Return: the last digit
*
*/

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = (n) - (n) - (n);
	}
	_putchar(n + '0');
	return (n);
}
