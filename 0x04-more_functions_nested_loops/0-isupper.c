#include "main.h"

/**
* _isupper - checks if a character is uppercase
*
* @c: expeceted parameter for comparison
*
* Return: (1), if successful
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
