#include "lists.h"
/**
 * add_node_end - function that adds a new node jst @ d end of d list_t list
 *
 * @head: Parameter that point to the head of linked list
 *
 * @str: Parameter wit d string
 *
 * Return: the address of the new NULL or the element if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (new);
}
