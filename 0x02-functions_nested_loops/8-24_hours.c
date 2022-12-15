#include "main.h"

/**
* jack_bauer - prints every minute of the day
* Return: void, if successful
*
*/

void jack_bauer(void)
{
	char hr, mn;

	hr = 0;
	while (hr < 24)
	{
		mn = 0;
		while (mn < 60)
		{
			if (hr < 10)
			{
				_putchar('0');
				_putchar(hr + '0');
			}
			else
			{
				_putchar((hr / 10) + '0');
				_putchar((hr % 10) + '0');
			}
			_putchar(':');

			if (mn < 10)
			{
				_putchar('0');
				_putchar(mn + '0');
			}
			else
			{
				_putchar((mn / 10) + '0');
				_putchar((mn % 10) + '0');
			}
			_putchar('\n');

			mn++;
		}
		hr++;
	}
}
