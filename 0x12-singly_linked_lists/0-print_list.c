#include "lists.h"

/**
 * print_list - all elements in list_t
 * @h: linked list
 * Return: no. of items
 **/

size_t print_list(const list_t *h)
{
	size_t nelem;
	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
