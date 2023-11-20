#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t new_node;
	const listint_t *current = NULL;
	const listint_t *prev = NULL;

	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		prev = head;
		new_node = 0;

		while (new_node < count)
		{
			if (current == prev)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			prev = prev->next;
			new_node++;
		}
		if (head == NULL)
			exit(98);
	}
	return (count);
}
