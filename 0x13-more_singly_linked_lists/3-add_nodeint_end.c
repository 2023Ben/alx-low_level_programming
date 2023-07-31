#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the
*                   end of a listint_t list.
* @head: Pointer to the address of the
*        head of the linked list.
* @n: The data for the new node to contain.
*
* Return: If the function fails - NULL.
*         else - the address of the new element.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *last;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
*head = new;

else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}

return (*head);


}
