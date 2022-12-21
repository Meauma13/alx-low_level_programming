#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of an array of integers
*
* @a: expected array parameter
* @n: expected number of elements to print
*/

void print_array(int *a, int n)

{
	int c = 0;

	while (c < n)
	{
		printf("%d", a[c]);
		if (c != n - 1)
		{
			printf(", ");
		}
		c++;
	}
	printf("\n");
}
