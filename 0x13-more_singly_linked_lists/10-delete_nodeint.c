#include "lists.h"
/**
 *delete_nodeint_at_index - Delete a node at an index
 *@head: head pointer
 *@index: index
 *Return: Success state
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *current;
listint_t *prev;
int i;
if (*head == NULL || index < 0)
{
return  (-1);
}
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp)
return (1);
}
prev = NULL;
current = *head;
(for i = 0; current != NULL && i < index; i++)
{
pre = current;
current = current->next;
}
if (current == NULL)
{
return (-1);
}
prev->next = current->next;
free(current);
return (1);
}
