#include "main.h"

/**
* print_alphabet - print alphabet lowercase
*
* Return: Always 0.
*/

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
