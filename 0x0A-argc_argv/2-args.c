#include <stdio.h>
#include "main.h"
/**
 * main - Initiating Program
 * @argc: Count arguments
 * @argv: vector of string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int u;
	(void)argc;
	(void)argv;

	for (u = 0; u < argc; u++)
		printf("%s\n", argv[u]);

	return (0);
}
