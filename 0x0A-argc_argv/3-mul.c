#include "main.h"
/**
 * main - a program that multiplies two numbers
 * @argc: number of argument passed
 * @argv: pointer array of arguments passed
 *
 * Return: Alwats 0 Success
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	return (0);
}
