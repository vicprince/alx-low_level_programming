#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int num = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	else if (num == 0)
		printf("Last digit of %d is %d and is 0\n", n, num);
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	return (0);
}
