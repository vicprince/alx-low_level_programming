#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: where the concat string is stored
 * @src: array of the concat string
 *
 * Return: return char value
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a++] = src[b];
	}
	dest[a++] = '\0';

	return (dest);
}
