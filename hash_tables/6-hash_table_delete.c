#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table you want to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux_node = NULL, *next_node = NULL;
	int i = 0, len = 0;

	if (ht == NULL)
		return;

	if (ht->size == 0)
	{
		free(ht);
		return;
	}

	len = ht->size;

	while (i < len)
	{
		aux_node = ht->array[i];
		while (aux_node != NULL)
		{
			next_node = aux_node->next;
			free(aux_node->key);
			free(aux_node->value);
			free(aux_node);
			aux_node = next_node;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
