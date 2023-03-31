#include "lists.h"

/**
 * add_node - adds new node at beginning of list
 * @head: list
 * @str: input string idk
 * Return: address of new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	
	temp = (list_t *) malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
