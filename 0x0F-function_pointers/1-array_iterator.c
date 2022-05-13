#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function to execute a function of array
 * @array: pointer to array
 * @size: number of elements in array
 * @action: pointer to function
 * Return: nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int elem;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (elem = 0; elem < size; elem++)
			action(array[elem]);
	}
}
