#include "lists.h"

/**
 * add_node  - adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: string for new node
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	/* definir new_node, dato del tipo list_t */
	list_t *new_node;

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

	/* si la lista era vacia, y el head ya apuntaba a NULL... */
	if (*head == NULL)
		/*...ahora new_node apunta a NULL y es el unico nodo de la lista */
		new_node->next = NULL;
	else
		/* next de new_node apunta a lo que originalmente apuntaba head */
		new_node->next = *head;

	/* head apunta a new_node y pasa a ser el primer nodo */
	*head = new_node;
	return (new_node);
}
