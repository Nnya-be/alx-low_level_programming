#include "hash_tables.h"
/**
 *hash_table_get- Retrieves a value associated with a key.
 *@ht: The hash table you want to look into.
 *@key: The key you are looking for.
 *Return: The value associated with element, or Null if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *element_node = malloc(sizeof(hash_node_t));
	unsigned long int index;
	
	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	element_node = ht->array[index];

	while (element_node != NULL)
	{
		if (strcmp(element_node->key, key) == 0)
			return (element_node->value);
		element_node = element_node->next;
	}
	return (NULL);
}
