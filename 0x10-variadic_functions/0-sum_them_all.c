#include "variadic_functions.h"

/**
 * sum_them_all - Brings back the sum of all its parameters
 *
 * @n: the amount of variables will be added to the function
 *
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
