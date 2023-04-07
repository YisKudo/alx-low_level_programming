#include "main.h"
/**
 * clear_bit - sets value of bit to zero
 * @n: input long int
 * @index: input int
 * Return: 1 ir -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
