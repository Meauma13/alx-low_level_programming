#include "main.h"

/**
* _strcpy - copies a string to another via pointers
*
* @dest: destination string parameter
* @src: originating string parameter
*
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		if (src[c + 1 ] == '\0')
		{
			dest[c + 1] = '\0';
		}
		c++;
	}
	return dest;
}
