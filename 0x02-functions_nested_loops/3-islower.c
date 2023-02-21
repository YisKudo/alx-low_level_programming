#include "main.h"

/**
 * _islower - checks for lowercse
 *
 * Return: void
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
