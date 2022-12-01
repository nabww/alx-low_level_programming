#include "lists.h"

/**
 * find_listint_loop - check_code
 * @head: start of node
 * return: NULL/address
 **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *m, *n;

	if (head == NULL || head->next == NULL)
		return (NULL);

	m = head->next;
	n= (head->next)->next;

	while (n)
	{
		if (m == n)
		{
			m = head;

			while (m != n)
			{
				m = m->next;
				n = n->next;
			}
			return m;
		}
		m = m->next;
		n = (n->next)->next;
	}
	return (NULL);
}
