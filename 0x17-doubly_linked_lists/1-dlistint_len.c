/*
 *  * File: 1-dlistint_len.c
 *   * Auth: Desnet
 */
#include "lists.h"

/**
 *  * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *   * @h: pointer to the list.
 *    * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
