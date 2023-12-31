#include "lists.h"
/**
 * list_len - elements in list
 * @h: linked list.
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
