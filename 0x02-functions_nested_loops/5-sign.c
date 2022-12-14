#include "main.h"
/**
 * print_sign - print sign of number
 *
 * @n: number to be checked
 *
 * Return: 1 for positive number, -1 for negative number or 0 for zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
