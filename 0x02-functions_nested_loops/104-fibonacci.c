#include <stdio.h>

/**
* main - prints the first 98 fibonacci numbers
*
* Return: 0, if successful
*/

int main(void)
{
	int n, m;
	double a = 1;
	double b = 2;
	double sum = 0;

	for (n = 1; n <= 2; n++)
	{
		printf("%d, ", n);
	}

	for (m = 3; m <= 98; m++)
	{
		sum = a + b;
		printf("%f", sum);

		if (m != 98)
			printf(", ");
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
