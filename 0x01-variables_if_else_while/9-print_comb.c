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
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);

		if (ch == '9')
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
