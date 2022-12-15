#include <stdio.h>

/**
* main - prints the sum of even valued fibonacci terms
*
* Return: 0, if successful
*/

int main(void)
{
	int n, m;
	int a = 1;
	int b = 2;
	int fib_seq = 0;
	int sum_seq = 0;

	for (n = 1; n <= 2; n++)
	{
		if ((n % 2) == 0)
			sum_seq += n;
	}

	for (m = 3; m <= 50; m++)
	{
		fib_seq = a + b;

		if (fib_seq <= 4000000)
		{
			if ((fib_seq % 2) == 0)
				sum_seq += fib_seq;
			a = b;
			b = fib_seq;
		}
		else
		{
			break;
		}
	}
	printf("%d\n", sum_seq);
	return (0);
}
