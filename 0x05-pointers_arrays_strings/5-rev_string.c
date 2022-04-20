#include "main.h"
/**
 * rev_string - print string in a reverse manner
 * @s: pointer to be evaluated
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int z = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	z = len - 1;
	for ( ; e < ((z / 2) + 1); e++)
	{
		x = (z - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
