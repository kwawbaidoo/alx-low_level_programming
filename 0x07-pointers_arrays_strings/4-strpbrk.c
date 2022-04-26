#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurence in the string s
 * @s: source string
 * @accept: set of bytes
 * Return: a pointer to the bytes in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
		if (*(s + i) == *(accept + j)
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0)
}
