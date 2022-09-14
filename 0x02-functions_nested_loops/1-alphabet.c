#include"main.h"
/**
 * main - Entry point
 *
 * Description: Write a function that prints the alphabet a-z in lowercase
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
