#include "main.h"

/**
 * islower - tells if input is lower case
 *
 * Return: int (1 if it is lower and 0 if otherwise)
 *
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}

	else
	{
		return (0);
	
	}

}
