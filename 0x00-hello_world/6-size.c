#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char syschar;
	int sysint;
	long intlong;
	long long intlonglong;
	float sysfloat;

	printf("Size of a char: %lu byte(s), sizeof(syschar)\n");
	printf("Size of an int: %lu byte(s), sizeof(sysint)\n");
	printf("Size of a long int: %lu byte(s), sizeof(intlong)\n");
	printf("Size of a long long int: %lu byte(s), sizeof(intlonglong)\n");
	printf("Size of a float: %lu byte(s), sizeof(sysfloat)\n");
	return (0);
}
