#include <stdio.h>

/**
* main - prints numbers 1 to 100 with special words for multiples of 3 and 5
*
*
* Return: 0, if successful
*/

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n == 100)
		{
			printf("Buzz");
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			if (n < 10)
			{
				printf("%d ", n);
			}
			else if (n > 10 && n < 100)
			{
				printf("%d", (n / 10));
				printf("%d ", (n % 10));
			}
		}
	}
	printf("\n");
	return (0);
}
