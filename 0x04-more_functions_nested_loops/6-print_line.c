#include "main.h"

/**
* print_line - prints a straight line
*
* @n: parameter for number of times to print line
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
