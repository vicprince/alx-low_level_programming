#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int multi = y * x;

			if (y == 0)
			{
				_putchar('0');
			} else if (multi <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
