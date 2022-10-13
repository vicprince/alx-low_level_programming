#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of integer
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: Success 0
 *	   Failure -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
				return (i);
		}
	}
	return (-1);
}
