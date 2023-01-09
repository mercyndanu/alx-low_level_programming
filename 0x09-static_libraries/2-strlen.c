#include "main.h"
/**
 * _strlen -  returns the length of a string.
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int l = 0;

	for (; *s++;)
		l++;

	return (l);
}
