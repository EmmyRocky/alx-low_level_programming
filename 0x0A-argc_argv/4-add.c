#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "main.h"
/**
 * isNumeric - ascertains if stirings are numeric
 *
 * @s: string to access
 *
 * Return: true if is numeric
 */
bool isNumeric(char *s)
{
	int u;

	for (u = 0; s[u] != '\0'; u++)
	{
		if (s[u] < 48 || s[u] > 57)
		{
			return (false);
		}
	}
	return (true);
}


int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	(void)argc;
	(void)argv;

	for (i = 1; i < argc; i++)
	{
		if (!isNumeric(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	print("%sd\n", sum);

	return (0);
}
