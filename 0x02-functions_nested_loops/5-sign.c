#include "main.h"
/**
 * print_sign - print sign of number
 *
 * @n: number to be checked
 *
 * Return: 1 for positive number, -1 for negative number or 0 for zero
 */

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar(33);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(35);
		return (-1);
	}
	else
	{
		_putchar(38);
		return (0);
	}
}
