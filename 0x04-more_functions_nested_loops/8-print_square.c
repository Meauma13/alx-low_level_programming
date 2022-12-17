#include "main.h"

/**
* print_square - prints a square shape
*
* @size: parameter for the sides of the square
*
* Return: void
*/

void print_square(int size)
{
	int m, k;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
