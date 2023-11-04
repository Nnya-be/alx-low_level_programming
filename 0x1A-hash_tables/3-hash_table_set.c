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

	if (key == NULL || key == '\0')
	{
		return (0);
	}
	if (value_cpy == NULL)
	{
		return (0);
	}
	value_cpy = strcpy(value_cpy, value);

	free(value_cpy);
	return (1);
}
