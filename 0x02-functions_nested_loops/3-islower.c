#include "main.h"

/**
* is_lower - print alphabet lowercase
*
* Return: 1, if lowercase ,otherwise 0
*/

/*is_lowercase tests for lowercase character*/
int _islower(int c)
{
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
