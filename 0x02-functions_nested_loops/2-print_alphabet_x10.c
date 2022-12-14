#include "main.h"

/**
* print_alphabet_x10 - print lowercase alphabet x10
*
* Return: Always 0.
*/

/*print_alphabet_x10 displays lowercase alphabet*/
void print_alphabet_x10(void)
{
	int n = 0;

	while (n <= 9)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}
