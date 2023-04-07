#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: input char
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int cnv = 0;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		cnv = (cnv << 1) | (*b - '0');
		b++;
	}
	return (cnv);
}
