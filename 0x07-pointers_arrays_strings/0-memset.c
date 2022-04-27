#include "main.h"
/**
 * _memset - should fill memory with a constant byte
 * @s: value to declare
 * @b: size of the memory
 * @n: bytes Constant
 *
 * Return: to the Destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b; /*insertion of 1 position s*/
	} /*Ending keyword for*/
	return (s);
}
