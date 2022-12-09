#include <stdio.h>

/**
* main - Entry point
*
* Return: 0,for successful execution
*
*/

/*main function prints all base 16 digits in lowercase*/
int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
