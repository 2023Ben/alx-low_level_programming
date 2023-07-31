#include "lists.h"

/**
 * sum_listint - return the sum of all nodes value
 * @head: Head of the linkedlist
 *
 * Return: sum of all node values
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (s);
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
}
