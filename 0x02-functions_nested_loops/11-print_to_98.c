#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: number to be printed
 */
void print_to_98(int n)
{
	int k, s;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			if (k != 98)
				_putchar("%d, ", k);
			else if (k == 98)
				_putchar("%d\n", k);
		}
	} else if (n >= 98)
	{
		for (s = n; s >= 98; s++)
		{
			if (s != 98)
				_putchar("%d, ", s);
			else if (s == 98)
				_putchar("%d\n", s);
		}
	}
}


