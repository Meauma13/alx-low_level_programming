#include "main.h"

/**
* print_triangle - prints triangle shape
*
* @size: parameter for the sides of triangle
*
* Return: void
*/

void print_triangle(int size)
{
	int m, k;

	if (size < 1)
	{
		_putchar('\n');
	}
	else if (size == 1)
	{
		_putchar(35);
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (k = 0; k < size; k++)
			{
				if (m == size - 1)
				{
					_putchar(35);
				}
				else
				{
					if (k < m)
					{
						_putchar(35);
					}
					else if (k > m)
					{
						_putchar(32);
					}
				}
			}
			_putchar('\n');
		}
	}
}
