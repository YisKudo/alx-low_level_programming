#include "main.h"

/**
 * _isdigit - checks if the input is a digit.
 * @c: input character.
 * Return: 1 if is its a digit, 0 in other case.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
