#include <stdio.h>

void print_something(void) __attribute__ ((constructor));

/**
 * print_something - prints a message before the main
 */

void print_somthing(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon y back!\n");
}
