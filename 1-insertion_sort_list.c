#include <stdio.h>
#include "sort.h"

/**
* insertion_sort_list - Sorts a doubly linked list of int in ascending order
*                       using the Insertion sort algorithm
* @list: Pointer to the head of the doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
	    listint_t *current, *insert;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;

	while (current != NULL)
	{
		insert = current;

		while (insert->prev != NULL && insert->n < insert->prev->n)
		{
			/* Swap nodes */
			insert->prev->next = insert->next;
			if (insert->next != NULL)
				insert->next->prev = insert->prev;
			insert->next = insert->prev;
			insert->prev = insert->next->prev;
			insert->next->prev = insert;

			if (insert->prev == NULL)
				*list = insert;
			else
				insert->prev->next = insert;

			print_list(*list);
		}
		current = current->next;
	}
}
