#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: the index of the node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);

	aux = head;

	while (index != '\0' && aux->next != NULL)
	{
		aux = aux->next;
		index--;
	}
	/*analizo porque salio del while: index == '\0' o aux->next == NULL*/
	if (index == 0)
		return (aux);
	else
		return (NULL);
}
