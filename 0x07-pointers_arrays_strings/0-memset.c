#include "main.h"

/**
* _memset - fills memory with a constant byte
*
* @s: pointer/memory area parameter expected
* @b: value to fill memory area with
* @n: number of places to fill with @b
*
* Return: a dereferenced pointer value
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (0);
}
