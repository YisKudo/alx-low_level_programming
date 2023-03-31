#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h)
{
	int count = 0, i;

	while (h != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)");
		else
			printf("%s", h -> str);
		h = h -> next;
		count++;
	}

	return (count);
}
