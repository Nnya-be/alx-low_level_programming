#include "lists.h"
/**
*print_listint - Function to print the elements in the linked lists
*@h: the head of the linked lists
*Return : The linked lists
*/

size_t print_listint(const listint_t *h)
{
size_t length;
while (h != NULL)
{
printf("%d\n", h->data);
h = h->next;
length++;
}
return (count);
}
