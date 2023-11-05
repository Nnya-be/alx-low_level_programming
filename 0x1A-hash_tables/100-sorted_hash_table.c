#include "hash_tables.h"
/**
 *shash_table_create - Creates a new hash table.
 *@size :The size of the hash table array.
 *Return: A pointer to the new hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(shash_table_t));

	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->array = malloc(sizeof(shash_node_t) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to add.
 * @value: The value to add.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
    
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
	    ht->shead = new_node;
	    ht->stail = new_node;
	    new_node->sprev = NULL;
	    new_node->snext = NULL;
	}
	else
	{
		if (strcmp(new_node->key, ht->shead->key) < 0)
		{
			new_node->sprev = NULL;
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else
		{
			current_node = ht->shead;
			while (current_node->snext != NULL &&
			       strcmp(new_node->key, current_node->snext->key) > 0)
				current_node = current_node->snext;
			new_node->sprev = current_node;
			new_node->snext = current_node->snext;
			if (current_node->snext != NULL)
				current_node->snext->sprev = new_node;
			current_node->snext = new_node;
		}
	}
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to look for.
 * Return: The value associated with the key or NULL if not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current_node;
	
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	current_node = ht->shead;
	while (current_node != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", current_node->key, current_node->value);
		first = 0;
		current_node = current_node->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int first = 1;
    
	if (ht == NULL)
		return;
	
	printf("{");
	current_node = ht->stail;
	while (current_node != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", current_node->key, current_node->value);
		first = 0;
		current_node = current_node->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *tmp;

	if (ht == NULL)
		return;

	current_node = ht->shead;
	while (current_node != NULL)
	{
		tmp = current_node->snext;
		free(current_node->key);
		free(current_node->value);
		free(current_node);
		current_node = tmp;
	}

	free(ht->array);
	free(ht);
}
