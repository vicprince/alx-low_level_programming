#include "main.h"
/**
 * array_range - function that creates array of integers
 * @min: minimum integer elements
 * @max: maximum integer elements
 *
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
