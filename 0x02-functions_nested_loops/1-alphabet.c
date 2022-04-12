#include "main.h"

/**
 * main -entry point
 * Description: print_alphabet - print alphabet lowercase
 *
 * Return: Always
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
