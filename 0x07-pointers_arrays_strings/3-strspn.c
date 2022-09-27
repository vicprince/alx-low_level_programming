#include "main.h"
/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned result = 0;

	for ( i = 0; s[i] != '\0'; i++)
	{
		for ( j = 0; s[j] != '\0'; j++)
		{
			result++
			break;
		}
		if (s[i] != '\0')
			return (result);
	}
	return (0);
}
