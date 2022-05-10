#include <stdlib.h>
#include "main.h"

/**
 * @size: size of the listed elements
 *
 * @nmemb: number of elements present in the array
 *
 * *_calloc - allocates memory for an array
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int v;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = malloc(nmemb * size);

	if (t == NULL)
		return (NULL);

	for (v = 0; v < (nmemb * size); v++)
	{
		*(t + v) =0;
	}
	return (t);
}
