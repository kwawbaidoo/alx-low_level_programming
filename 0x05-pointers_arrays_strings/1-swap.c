#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the values of the integers
 * @a: first value to swap
 * @b: decond value to swap
 * Return: not
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
