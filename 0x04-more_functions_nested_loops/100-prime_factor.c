#include <stdio.h>

/**
* main - finds and prints the highest prome factor of 612852475143
*
* Return: 0, if successful
*/

int main(void)
{
	int c, f = 0;
	long int s = 612852475143;
 
	for (c = 3; c <= s; c = c + 2)
	{
		while (s % c == 0)
		{
			if (c > f)
				f = c;
			s = s / c;
		}
	}
	printf("%d\n", f);

	return (0);
}
