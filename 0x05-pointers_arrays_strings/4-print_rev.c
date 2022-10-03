#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints the reverse,
 *		of a string.
 * @s: string variable
 *
 * Return : Always 0 (Success)
 */
void print_rev(char *s)
{
	int g;
	int leng;

	leng = strlen(s);
	for (g = leng - 1; g >= 0; g--)
	{
		_putchar(s[g]);
	}
	putchar('\n');
}
