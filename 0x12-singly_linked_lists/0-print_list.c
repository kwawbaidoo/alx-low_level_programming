#include "lists.h"

/**
 * print_list - function that priints all the elements of a list_t list
 * @h: Parameterwith the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			_putchar("[0] (nil)\n");
		}
		else
		{
			_putchar("[%u] %s\n", h->len, h->str);
		}
		h = h->nest;
	}
	return (i);
}
