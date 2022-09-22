#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @s: string value
 *
 * Return: char value
 */

char *leet(char *s)
{
	char AlphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; AlphaArr[j] != '\0'; j++)
		{
			if (s[i] == AlphaArr[j])
			{
				s[i] = AlphaArr[j + 1];
				break;
			}
		}
	}
	return (s);
}
