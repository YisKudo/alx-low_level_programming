#include "lists.h"

/**
 * add_node_end - adds node at end of list
 * @head: first node
 * @str: string to be added
 * Return: address of NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *curr = *head;

	temp = (list_t *) malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);

	if (*head == NULL)
		*head = temp;
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = temp;
	}
	return (temp);
}
