#include <stdio.h>

/**
 * main - print all possible combinations of two digit
 *
 * Return: 0
 */
int main(void)
{
	int first_digit;
	int second_digit;

	for (first_digit = 0; first_digit <= 9; first_digit++)
	{
		for (second_digit = 0; second_digit <= 9; second_digit++)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');

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
