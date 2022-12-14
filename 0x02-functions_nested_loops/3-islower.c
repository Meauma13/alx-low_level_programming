#include "main.h"

/**
* _islower - test for lowercase character
* @c: expected parameter to be tested
* Return: 1, if lowercase ,otherwise 0
*/

/*_islower tests for lowercase character*/
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
