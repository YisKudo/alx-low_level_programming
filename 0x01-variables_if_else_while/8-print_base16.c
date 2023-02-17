#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char ch;
	int numbr;

	for (numbr = 0; numbr <= 9; numbr++)
	{
		putchar('0' + numbr);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
