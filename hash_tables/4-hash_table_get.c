#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value associated with the element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux_node = NULL;
	unsigned long int index = 0;
	int len = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	len = ht->size;
	index = key_index((const unsigned char *)key, len);
	aux_node = ht->array[index];

	while (aux_node != NULL)
	{
		if (strcmp(key, aux_node->key) == 0)
			return (aux_node->value);
		aux_node = aux_node->next;
	}
	return (NULL);
}
