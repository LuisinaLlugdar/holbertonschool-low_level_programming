#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the list
 * @idx: index to insert the new node
 * @n: integer to insert as data on the new node
 * Return: the address of the new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *aux;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	aux = *h;

	while (idx != '\0' && aux->next != NULL)
	{
		aux = aux->next;
		idx--;
	}

	if (idx == 1)
		return (add_dnodeint_end(h, n));

	else if (idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;

		new_node->next = aux;
		new_node->prev = (aux->prev);
		(aux->prev)->next = new_node;
		aux->prev = new_node;

		return (new_node);
	}

	else
		return (NULL);
}
