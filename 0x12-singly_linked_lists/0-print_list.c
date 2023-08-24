#include "main.h"
/**
 *print_list - Prints the content of a linked list
 *@h: The linked list
 *Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
int i;
for (i = 1; h->next != NULL; i++)
{
if (h->str == NULL)
{
h->str = "(nil)";
h->len = 0;
}
printf("[%d] %s", h->len, h->str);
}
return (i);
}
