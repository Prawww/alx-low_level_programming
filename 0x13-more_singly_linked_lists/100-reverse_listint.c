#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer
 * Description: reverse
 * Return: pointer to the head node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;

		(*head)->next = previous;
		previous = (*head);
		(*head) = next;
	}
	(*head) = previous;
	return (*head);
}
