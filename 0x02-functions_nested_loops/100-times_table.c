#include <stdlib.h>
#include "main.h"

/**
* print_times_table - prints the n times table starting from n
* @n: expected parameter to start from
* Return: void, if successful
*/

void print_times_table(int n)
{
	int r, c, prod;

	if ((n > 15) || (n < 0))
		exit(0);
	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			prod = r * c;
			if (prod > 99)
			{
				_putchar(' ');
				_putchar((prod / 100) + '0');
				_putchar(((prod % 100) / 10) + '0');
				_putchar(((prod % 100) % 10) + '0');
			}
			else if (prod > 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if (prod < 10)
			{
				if (c == 0)
					_putchar(prod + '0');
				if (c != 0)
				{
					_putchar(_putchar(_putchar(' ')));
					_putchar(prod + '0');
				}
			}
			if (c != n)
				_putchar(',');
			if (c == n)
				_putchar('\n');
		}
	}
}
