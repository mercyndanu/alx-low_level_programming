#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: number to be printed
 * Return : 0
 */
void print_to_98(int n)
{
	int k, s;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			if (k != 98)
				printf("%d, ", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	} else if (n >= 98)
	{
		for (s = n; s >= 98; s--)
		{
			if (s != 98)
				printf("%d, ", s);
			else if (s == 98)
				printf("%d\n", s);
		}
	}
}
