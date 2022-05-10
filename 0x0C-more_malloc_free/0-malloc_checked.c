#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - this is going to be a function that allocates memory
 *
 * b: parameter
 * Return: Return the Pointer.
 *
 */
void *malloc_checked(unsigned int b)
{
	char *u;

	u = malloc(sizeof(char) * b);

	if (u == NULL)
	{
		exit(98);
	}

	return (u);
}
