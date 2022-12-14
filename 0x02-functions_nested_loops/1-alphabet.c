#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

/*main function calls print_alphabet function*/
int main(void)
{
	print_alphabet();
	return (0);
}

/*print_alphabet displays lowercase alphabet*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
