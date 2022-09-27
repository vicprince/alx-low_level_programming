#include "main.h"
/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 * Return: returns new value
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + 1);
		}
	}
}
