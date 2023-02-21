#include "main.h"

/**
 * _isalpha - checks for lowercse
 *
 * @c: the input
 *
 * Return: 1 if lowercase or 0 if upper
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
