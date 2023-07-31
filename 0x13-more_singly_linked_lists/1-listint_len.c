#include <stdio.h>
#include "lists.h"

/**
* listint_len - Returns the number of elements
*               in a linked  list.
* @h: A pointer to the head of the linked list.
*
* Return: The number of elements in the linked list.
*/
size_t listint_len(const listint_t *h)
{
size_t num1 = 0;
while (h)
{
num1++;
h = h->next;
}

return (num1);
}
