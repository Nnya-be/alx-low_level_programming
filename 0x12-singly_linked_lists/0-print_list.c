#include "lists.h"
/**
 *print_list - Prints the content of a linked list
 *@h: The linked list
 *Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
i++;
}

return (i);
}
