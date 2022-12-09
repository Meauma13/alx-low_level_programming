#include <stdio.h>

/**
* main - Entry point
*
* Return: 0,for successful execution
*
*/

/*main function prints lowercase in reverse*/
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
