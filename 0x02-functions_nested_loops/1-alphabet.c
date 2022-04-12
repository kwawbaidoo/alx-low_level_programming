#include "main.h"

/**
 * main -entry point
 * print_alphabet - entry point
 *
 * Return: Always
 */

/**
 * print_alphabet - Print "alphabet"
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
