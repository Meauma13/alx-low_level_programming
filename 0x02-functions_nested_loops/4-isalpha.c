#include "main.h"

/**
* _isalpha - test for alphabetb input
* @c: expected parameter to be tested
* Return: 1, if alphabett, otherwise 0
*/

/*_isalpha tests for lowercase character*/
int _isalpha(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
