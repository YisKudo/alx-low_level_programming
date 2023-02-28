#include "main.h"
/**
 * rev_string - reverse string
 * @s: input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int num = 0;
	char c;
	int j;

	while (s[i] != '\0')
	{
		num++;
		i++;
	};
	for (j = 0; j < num; j++)
	{
		c = s[j];
		s[j] = s[num - 1];
		s[num - 1] = c;
		num--;
	}
}
