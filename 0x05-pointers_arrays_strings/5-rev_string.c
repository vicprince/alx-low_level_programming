#include "main.h"
#include <string.h>
/**
 * rev_string - function that prints the reverse,
 *		of a string.
 * @s: string variable
 *
 * Return : Always 0 (Success)
 */
void rev_string(char *s)
{
	int l, i;
	char ch;


	for (l = 0; s[l] != '\0'; ++l)
		;


	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}

}
