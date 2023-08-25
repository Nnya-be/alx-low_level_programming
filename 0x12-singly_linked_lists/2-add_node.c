#include "lists.h"
/**
 *add_node - Function to add a node to the begininng of the list
 *@str : The string to be passed
 *@head: The pointer to the head
 *Return:The pointer to the list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
if (str == NULL)
{
return (NULL);
}
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = strdup(str);
new_node->len = strlen(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = *head;
*head = new_node;
return (new_node);
}
