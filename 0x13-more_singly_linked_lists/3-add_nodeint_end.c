#include "lists.h"
/**
 *add_nodeint_end - Function to add a node to the end
 *@head: The head pointer to the lists
 *@n : The data to be stored
 *Return: The new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
listint_t *current;
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}
return (new_node);
}
