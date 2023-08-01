#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the first element of the list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size;
	listint_t *current_node, *next_node;

	if (h == NULL || *h == NULL)
		return (0);

	size = 0;
	current_node = *h;

	while (current_node != NULL)
	{
		size++;
		next_node = current_node->next;
		if (current_node < next_node)
			break;

		free(current_node);
		current_node = next_node;
	}

	*h = NULL;

	return (size);
}
