#include "lists.h"

/**
 * print_listint_safe - a function that
 * prints a listint_t linked list.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t _ctr = 0;
	size_t _nnum;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		_ctr++;
		tmp_n = tmp_n->next;
		l_n = head;
		_nnum = 0;
		while (_nnum < _ctr)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (_ctr);
			}
			l_n = l_n->next;
			_nnum++;
		}
		if (!head)
			exit(98);
	}
	return (_ctr);
}
