#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar('0' + ch);
		if (ch != 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
