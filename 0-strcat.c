#include "main.h"

/**
 * _strcat -append src to dest
 *
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0, k;

	while (dest[i] != 0)
	{
		len++;
		i++;
	}
	
	for (k = 0; src[k] != 0; k++)
	{
		dest[len] = src[k];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
