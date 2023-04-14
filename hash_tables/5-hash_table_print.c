#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table you want to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux_node = NULL;
	int i = 0, len = 0;
	char *separator = "";

	if (ht == NULL)
		return;

	len = ht->size;

	printf("{");
	while (i < len)
	{
		aux_node = ht->array[i];
		while (aux_node != NULL)
		{
			printf("%s'%s': '%s'", separator, aux_node->key, aux_node->value);
			separator = ", ";
			aux_node = aux_node->next;
		}
		i++;
	}
	printf("}\n");
}
