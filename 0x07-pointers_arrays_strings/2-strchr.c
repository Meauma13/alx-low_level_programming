#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
*
* @s: pointer to string parameter to search
* @c: character to search for
*
* Return: a pointer to the first occurrence or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
			break;
		}
	}

	return (NULL);
}
