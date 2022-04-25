#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: returns void
 */

void reverse_array(int *a, int n)

{
	int x, y, tmp;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
	tmp = a[x];
	a[x] = a[y];
	a[y--] = tmp;
	}
}
