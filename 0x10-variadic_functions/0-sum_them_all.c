#include "variadic_functions.h"

/**
 * @n: Total amount of the arguments.
 * sum_them_all - Brings back the sum of all its parameters.
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist
		unsigned int d;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(list,n);
	for (d = 0; d < n; d++)
	{
		sum = sum + va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
