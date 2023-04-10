#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: in the string
 * @c: occurrence of the character
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
