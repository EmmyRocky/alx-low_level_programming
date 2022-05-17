#include "variadic_functions.h"

/**
 * @n: Total amount of the arguments.
 * sum_them_all - Brings back the sum of all its parameters.
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
