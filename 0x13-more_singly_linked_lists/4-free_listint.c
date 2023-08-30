#include "lists.h"
/**
 *free_listint - Function to free the linked lists
 *@head: The head pointer
 */
void free_listint(listint_t *head)
{
listint_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
