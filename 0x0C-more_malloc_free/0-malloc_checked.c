#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - mallo check
 * @b: input int
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
