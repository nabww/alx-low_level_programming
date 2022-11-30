#include "lists.h"

/**
 * print_listint - check code
 * @h: linked list
 * Return: no. of node
 **/


size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
