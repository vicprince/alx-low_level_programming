#include "main.h"
/**
 * _calloc - function that allocate memory for an array
 * @nmemb: memory array
 * @size: byte in array
 *
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(array) + i) = 0;
	}
	return (array);
}
