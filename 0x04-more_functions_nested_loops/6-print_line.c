#include "main.h"
#include <stdlib.h>

/**
* print_line - prints a straight line
*
* Return: void
*/

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (n < 0)
			break;

		_putchar(95);
	}
	
	_putchar('\n');
}
