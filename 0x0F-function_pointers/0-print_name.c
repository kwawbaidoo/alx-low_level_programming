#include "function_pointer.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to function that returns nothing
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	return name;
}

int main(void)
{
	print_name("%s\n", f("Francis"));
	return (0);
}
