#include "lists.h"

/**
 * reverse_listint - reverses a linkedlist
 * @head: head of the list
 * Return: the head of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	for (; *head != NULL; )
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}
	*head = p;

	return (*head);
}
