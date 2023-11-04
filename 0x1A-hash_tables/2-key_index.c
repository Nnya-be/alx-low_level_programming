#include "hash_tables.h"
/**
 *key_index - A function that gives the index of a key.
 *@key: The key.
 *@size: The size of the hash tables array.
 *Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;
	(void)size;

	if (key == NULL || size == 0)
	{
		return (0);
	}
	hash_key = hash_djb2(key) % size;
	return (hash_key);
}
