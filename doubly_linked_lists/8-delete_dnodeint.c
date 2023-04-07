#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index given
 * @head: head of the list
 * @index: index to delete the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;

	if (head == NULL || *head == NULL)
		return (-1);

	aux = *head;

	if (index == 0)
	{
		*head = aux->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(aux);
		return (1);
	}

	while (index != '\0' && aux->next != NULL)
	{
		aux = aux->next;
		index--;
	}

	if (index == 0)
	{
		(aux->prev)->next = (aux->next);
		(aux->next)->prev = (aux->prev);
		free(aux);
		return (1);
	}

	else if (index == 1)
	{
		(aux->prev)->next = NULL;
		free(aux);
		return (1);
	}

	return (-1);
}

