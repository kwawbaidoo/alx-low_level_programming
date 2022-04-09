#include <stdio.h>

/**
 * main - Print combinations of three digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = 0; first <= 9; first++)
	{
		for (second = first + 1; second <= 9; second++)
		{
			for (third = second + 1; third <= 9; third++)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');

				if (first <= 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}

