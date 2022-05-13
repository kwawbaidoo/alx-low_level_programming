#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches an integer
 * @array: pointer array
 * @size: number of elements in array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: first element index, on success or return -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int elem;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (elem = 0; elem < size; elem++)
	{
		if (cmp(array[elem] != 0)
				return (elem);
	}
	return (-1);
}
