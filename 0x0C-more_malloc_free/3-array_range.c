#include "main.h"
#include <stdlib.h>
/**
 * @min: minimum range of values saved
 * @max: maximum range of values saved and number of elements
 * *array_range - creates an array of int
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr, v = 0, w = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (0);
	while (v <= max - min)
		arr[v++] = w++;
	return (arr);
}
