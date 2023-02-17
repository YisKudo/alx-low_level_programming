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
		putchar(',');
	}
	putchar('\n');
	return (0);
}
