#include "lists.h"
/**
 *pop_listint - Functino the delete the head node
 *@head: The head pointer
 *Return: Head data
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (*head == NULL)
{
return (0);
}
temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);
return (n);
}
