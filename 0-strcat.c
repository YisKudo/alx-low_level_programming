
#include "main.h"
/**
 * _strcat - concate two string
 * @dest: input str
 * @src: input str
 * Return: pointer to result
 */
char *_strcat(char *dest, char *src)
{
	int num_dest = 0;
	int num_src = 0;
	int i = 0, j = 0, y = 0, x;

	while (dest[i] != '\0')
	{
		i++;
		num_dest++;
	}

	while (src[j] != '\0')
	{
		j++;
		num_src++;
	}

	for (x = num_dest; x <= (num_dest + num_src); x++)
	{
		if (x == (num_dest + num_src))
		{
			dest[x] = '\0';
		}
		else
		{
			dest[x] = src[y];
			y++;
		}
	}

	return (dest);
}