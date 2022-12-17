#include "main.h"

/**
* print_diagonal - prints a diagonal line
*
* @n: parameter for number of times to print line
*
* Return: void
*/

void print_diagonal(int n)
{
	int m, k;

	for (m = 0; m < n; m++)
	{
		if (n < 0)
		{
			_putchar('\n');
			break;
		}
		for (k = 0; k < m; k++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
