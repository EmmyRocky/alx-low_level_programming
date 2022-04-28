#include "main.h"

/**
 *  *_memcpy - duplicates the memory area
 *
 *  @n: figures of bytes to duplicate
 *  @src: memory area to duplicate
 *  @dest: deestination of memory area
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		*(dest + b) = *(src + b);
	}
	return (dest);
}
