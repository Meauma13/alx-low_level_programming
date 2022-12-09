#include <stdio.h>

/**
* main - Entry point
*
* Return: 0,for successful execution
*
*/

/*main function prints lowercase alphabets omitting q and e*/
int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
