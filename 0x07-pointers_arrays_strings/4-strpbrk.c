#include "main.h"
#include <stddef.h>

/**
* _strpbrk - searches a string for any of a set of bytes
*
* @s: string to search
* @accept: substring to find
*
* Return: pointer to the byte in s that matches
* one of the bytes in s or NULL if not found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int n, m;

	for (n = 0; *s != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
