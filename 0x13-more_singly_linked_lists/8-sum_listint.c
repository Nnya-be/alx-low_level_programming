#include "list.h"
/**
 *sum_listint - Sums all the data in the list
 *@head: Head pointer to the list
 *Return: sum of the data
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
