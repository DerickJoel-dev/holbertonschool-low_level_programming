#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n)
 * of a dlistint_t linked list.
 * @head: a pointer to the list.
 *
 * Return: the sum of all the data(n),
 * 0 if list is empty.
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head == NULL)
		{

			return (0);

		}

		else
		{
			sum += head->n;
			head = head->next;
		}

	}

	return (sum);

}
