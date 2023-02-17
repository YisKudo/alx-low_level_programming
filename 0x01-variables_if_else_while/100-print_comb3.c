#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int ch = 0;
	int hc = 1;
	
	while (2 > 1){
		if (ch < hc)
		{
			putchar('0' + ch);
			putchar('0' + hc);
			if (ch != 8 && hc != 9)
			{
				putchar(',');
			}
			
			putchar(32);
			if (ch == 8 && hc == 9)
			{
				break;
			}
			ch++;
			hc++;
		}
	putchar('\n');
	return (0);
}
