#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting form n to 98
 * Return: Always 0.
 */
void print_to 98(int n)
{

	int upper = 98;

	if (n > upper)
	{
		while (n >= upper)
		{
			if (n != upper)
			{
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	else
	{
		while (n <= upper)
		{
			if (n != upper)
			{
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	putchar (10);
}
