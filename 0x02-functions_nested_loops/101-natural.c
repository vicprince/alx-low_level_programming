#include <stdio.h>
/**
 * main - list all natural numbers multiples of 3 & 5
 *
 * Return: return 0 Always (Success)
 */
int main(void)
{
	int digit, sum;

	sum = 0;

	for (digit = 0; digit < 1024; digit++)
	{
		if (digit % 3 == 0 || digit % 5 == 0)
		{
			sum += digit;
		}
	}

	printf("%d\n", sum);

	return (0);
}
