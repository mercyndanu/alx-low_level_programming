#include "main.h"
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: number of elements
 * @c: char
 * Return: pointer or null
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	/**
	 * define value with malloc*
	 */
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}
