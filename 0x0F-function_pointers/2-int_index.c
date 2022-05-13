#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches an integer
 * @array: pointer array
 * @size: number of elements in array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: first element index, on succes or return -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int value;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (value = 0; value < size; value++)
	{
		if (cmp(array[value] != 0)
			return (value);
	}
	return (-1);
}
