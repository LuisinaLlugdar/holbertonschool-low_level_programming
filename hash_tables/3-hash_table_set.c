#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: string to apply the algorithm to
 * @value: value associated with the key
 * Return: 1 if succeeded, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *aux_node = NULL, *new_node = NULL;
	unsigned long int index = 0;
	int len = 0;

	if (ht == NULL || key == NULL)
		return (0);

	len = ht->size;
	index = key_index((const unsigned char *)key, len);

	aux_node = ht->array[index];

	while (aux_node != NULL)
	{
		if (strcmp(key, aux_node->key) == 0)
		{
			free(aux_node->value);
			aux_node->value = strdup(value);
			return (1);
		}
		aux_node = aux_node->next;
	}
	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
