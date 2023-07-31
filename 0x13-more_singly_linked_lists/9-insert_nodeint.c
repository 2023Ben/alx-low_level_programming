#include "lists.h"



/**
 * insert_nodeint_at_index - insert node at the nth index of a linkedlist
 * @idx: index where the node should be added
 * @n: value of the node to be added
 * @head: the head of the list
 * Return: pointer to the head of the list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *c, *node;

	if (*head == NULL)
		return (NULL);

	node = malloc(sizeof(*node));

	if (node == NULL)
	{
		free(node);
		node = NULL;
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	c = *head;

	if (idx == 0)
	{
		node->next = c;
		*head = node;
		return (*head);
	}

	while (--idx)
	{
		if (c == NULL || c->next == NULL)
			return (NULL);
		c = c->next;
	}
	node->next = c->next;
	c->next = node;
	return (node);
}
