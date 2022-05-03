#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * Main - Initiating the program that multiplies two numbers
 * @argc: Argument Counter
 * @argv: vector of strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int u, f;
	(void)argc;
	(void)argv;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	u = atoi(argv[1]);
	f = atoi(argv[2]);

	printf("%d\n", u * f);

	return (0);
}
