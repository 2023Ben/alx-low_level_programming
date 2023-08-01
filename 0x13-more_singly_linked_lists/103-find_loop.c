#include "lists.h"

/**
 * find_listint_loop - check for a loop in a linkedlist
 * @head: head of the link
 * Return: node where the loop starts or null
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl_ptr, *fs_ptr;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	sl_ptr = head;
	fs_ptr = head;
	sl_ptr = sl_ptr->next;
	fs_ptr = fs_ptr->next->next;

	for (; fs_ptr && fs_ptr->next; )
	{
		if (sl_ptr == fs_ptr)
		{
			break;
		}

		sl_ptr = sl_ptr->next;
		fs_ptr = fs_ptr->next->next;
	}

	if (sl_ptr != fs_ptr)
	{
		return (NULL);
	}

	sl_ptr = head;

	for (; sl_ptr != fs_ptr; )
	{
		sl_ptr = sl_ptr->next;
		fs_ptr = fs_ptr->next;
	}

	return (sl_ptr);
}
