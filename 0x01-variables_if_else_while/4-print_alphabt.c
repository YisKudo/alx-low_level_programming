#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != q && ch != e)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
