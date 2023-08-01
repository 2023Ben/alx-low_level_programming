#include "lists.h"

/**
 * free_listint_safe - prints all nodes of a linkedlist
 * @h: head of the list
 * Return: number of node printed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;

	if (h == NULL)
	{
		return (l);
	}

	for (; *h != NULL; )
	{
		listint_t *tmp;

		l++;
		if (*h > (*h)->next)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}

		else
		{
			free(*h);
			*h = NULL;
		}

	}

	*h = NULL;

	return (l);
}
