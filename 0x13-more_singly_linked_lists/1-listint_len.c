#include "lists.h"
/**
 *listint_len - Counts the number of nodes in the lists
 *@h: The lists head
 *Return: Lenght of lists
 */
size_t listint_len(const listint_t *h)
{
short int length;
while (h != NULL)
{
h = h->next;
length++;
}
return (length);
}
