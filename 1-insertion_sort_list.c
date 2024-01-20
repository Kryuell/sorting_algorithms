#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    listint_t *current = (*list)->next;
    listint_t *insertion_point;

    while (current != NULL)
    {
        insertion_point = current;

        while (insertion_point->prev != NULL && insertion_point->n < insertion_point->prev->n)
        {
            /* Swap nodes */
            insertion_point->prev->next = insertion_point->next;
            if (insertion_point->next != NULL)
                insertion_point->next->prev = insertion_point->prev;
            insertion_point->next = insertion_point->prev;
            insertion_point->prev = insertion_point->next->prev;
            insertion_point->next->prev = insertion_point;

            if (insertion_point->prev == NULL)
                *list = insertion_point;
            else
                insertion_point->prev->next = insertion_point;

            print_list(*list);
        }
        current = current->next;
    }
}
