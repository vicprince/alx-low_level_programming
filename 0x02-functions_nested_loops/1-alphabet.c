#include "main.h"
/**
 * main - Entry point
 *
 * Description: Write a function that prints the alphabet in lowercase
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	putchar('\n');
	return (0);
}
