#include "main.h"
/**
 * _strcpy - copy string with terminator
 * @dest: value to be evaluate
 * @src: value to beevaluated
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int a = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; a < i; a++)
	{
		dest[a] = src[a];
	}
	dest[i] = '\0';
	return (dest);
}
