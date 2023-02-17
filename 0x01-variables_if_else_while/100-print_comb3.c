#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int ch = 0;
	int hc = 0;

	while (2 > 1)
	{
		hc++;
		if (ch < hc)
		{
			putchar('0' + ch);
			putchar('0' + hc);
			putchar(',');
			putchar(32);
		if (hc == 9)
		{
			ch++;
			hc = ch - 1;
		}
		}
		if (ch == 9 && hc == 8)
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
