#include "main.h"

/**
 * _isupper checks weather char is uppercase
 * @c: the char to be checked
 *
 * Return: 1 if C is uppercase and 0 if lower case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
