#include "hash_tables.h"
/**
 *hash_table_set - Adds an element to the hash table
 *@ht: The hash table to add or update the key/value to.
 *@key: The key to use.
 *@value: The value associated with the key.
 *Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	hash_node_t *temp_node = malloc(sizeof(hash_node_t));
	size_t index;

	if (key == NULL || ht == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			if (temp_node->value == NULL)
				return (0);
			return (1);
		}
		temp_node = temp_node->next;
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{	free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
