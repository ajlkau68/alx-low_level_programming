#include "main.h"

/**
 * _isupper - Checks for upper case letter
 *
 * Description:
 * @c: is a parameter
 * Return: 0 if upper and 1 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
