#include"main.h"
/**
 * print_alphabet_x10 - function that prints 10 times an alphabet
 *
 * Return: return Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
