#include "main.h"
/**
 * main - program that prints argument passed
 * @argc: argument passed
 * @argv: pointer array to arguments passed
 *
 * Return: Alwaays 0 Success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, j;

	while (i < argc)
	{
		j = i;
		i++;
	}
	printf("%d\n", j);
	return (0);
}
