#include "main.h"
#include <stdlib.h>

/**
 * @min: minimum range of values saved
 * @max: maximum range of values saved and number of elements
 *
 * *array_range - creates an array of int
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int w, v;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL);
	return (NULL);
	for (w = min, v = 0; w <= max; w++, v++)
	{
		*(arr + v) = w;
	}
	return (arr);
}
