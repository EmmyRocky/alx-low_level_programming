#include "main.h"
/**
 * *the function _strchr - Locates a character in a string
 *
 * @c: this is the character to find
 * @s: the string
 *
 * Return: Pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*This is where we Declare*/
	{
		if (*s == c)
		{
			return (s);
		}

++s;
	}
	if (*s == c)
	{return (s);}
}

