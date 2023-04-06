#include "lists.h"

/**
 * free_list  - function that frees a list_t list.
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *aux;

	if (head == NULL)
		return;

	/**/
	while (head != NULL)
	{
		/* aux comienza en head */
		aux = head;
		/* head va guardando la direccion del nodo al que apuntaba */
		head = head->next;
		/* libero el str dentro de aux porque en strdup hay un malloc */
		free(aux->str);
		/* libero el nodo en si, que ya no tiene nada con malloc dentro */
		free(aux);
	}
}
