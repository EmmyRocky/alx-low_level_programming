#include <stdio.h>
#include "main.h"

/**
 * Main - Initiate program
 *
 * @argc: Argument Counts add this
 * @argv: Vector of strings
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
