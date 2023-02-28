#include "main.h"

/**
 * swap_int - swap value of two integers
 *
 * @a: first int
 * @b: sec int
 *
 * Return: NULL
 */

void swap_int(int *a, int *b)
{
	int aval = *a;
	*a = *b;
	*b = aval;
}
