#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concat two strng
 * @s1: first string
 * @s2: second string
 * Return: pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, sum, m;
	char *strout;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	sum = i + j;
	strout = malloc(sizeof(char) * (sum + 1));
	if (strout == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
	{
		strout[k] = s1[k];
	}
	m = j;
	for (j = 0; j <= m; k++, j++)
	{
		strout[k] = s2[j];
	}
	return (strout);
}
