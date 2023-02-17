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
	int zc = 1;
	while (2 > 1)
	{
		hc++;
		if (zc < hc && zc > ch)
		{
			putchar('0' + ch);
			putchar('0' + zc);
			putchar('0' + hc);
			if (ch != 8)
			{
				putchar(',');
				putchar(32);
			}
		if (hc == 9)
		{
			zc++;
			hc = zc - 1;
			if (zc == 8)
			{
				hc++;
			}
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

