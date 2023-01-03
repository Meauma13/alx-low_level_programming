#include "main.h"

/**
* _strspn - get the length of a prefix substring
*
* @s: string to search
* @accept: substring to find
*
* Return: number of bytes in the initial segment
* of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0, n, m;

	for (n = 0; *(s + n) != ' '; n++)
	{
		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(accept + m) == *(s + n))
			{
				c++;
			}
		}
	}
	return (c);
}
