#include "sort.h"

/**
 * insertion_sort_list - sorts a list using insertion sort
 * algorithm.
 * @list: the linked list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *t_next, *t_prev;
	int temp_val;

	/* Initializing a temp pointer to the second node of list*/
	if (list && *list)
		temp = (*list)->next;
	while (temp != NULL)
	{
		/* Assigning the value at the second node to a variable*/
		temp_val = temp->n;
		/* Assigning the next member of the struct to a pointer */
		t_next = temp->next;
		/* Assigning the prev member of the struct to a pointer */
		t_prev = temp->prev;
		while (t_prev && t_prev->n > temp_val)
		{
			/* Changing the links of each nodes */
			t_prev->next = t_next;
			if (t_next)
				t_next->prev = t_prev;
			temp->next = t_prev;
			temp->prev = t_prev->prev;
			if (t_prev->prev)
				t_prev->prev->next = temp;
			else
				*list = temp;
			t_prev->prev = temp;

			t_prev = temp->prev;
			t_next = temp->next;
			print_list(*list);
		}
		temp = t_next;
	}
}
