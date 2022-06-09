#include "lists.h"

/**
 * get_dnodeint_at_index - locates a node in a dlistint_t list.
 * @head: head of the dlistint_t list.
 * @index: node to locate.
 *
 * Return: NULL-if the node does not exist
 *       : otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
