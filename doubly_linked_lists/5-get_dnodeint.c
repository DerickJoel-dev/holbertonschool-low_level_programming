#include "lists.h"

/**
 * get_dnodeint_at_index - Returns rhe nth node of a dlistint_t linked list.
 * @head: a pointer to the list.
 * @index: the index of the node, starting from 0.
 *
 * Return: the nth node of a dlistint_t linked list,
 * NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{

			return (NULL);

		}
		head = head->next;
	}

	return (head);

}
