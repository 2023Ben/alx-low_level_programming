#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* add_nodeint - adds a new node at the beginning
*               of a listint_t list.
* @head: A pointer to the address of the head
*          of the listint_t list.
* @n: data of the new node
*
* Return: NULL incase of failure else - the address of the new element.
*
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}

new->n = n;
new->next = *head;
*head = new;

return (new);
}

