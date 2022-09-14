#include "main.h"
/**
 * print_to_98 - Describes the main function
 *
 * Description:
 * @n: is the parameter
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				_putchar('0' + i);
			else
				_putchar('0' + i);
		}
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				_putchar('0' + i);
			else
				_putchar ('0' + i);
		}
	}
	_putchar('\n');
}

