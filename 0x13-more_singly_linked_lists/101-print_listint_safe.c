#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the listint_t list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *slow = head;
    const listint_t *fast = head;

    if (head == NULL)
    {
        exit(98);
    }

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            break;
        }
    }

    if (fast == NULL || fast->next == NULL)
    {
        for (const listint_t *temp = head; temp != NULL; temp = temp->next)
        {
            printf("[%p] %d\n", (void *)temp, temp->n);
            count++;
        }
    }
    else
    {
        const listint_t *start = head;

        while (start != slow)
        {
            printf("[%p] %d\n", (void *)start, start->n);
            count++;
            start = start->next;
        }

        printf("[%p] %d\n", (void *)start, start->n);
        count++;

        const listint_t *temp = start->next;

        while (temp != start)
        {
            printf("[%p] %d\n", (void *)temp, temp->n);
            count++;
            temp = temp->next;
        }

        printf("-> [%p] %d\n", (void *)temp, temp->n);
    }

    return count;
}

