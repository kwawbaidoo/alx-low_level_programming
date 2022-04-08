#include <stdio.h>

/**
 * main - print all possible combinations of two digit 00 to 89
 *
 * Return: 0
 */
int main(void)
{
	int first_digit;
	int second_digit;

	for (first_digit = 0; first_digit <= 8; first_digit++)
	{
		for (second_digit = 1; second_digit <= 9; second_digit++)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '1');

		if(!(first_digit == 9 && second_digit == 9))
		{
			putchar(',');
			putchar(' ');
		}

		}	
	}
	putchar('\n');

	return (0);
}
