#include <stdio.h>
#include "main.h"

/**
* main - prints numbers 1 to 100 with special words for multiples of 3 and 5
*
*
* Return: 0, if successful
*/

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printFizz();
			printBuzz();
			_putchar(32);
		}
		else if (n % 3 == 0)
		{
			printFizz();
			_putchar(32);
		}
		else if (n % 5 == 0)
		{
			printBuzz();
			_putchar(32);
		}
		else
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else if (n > 10 && n < 100)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(32);
		}
	}
	_putchar('\n');
	return (0);
}

/**
* printFizz - prints the word Fizz
*/
void printFizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}

/**
* printBuzz - prints the word Buzz
*/
void printBuzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}
