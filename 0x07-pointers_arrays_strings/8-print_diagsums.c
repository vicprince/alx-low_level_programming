#include "main.h"
/**
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagA = 0;
	int diagB = 0;

	for (i = 0; i < size; i++)
	{
		diagO += a[(i * size) + i];
		diagT += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagA, diagB);
}
