#include"main.h"
/**
 * print_alphabet - Write a function that prints the alphabet a-z in lowercase
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
