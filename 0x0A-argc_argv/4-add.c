#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * isInt - check for integer
 * @num: array of element
 *
 * Return: 0 if integer
 *	    1 if not integer
 */
int isInt(char num[])
{
	int i, j = strlen(num);

	for (i = 0; i < j; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}

/**
 * main - program that add two positive int
 * @argc: number of arguments passed
 * @argv: pointer array to argument passed
 *
 * Return: 0 Success 1 failure
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isInt(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}




