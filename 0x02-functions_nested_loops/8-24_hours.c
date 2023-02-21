#include "main.h"

/**
 * jack_bauer - checks for lowercse
 *
 * @c: the input
 *
 * Return: 1 if lowercase or 0 if upper
 */

void jack_bauer(void)
{
	int i, j;
	
	for (i = 0; i <= 23; i++)
	{
		_putchar(i);
		_putchar(':');
		for(j = 0; j <= 59; j++)
		{
			_putchar(j);
		}
	}
}
