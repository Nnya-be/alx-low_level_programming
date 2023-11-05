#include "hash_tables.h"
/**
 *hash_table_print - A function that prints a hash table.
 *@ht: The hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *array_node = malloc(sizeof(hash_node_t));
	unsigned long int i = 0;
	int first_node = 1;

	printf("{");
	if (ht == NULL || ht->array == NULL)
	{
		printf("}\n");
		return;
	}
	while (i < ht->size)
	{
		array_node = ht->array[i];
		while (array_node != NULL)
		{
			if (!first_node)
				printf(", ");
			printf("\'%s\': \'%s\'", array_node->key, array_node->value);
			first_node = 0;
			array_node = array_node->next;
		}
		i++;
	}
	printf("}\n");
}
