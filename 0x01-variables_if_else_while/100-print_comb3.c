#include <stdio.h>

/**
* main - Entry point
*
* Return: 0,for successful execution
*
*/

/*main function prints all possible combinations of two digits*/
int main(void)
{
	int n1, n2;

	for (n1 = 0 ; n1 <= 9 ; n1++)
	{
		for (n2 = n1 + 1; n2 <= 9; n2++)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');

			if ((n1 == 8l) && (n2 == 9))
				break;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
