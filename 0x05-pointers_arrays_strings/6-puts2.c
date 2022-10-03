#include"main.h"

/**
 * puts2 - function that prints everyother character,
 *		of a string.
 *
 * @str: string variable
 *
 * Return: void
*/

void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; ++c)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar('\n');
}
