#include <stdio.h>

/**
* main - Entry point
*
* Return: 0,for successful execution
*
*/

/*main function prints the alphabet in lowercase*/
int main(void)
{
	int ch;

	for (ch = 0 ; ch <= 9 ; ch++)
	{
		putchar(ch + '0');

		if (ch == 9)
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
