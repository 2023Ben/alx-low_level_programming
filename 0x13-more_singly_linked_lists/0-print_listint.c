#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of a listint_t list.
* @h: linked list(pointer) of type listint_t to print
*
* Return:The of number of nodes counted
*/
size_t print_listint(const listint_t *h)
{ size_t count = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
