#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lower or uppercase
 * @c : character to check
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
