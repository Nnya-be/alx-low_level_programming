#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *main - check the code 
 *Return:Always 0
 */
int main(void)
{
  list_t *head;

  head = NULL;
  
  add_node_end(&head, "Alexandro");
  add_node_end(&head, "Asaia");
  add_node_end(&head, "Augustin");
  add_node_end(&head, "Bennett");
  add_node_end(&head, "Chandler");

  print_list(head);
  free_list(head);
  head = NULL;

  return (0);
}
