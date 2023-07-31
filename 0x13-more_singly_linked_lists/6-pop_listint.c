#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t list.
* @head: Pointer to the address of the
*        head of the listint_t list.
*
* Return: If the linked list is empty - 0 - The head node's data (n).
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (*head == NULL)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
