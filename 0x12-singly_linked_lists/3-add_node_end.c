#include "lists.h"
/**
 *add_node_end - Adds a node to the end of the lists
 *@head: The head of the lists
 *@str: The string to be stored
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *temp_node;
temp_node = *head;

if (str == NULL)
{
return (NULL);
}
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
if (*head == NULL)
{
*head = new_node;
}
else
{
temp_node = *head;
while (temp_node->next != NULL)
{
temp_node = temp_node->next;
}
temp_node->next = new_node;
}
return (new_node);
}
