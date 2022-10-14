#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: constant integer
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;
	unsigned int index;

	va_start(ap, n);
	for (index = 0; index < n; index++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
