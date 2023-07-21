#include "main.h"
#include <ctype.h>

/**
 * _isdigit - This function to know is the parameter is digit or not
 *
 * @c: This parameter of the digit
 *
 * Return: (1) if digit and (0) otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
