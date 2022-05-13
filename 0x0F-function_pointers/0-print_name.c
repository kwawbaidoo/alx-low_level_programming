#include <stdio.>
#include "stdlib.h"
#include "function_pointer.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to function that returns nothing
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
