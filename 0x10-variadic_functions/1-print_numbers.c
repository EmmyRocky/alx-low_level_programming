#include "variadic_functions.h"

/**
 * print_numbers - only prints numbers
 *
 * @separator - this is the string that is meant to be printed b/w numbers
 * @n: number of int passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list;
	unsigned int q;

	separator = (separator !=NULL) ? separator : "";

	va_start(list,n);
	for (q = 0; q < n; q++)
	{
		if (q > 0)
		{
			printf("%d", va_arg(list, int));
		}
		
		printf("\n");
	}
