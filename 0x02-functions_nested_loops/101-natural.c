#include <stdio.h>
/**
 * main - checks for lowercse
 *
 * 
 *
 * Return: 1 if lowercase or 0 if upper
 */

int main(void)
{
	int i=1024, j = 0;
	while(i > 0)
	{
		if( (i % 3 == 0) || (i % 5 == 0))
		{
			j = i + j;
		}
		i--;
	}
	printf("%d\n", j);
	return (0);
}
