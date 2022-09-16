#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * a new line,
 * multiples of three print Fizz,
 * multiples of five print Buzz,
 * multiples of both three and five print FizzBuzz.
 *
 * Return: void.
 */

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);

}
