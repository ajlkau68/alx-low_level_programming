#include "main.h"

/**
 * _isdigit - Checks if it is a digit
 *
 * Description:
 * @c: is a parameter
 * Return: 1 if it is a digit and 0 if not a digit
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
