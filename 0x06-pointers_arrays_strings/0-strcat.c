#include "main.h"
/**
*_strcat - concatenates two strings
*@dest: A pointer to a character that will be changed
*@src: A pointer to a character that will also be changed
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
