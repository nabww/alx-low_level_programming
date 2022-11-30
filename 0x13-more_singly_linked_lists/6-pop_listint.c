#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: start of list
 * Return: dta in the lelemts deletes
 **/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
