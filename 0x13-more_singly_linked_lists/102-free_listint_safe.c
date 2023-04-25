#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the listint_t list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    if (h == NULL || *h == NULL)
    {
        return (0);
    }

    size_t count = 0;
    listint_t *slow = *h;
    listint_t *fast = *h;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            break;
        }
    }

    listint_t *start = *h;

    if (fast == NULL || fast->next == NULL)
    {
        while (start != NULL)
        {
            listint_t *temp = start->next;
            free(start);
            start = temp;
            count++;
        }
    }
    else
    {
        listint_t *loop_start = start;

        while (loop_start != slow)
        {
            listint_t *temp = loop_start->next;
            free(loop_start);
            loop_start = temp;
            count++;
        }

        listint_t *loop_node = slow->next;

        while (loop_node != slow)
        {
            listint_t *temp = loop_node->next;
            free(loop_node);
            loop_node = temp;
            count++;
        }

        free(slow);
        count++;
    }

    *h = NULL;
    return (count);
}

