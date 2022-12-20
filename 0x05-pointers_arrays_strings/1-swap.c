#include "main.h"

/**
* swap_int - swap the values of 2 integers
*
* @a: expected first integer parameter
* @b: expected second integer parameter
*/

void swap_int(int *a, int *b)
{
	int c = *a; /* temp variable to effect swap */

	*a = *b;
	*b = c;
}
