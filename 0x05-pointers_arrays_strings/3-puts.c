#include "main.h"
/**
 * _puts - print a string
 * @str: value to be printed
 * Return: not
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar(c[m]);

	}

	_putchar('\n');
}
