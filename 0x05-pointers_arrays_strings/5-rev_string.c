#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: string character
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0, j, k;
	char u;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	for (j = 0; k >= 0 && j < k; k--, j++)
	{
		u = s[j];
		s[j] = s[k];
		s[k] = u;
	}
}
