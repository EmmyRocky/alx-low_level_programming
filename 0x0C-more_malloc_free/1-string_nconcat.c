#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 * @s1: string for the first
 * @s2: string for the second
 * @n: maximum bytes of s2
 *
 * *string_nconcat - Function that concatenates two strings
 *
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *w;
	unsigned int v, n1 = 0, n2 = 0, g, h;

	if (s1 != NULL)
	{
		while (s1[n1] != 0)
			n1++;
	}
	else
		s1 = "";
	if (s2 != NULL)
	{
		while (s2[n2] != 0)
			n2++;
	}
	else
		s2 = "";

	if (n < n2)
		v = n;
	else
		v = n2;
	w = malloc(sizeof(char) * (n1 + v + 1));

	if (a == NULL)
		return (NULL);
	for (g = 0; g < n1; g++)
	{
		w[g] = s1[g];
	}
	for (h = 0; h < v; h++)
	{
		w[g + h] = s2[h];
	}
	w[g + h] = 0;

	return (w);
}
