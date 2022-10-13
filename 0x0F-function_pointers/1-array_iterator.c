#include <stdio.h>
/**
 * array_iterator - function that executes a function
 *
 * @size: size of the integer array
 * @action: function to pointer
 * @array: array of integer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
