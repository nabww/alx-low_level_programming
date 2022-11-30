#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: *p to first node
 * Return: *p to 1st node
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
