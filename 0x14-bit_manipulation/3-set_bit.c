#include "main.h"
/**
 * set_bit - sets bit to 1
 * @n: input int
 * @index: input inut
 * Return: 1 if works or -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n |= 1UL << index;
	return (1);
}
