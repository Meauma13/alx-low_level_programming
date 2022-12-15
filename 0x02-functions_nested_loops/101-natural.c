#include <stdio.h>

/**
* main - computes and prints the sum of multiples
*
* Return: 0, if successful
*/

int main(void)
{
	int c3, c5, m3, m5, sum3, sum5;
	m3 = 0;
	m5 = 0;
	sum3 = 0;
	sum5 = 0;

	for (c3 = 1; c3 < 1024; c3++)
	{
		m3 = 3 * c3;
		if (m3 >= 1023)
			break;
		sum3 += m3;
	}

	for (c5 = 1; c5 < 1024; c5++)
	{
		m5 = 5 * c5;
		if (m5 >= 1023)
			break;
		sum5 += m5;
	}

	printf("%d\n", sum3 + sum5);

	return (0);
}
