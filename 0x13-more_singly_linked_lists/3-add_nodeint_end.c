#include "lists.h"

/**
 * add_nodeint_end - adds node at end of list
 * @head: first node
 * @n: string to be added
 * Return: address of NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *curr = *head;

	temp = (listint_t *) malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;

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
