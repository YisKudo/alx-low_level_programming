#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int started = 0;
	num = 1UL << 63;

	for (; num > 0; num >>= 1)
	{
		if (n & num)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
	}

	if (!started)
	{
		_putchar('0');
	}
}
