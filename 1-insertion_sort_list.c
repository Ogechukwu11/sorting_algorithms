#include "sort.h"

/**
 * insertion_sort_list - To sort a dll in ascending order
 * @list: A pointer that point to the head pointer
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *second_n, *next_n;

	if (list == NULL || *list == NULL)
		return;

	second_n = (*list)->next;
	while (second_n != NULL)
	{
		next_n = second_n->next;
		while (second_n->prev != NULL && second_n->n < second_n->prev->n)
		{
			second_n->prev->next = second_n->next;
			if (second_n->next != NULL)
				second_n->next->prev = second_n->prev;
			second_n->next = second_n->prev;
			second_n->prev = second_n->prev->prev;

			if (second_n->prev != NULL)
				second_n->prev->next = second_n;
			second_n->next->prev = second_n;
			if (*list == second_n->next)
				*list = second_n;
			print_list(*list);
		}
		second_n = next_n;
	}
}
