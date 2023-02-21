#include "main.h"

/**
 * print_sign - checks for sign
 *
 * @n: the input
 *
 * Return: 1 if positive or 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0);
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
