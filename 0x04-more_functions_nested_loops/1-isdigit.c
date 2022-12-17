#include "main.h"

/**
* _isdigit - checks for a digit 0 through 9
*
* @c: expeceted parameter for testing
*
* Return: (1), if successful
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
