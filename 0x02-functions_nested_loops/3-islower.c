#include "main.h"

/**
 * _islower - checks for lowercse
 *
 * @c: the input
 *
 * Return: 1 if lowercase or 0 if upper
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
