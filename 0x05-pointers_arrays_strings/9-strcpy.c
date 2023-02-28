#include "main.h"
/**
 * _strcpy - copy string
 * @dest: input array
 * @src: input array
 * Return: array
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int num = 0;
	int j;

	while (src[i] != '\0')
	{
		num++;
		i++;
	};
	for (j = 0; j <= num; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
