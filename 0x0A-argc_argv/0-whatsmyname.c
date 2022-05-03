#include <stdio.h>
#include "main.h"

/**
 * Main - - Print the Actual name of the program
 * @argc: Initiates Argument counts
 * @argv: vector of strings
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]); /*Printing the program name*/
	return (0);
}
