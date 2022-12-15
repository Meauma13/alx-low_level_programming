#include <stdio.h>

/**
* main - prints the first 50 fibonacci numbers
*
* Return: 0, if successful
*/

int main(void)
{
	int n, m;
	long a = 1;
	long  b = 2;
	long sum = 0;

	for (n = 1; n <= 2; n++)
	{
		printf("%d, ", n);
	}

	for (m = 3; m <= 50; m++)
	{
		sum = a + b;
		printf("%lu", sum);

		if (m != 50)
			printf(", ");
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
