#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: double pointer to the head of the listint_t list
 * @index: the index of the node that should be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current_node;
    listint_t *previous_node;
    unsigned int counter;

    if (head == NULL || *head == NULL)
    {
        return -1;
    }

    current_node = *head;

    if (index == 0)
    {
        *head = current_node->next;
        free(current_node);
        return 1;
    }

    previous_node = NULL;
    counter = 0;

    while (current_node != NULL)
    {
        if (counter == index)
        {
            previous_node->next = current_node->next;
            free(current_node);
            return 1;
        }
        previous_node = current_node;
        current_node = current_node->next;
        counter++;
    }

    return -1;
}

