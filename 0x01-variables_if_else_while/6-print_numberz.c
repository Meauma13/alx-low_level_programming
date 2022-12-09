#include <stdio.h>

/**
* main - Entry point
*
* Return: 0,for successful execution
*
*/

/*main function prints base 10 single digit numbers*/
int main(void)
{
	int ch;

	for (ch = 0 ; ch <= 9 ; ch++)
	{
		putchar(ch + '0');
	}
	putchar('\n');

	return (0);
}
