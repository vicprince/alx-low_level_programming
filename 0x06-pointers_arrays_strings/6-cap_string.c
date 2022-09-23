#include "main.h"

/**
 * _Schar - returns boolean if special  character
 *
 * @a: character to return
 *
 * Return: 1 or 0
 */

int _Schar(char a)
{
	int i;
	char capArr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (capArr[i] == a)
			return (1);
	}
	return (0);
}
/**
 * cap_string - capitalizes the string
 *
 * @s: string value
 *
 * Return: upper case string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_Schar(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && (_Schar(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;

	}
	return (s);
}
