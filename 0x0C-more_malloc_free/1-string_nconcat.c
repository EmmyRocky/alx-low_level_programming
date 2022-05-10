#include "main.h"

/**
 * @s1: number one string
 * @s2: number two string
 * string_nconcat - concatenates two strings
 *
 * @n: max bytes of s2
 *
 * Return: pointer points to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *g;
	unsigned int size1 = 0, size2 = 0, r;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		S2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n =  size2;
	g = malloc((size1 + n + 1) * sizeof(char));

	if (g == NULL)
		return (0);

	for (; r < (size1; r++)
			{
			g[r] = s1[r];
			}

			for (; r < (size1 + n); r++)
			{
			g[r] = s2[r - size1];
			}
			g[r] = '\0';

			return (g);
			}
