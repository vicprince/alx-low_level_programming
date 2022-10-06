#include "main.h"
/**
 * malloc_checked - function that allocates memory
 *		    using malloc
 * @b: integer
 * Return: points to allocated memory
 *	   exit (98) if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	prt = malloc(b);
	if (prt == NULL)
	{
		exit(98);
	}
	return (ptr);
}
