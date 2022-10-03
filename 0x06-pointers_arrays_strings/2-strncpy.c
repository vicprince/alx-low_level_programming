#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: Destination of string
 * @src: array of input
 * @n: integer limit @src
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
