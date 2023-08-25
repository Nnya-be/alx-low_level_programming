#include "lists.h"

/**
 *list_len - Function that returns the number of nodes in a list
 *@h: The linked lists
 *Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
unsigned short int num_nodes;
while (h != NULL)
{
num_nodes += 1;
h = h->next;
}
return (num_nodes);
}
