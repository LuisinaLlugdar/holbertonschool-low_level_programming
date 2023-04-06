#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list
 * @head: head of the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux;

	if (head == NULL)
		return (0);

	aux = head;

	while (aux != NULL)
	{
		sum = sum + aux->n;
		aux = aux->next;
	}
	return (sum);
}
