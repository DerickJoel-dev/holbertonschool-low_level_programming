#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: a pointer to the list.
 *
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (h == NULL)
		{
		}

		else
		{
			printf("%d\n", h->n);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
