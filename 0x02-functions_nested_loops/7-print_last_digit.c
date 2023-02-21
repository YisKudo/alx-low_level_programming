#include "main.h"

/**
 * print_last_digit - checks for lowercse
 *
 * @c: the input
 *
 * Return: 1 if lowercase or 0 if upper
 */

int print_last_digit(int c)
{
	int lst;
	
	c = _abs(c);
	lst = c % 10;
	return (lst);
}
