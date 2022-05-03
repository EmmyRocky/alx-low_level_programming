#include <stdio.h>

/**
 * @argc: This is the argument counter in the program
 * @argv: Contains the vector of strings
 * main - Print out the name of the program
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
