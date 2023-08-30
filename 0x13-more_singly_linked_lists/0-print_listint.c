#include "lists.h"
/**
*print_listint - Function to print the elements in the linked lists
*@h: the head of the linked lists
*Return: Number of lists
*/

size_t print_listint(const listint_t *h)
{
short int length;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
length++;
}
return (length);
}
