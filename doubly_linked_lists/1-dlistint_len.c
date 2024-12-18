#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: a pointer to the list.
 *
 * Return: the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
