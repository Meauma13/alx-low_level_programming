#include "main.h"

/**
* _islower - test for lowercase character
*
* Return: 1, if lowercase ,otherwise 0
*/

/*_islower tests for lowercase character*/
int _islower(int c) /*parameter int c expects integer*/
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
