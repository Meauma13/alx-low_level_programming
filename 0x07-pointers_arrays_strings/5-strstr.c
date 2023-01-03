#include "main.h"
#include <stddef.h>

/**
* _strstr - searches a string for a substring
*
* @haystack: string to search
* @needle: substring to find
*
* Return: pointer to the beginning of substring
* or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int n, m;

	for (n = 0; *haystack != '\0'; n++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[n] == needle[m])
			{
				return (needle);
			}
		}
		haystack++;
	}
	return (NULL);
}
