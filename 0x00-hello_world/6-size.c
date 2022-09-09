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

	printf("Size of a char: %lu byte(s)\n", sizeof(syschar));
	printf("Size of an int: %lu byte(s)\n", sizeof(sysint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(intlong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(intlonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(sysfloat));
	return (0);
}
