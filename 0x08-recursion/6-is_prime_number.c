#include "main.h"

#include "main.h"

/**
 * prime_helper - function that checks prime
 *
 * @i: integer
 * @n: integer to be tested
 *
 * Return: integer
 */

int prime_helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (prime_helper(i + 1, n));
	return (1);
}

/**
 * is_prime_number - is prime or not
 *
 * @n: integer to compare
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (prime_helper(i, n));
}
