#include <stdio.h>
#include "main.h"

/**
 * print_list - prints
 * @h: list to print duh
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t lenght = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		length++;
		h = h->next;
	}
	return (length);
}
