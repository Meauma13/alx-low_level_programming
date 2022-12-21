#include "main.h"

/**
* _atoi - convert a string to an integer noting the signs
*
* @s: string parameter to convert
*
* Return: 0, if successful
*/

int _atoi(char *s)
{
	int n, sign = 1, rtnum = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == '-')
		{
			sign *= -1;
		}
		if (s[n] >= '0' && s[n] <= '9')
		{
			rtnum = (s[n] - 48) + rtnum * 10; /* -48 is used to offset ASCII code */
		}
	}
	return (rtnum * sign);
}
