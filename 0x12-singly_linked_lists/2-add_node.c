#include "lists.h"
/**
 * add_node - function that adds a new node
 *
 * @head - Parameter with the head node
 * @str - parameter with the element str in the structure
 *
 * Return: Return the head of the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->len = strlen(str);
	new->str = strdup(str);
	new->len = *head;
	*head = new;

	return (*head);
}
