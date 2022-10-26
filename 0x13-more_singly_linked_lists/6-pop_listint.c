#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 * Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data;

	if (!(*head))
		return (0);

	data = (*head)->n;
	current = (*head)->next;
	free(*head);

	*head = current;
	return (data);
}
