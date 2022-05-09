#include "main.h"

/**
 * malloc_checked - memory allocaton using malloc
 * @b: allocation of bytes
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if(memory == NULL)
		exit(98);
	return (memory);
}
