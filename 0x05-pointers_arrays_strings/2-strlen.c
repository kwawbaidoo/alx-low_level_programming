#include <stdio.h>
#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: value to return it length
 * Return: not
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
