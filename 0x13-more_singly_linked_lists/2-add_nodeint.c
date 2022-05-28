#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list.
 *
 * @head: parameter which is referred to as the double pointer to the top of the linked list
 * @n: Parameter that holds or contains the value of the number data
 *
 * Return: The new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
