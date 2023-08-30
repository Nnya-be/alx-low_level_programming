#include "main.h"
/**
 *add_nodeint - adds a node to the start
 *@head: The head of the list
 *@n: The node data
 *Return: The new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
