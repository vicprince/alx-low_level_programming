#include "main.h"

/**
 * print_line - prints a straigt line
 *
 * @n: integer for the line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
