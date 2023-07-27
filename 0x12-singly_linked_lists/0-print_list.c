#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to 1st node.
 * Return: the number of node.
 */
size_t print_list(const list_t *h)
{
	char *string;
	unsigned int len;
	int count = 0;

	while (h)
	{
		len = h->len;
		string = h->string;
		if (string)
		{
			printf("[%d] %s\n", len, string);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}