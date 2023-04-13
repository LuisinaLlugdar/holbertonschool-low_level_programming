#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly hash table, or NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*pointer to struct that creates a new hash table*/
	hash_table_t *new_ht;
	unsigned long int i;

	/*if size doesn't exist, the hash table either*/
	if (size == 0)
		return (NULL);

	/*memory to allocate everything that the struct hash_table_t has*/
	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	/*memory to allocate "size" number of nodes*/
	new_ht->array = malloc(sizeof(hash_node_t *) * size);

	/*if malloc for the array fails...*/
	if (new_ht->array == NULL)
	{
		/*...free the previously allocated memory*/
		free(new_ht);
		return (NULL);
	}

	i = 0;
	/*inicialize every index of the array to NULL*/
	while (i < size)
	{
		new_ht->array[i] = NULL;
		i++;
	}

	return (new_ht);
}
