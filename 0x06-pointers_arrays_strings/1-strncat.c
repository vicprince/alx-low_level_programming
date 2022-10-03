#include "main.h"
/**
 * _strncat - concatenate two strings
 *
 * @dest: Destination for concat string
 * @src: array of concat string
 * @n: integer limit to append array
 *
 * Return: return char vaiue
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a++] = src[b];
	}
	dest[a++] = '\0';

	return (dest);
}
