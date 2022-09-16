#include <stdio.h>

/**
 * main - main function
 * factors of 1231952 are 2, 2, 2, 2, 37 and 2081
 *
 * Return: returns 0
 */

int main(void)
{
	unsigned int a = 2;
	unsigned long n = 612852475143;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a;
		} else
		{
			a++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
