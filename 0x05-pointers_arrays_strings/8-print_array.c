#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of an array of integers
*
* @str: expected string parameter
*/

void print_array(int *a, int n)

{
	int c = 0;

	while (c < n)
	{
		printf("%d, ", a[c]);
		c++;
	}
	printf("\n");
}
