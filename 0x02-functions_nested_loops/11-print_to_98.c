#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
*
* @n: expected parameter to start from
* Return: void, if successful
*
*/

void print_to_98(int n)
{
	int c;

	if (n > 98)
	{
		for (c = n; c >= 98; c--)
		{
			printf("%d", c);
			if (c != 98)
				printf(", ");
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (c = n; c <= 98; c++)
		{
			printf("%d", c);
			if (c != 98)
				printf(", ");
		}
	}
	printf("\n");
}
