#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 *		    using malloc
 * @b: integer
 * Return: points to allocated memory
 *	   exit (98) if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *heap_mem;

	heap_mem = malloc(b);
	if (heap_mem == NULL)
		exit(98);
	return (heap_mem);
}
