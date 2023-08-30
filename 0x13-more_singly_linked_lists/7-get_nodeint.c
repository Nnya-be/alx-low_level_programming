#include "lists.h"
/**
 *get_nodeint_at_index - Function to output the node at a numbers data
 *@head: Head pointer
 *@index: index to access
 *Return: Node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int counter;
while (head != NULL)
{
if (count == index)
{
return (head);
}
head = head->next;
counter++;
}
return (NULL);
}
