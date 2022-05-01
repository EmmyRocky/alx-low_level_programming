#include "main.h"

/**
 * *the function _strchr - locates a character in a string
 * @s: The string to search for
 * @c: Character to find
 *
 * Return: a pointer to the first occurrence of the character, c in the string s.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	retrurn (0);
}
