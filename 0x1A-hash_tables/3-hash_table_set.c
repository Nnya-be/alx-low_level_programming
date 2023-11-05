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
	char *value_cpy = (char *)malloc(strlen(value) + 1);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	hash_node_t *temp_node = malloc(sizeof(hash_node_t));
	size_t index;

	if (key == NULL)
	{
		return (0);
	}
	if (ht == NULL)
	{
		return (0);
	}
	if (value_cpy == NULL || new_node == NULL)
	{
		return (0);
	}
	value_cpy = strcpy(value_cpy, value);
	/*Getting The index to store */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the index position is to an Null pointer*/
	if (ht->array[index] == NULL)
	{
		/*Assigning The new node to the head pointer*/
		ht->array[index] = new_node;
		return (1);
	}
	/*If head is not Null then we update to point to new node*/
	temp_node = ht->array[index];
	new_node->next = temp_node->next;
	temp_node->next = new_node;

	free(value_cpy);
	free(new_node);
	free(temp_node);
	return (1);
}
