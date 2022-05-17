#include "variadic_functions.h"

/**
 * print_numbers - only prints numbers
 *
 * @separator - this is the string that is meant to be printed b/w number
 * @n: number of int passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	separator = (separator !=NULL) ? separator : "";

	va_start(list,n);
	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(list, int));
	}
		
		putchar(10);
}
