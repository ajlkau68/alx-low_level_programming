#include "main.h"

/**
 * print_alphabet_x10 - Prints all alpahbets in 10 lines
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

	int i;

	for (i = 0; i <= 9; i++)
	{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

		_putchar('\n')

	}
}
