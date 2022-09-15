#include <stdio.h>

/**
 * main - main function
 *
 * @counter: local variable
 * @x: first integer
 * @y: second integer
 * @z: third integer
 *
 * Return: void
 */

int main(void)
{
	int counter = 0;
	long int x = 1;
	long int y = x;
	long int z = x + y;

	while (z < 4000000)
	{
		if (z % 2 == 0)
		{
			counter += z;
		}
		x = y;
		y = z;
		z = x + y;
	}
	printf("%d\n", counter);
	return (0);
}
