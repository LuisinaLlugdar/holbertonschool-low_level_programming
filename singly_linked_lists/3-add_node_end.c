#include "lists.h"

/**
 * add_node_end  - adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string for new node
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* definir new_node y aux, datos del tipo list_t */
	/* aux va a ser el que "salta" de un nodo a otro*/
	list_t *new_node, *aux;

	/* si el str pasado es nulo, no tengo nada que guardar en el nodo */
	if (str == NULL)
		return (NULL);

	/* recien aqui pido memoria para el nodo, ya sabiendo que str existe */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* guardo lo que corresponde en cada index del nodo */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	/* esto es seguro porque quiero agregarlo en el ultimo lugar */
	new_node->next = NULL;

	/* si la lista esta vacia, no tiene nodos */
	if (*head == NULL)
		/* el nuevo nodo sera el unico de la lista */
		*head = new_node;
	else
	{
		/* guardo en aux a lo que apunta head */
		aux = *head;

		/* recorro los nodos... */
		while (aux->next != NULL)
			/*...hasta encontrar el que apunta a NULL */
			aux = aux->next;
		/* cuando lo encuentro, hago que apunte al nuevo nodo */
		aux->next = new_node;
	}
	return (new_node);
}
