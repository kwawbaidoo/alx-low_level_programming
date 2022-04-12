#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @a : number to start from n
 * Return: 0 or 1
 */

void print_to_98(int a)
{
	while (a < 98)
	{
		printf("%i, ", a);
		a++;
	}
	while (a > 98)
	{
		printf("%i, ", a);
		a--;
	}
	printf("98");
	putchar('\n');
}
