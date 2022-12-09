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
	for(ch = 'a' ; ch <= 'z' ; ch++) 
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
