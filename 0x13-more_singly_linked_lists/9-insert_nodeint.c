#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint_t list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: the data (integer) for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node;
    listint_t *current_node;
    unsigned int counter;

    if (head == NULL)
    {
        return NULL;
    }

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        return NULL;
    }
    new_node->n = n;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    current_node = *head;
    counter = 0;

    while (current_node != NULL)
    {
        if (counter + 1 == idx)
        {
            new_node->next = current_node->next;
            current_node->next = new_node;
            return new_node;
        }
        current_node = current_node->next;
        counter++;
    }

    free(new_node);
    return NULL;
}
