#include <stdio.h>
/**
 * main - Entry point
 *
 * @counter: local variable
 * @x: first integer
 * @y: second integer
 * @z: third integer
 *
 * Return: return 0 Always (Success)
 */
int main(void)
{
	int counter = 2;
	long int x = 1;
	long int y = x + 1;
	long int z = x + y;

	printf("%ld, %ld, ", x, y);
	while (counter < 50)
	{
		printf("%ld", z);
		counter++;
		x = y;
		y = z;
		z = x + y;
		if (counter < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
