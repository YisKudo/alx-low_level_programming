#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: pointer to the head of the list_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
