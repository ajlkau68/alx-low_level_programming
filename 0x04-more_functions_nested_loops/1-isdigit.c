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
	int i;
       
	for (i = 48; i <=57; i++)
	{
		if (c == i)
		{
			return (1);
		}
		
	}
	return (0);
}
