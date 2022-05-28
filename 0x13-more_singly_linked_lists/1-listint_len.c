#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: Parameter Pointer straight up to the top of the linked list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
