#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns pointer
 * @str: input char pointer
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *stp;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	stp = malloc(sizeof(char) * (i + 1));
	if (stp == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		stp[j] = str[j];
	}
	return (stp);
}
