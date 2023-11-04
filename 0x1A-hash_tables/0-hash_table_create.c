#include "hash_tables.h"
/**
 *hash_table_create - Created the hash table of size.
 *@size: Size of the array.
 *Return: Pointer to the newly created hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i = 0;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	return (new_table);
}
