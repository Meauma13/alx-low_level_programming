#include "main.h"

/**
* times_table - prints the times table up to 9
* Return: void, if successful
*
*/

void times_table(void)
{
	int r, c, prod;

	r = 0;
	while (r < 10)
	{
		c = 0;
		while (c < 10)
		{
			prod = r * c;
			if (prod > 9)
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if (prod < 10)
			{
				if (c == 0)
				{
					_putchar(prod + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
			}

			if (c != 9)
				_putchar(',');

			if (c == 9)
				_putchar('\n');

			c++;
		}
		r++;
	}
}
