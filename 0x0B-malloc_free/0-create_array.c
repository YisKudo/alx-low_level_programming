#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *create_array - creates array of chars
 *
 * @size: size 
 * @c: input char
 * Return: null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return NULL;
	str = malloc(sizeof(char) * size);
	str[0] = c;
	return (str);
}
