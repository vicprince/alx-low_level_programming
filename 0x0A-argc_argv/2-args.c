#include "main.h"
/**
 * main - program that prints all arguments
 * @argc: number of arguments passed
 * @argv: pointer array to arguments passed
 *
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
