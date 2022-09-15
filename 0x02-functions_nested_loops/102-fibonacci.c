#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: finds and prints the first 98 Fibonacci numbers
 *
 * @counter,@x,@y,@z: local variable
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
