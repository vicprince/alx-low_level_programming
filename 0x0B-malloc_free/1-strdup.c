#include "main.h"
/**
 * _strdup - function that duplicates a string
 * @str: array of strings
 *
 * Return: char value
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}

	return (s);
}
