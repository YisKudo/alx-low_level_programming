#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s", h -> len, h -> str);
		
		printf("\n");
		h = h -> next;
		count++;
	}

	return (count);
}
