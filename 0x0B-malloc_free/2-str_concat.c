#include "main.h"
/**
 * str_concat - function that concat two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char value
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int a = 0, b = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	s = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';

	return (s);
}
