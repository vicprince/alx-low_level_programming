#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - Entry point
 *
 * Description: Find and print the first 98 fib numbers starting with 1 and 2,
 *	numbers should be coma and space separated.
 *
 * Return: return 0 Always (Success)
 */
int main(void)
{
	unsigned long int int1 = 0, digit1 = 1, int2 = 0, digit2 = 2;
	unsigned long int a, b, c;
	int count;

	printf("%lu, %lu, ", digit1, digit2);
	for (count = 2; count < 98; count++)
	{
		if (digit1 + digit2 > LARGEST || int2 > 0 || int1 > 0)
		{
			a = (digit1 + digit2) / LARGEST;
			b = (digit1 + digit2) % LARGEST;
			c = int1 + int2 + a;
			int1 = int2, int2 = c;
			digit1 = digit2, digit2 = b;
			printf("%lu%010lu", int2, digit2);
		}
		else
		{
			b = digit1 + digit2;
			digit1 = digit2, digit2 = b;
			printf("%lu", digit2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
