#include "lists.h"
/**
 *free_list - Function to free a linked list
 *@head : a pointer to the head node
 */
void free_list(list_t *head)
{
while (head->next != NULL)
{
free(head);
head = head->next;
}
}
