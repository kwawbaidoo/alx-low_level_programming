#include "main.h"

/**
 * print_times_table - Prints times table
 * @x : times table to use
 *
 */

void print_times_table(int x)
{
	int a = 0, rep, b;
	
	if (x < 0 || x > 15)
		return;

	while (a <= x)
	{
		for (b = 0; b <= x; b++)
		{
			rep = a * b;
			if (a == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}

			else
			{
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}

			if (b < x)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
