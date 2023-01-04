#include "main.h"

/**
* set_string -sets the value of a pointer to a char
*
* @s: string parameter to be changed
* @to: parameter for @s to be changed to
*
*/

void set_string(char **s, char *to)
{
	*s = to;
}
