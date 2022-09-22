#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char value
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			break;
		}
		else
		{
			b = s1[a] - s2[a];
		}
		a++;
	}
	return (b);
}
