#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * @index: index of the node to return, starting at 0
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *current_node;
    unsigned int counter;

    current_node = head;
    counter = 0;

    while (current_node != NULL)
    {
        if (counter == index)
        {
            return current_node;
        }
        current_node = current_node->next;
        counter++;
    }

    return NULL;
}

