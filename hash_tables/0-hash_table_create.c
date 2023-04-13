#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly hash table, or NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);

	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		new_ht->array[i] = NULL;
		i++;
	}

	return (new_ht);
}
