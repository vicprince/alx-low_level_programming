#include"main.h"
/**
 * _isalpha - function that checks if a character is a lower,
 *	or upper case
 *
 * @c: takes input from other functions
 *
 * Return: return 1 if c is true
 *	otherwise Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
		c >= 65 && c >= 90)
		return (1);
	return (0);
}
