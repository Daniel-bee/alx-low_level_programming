#include "lists.h"
/**
 * list_len - number of elements in a linked list_t list
 * @h: list
 *
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t nodelen = 0;

	while (h)
	{
		nodelen++;
		h = h->next;
	}
	return (nodelen);
}
