#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * is_palindrome - function in C that checks if linked list is a palindrome
 * @head: pointer to pointer of first node of listint_t list
 * Return: 1 if the list is a palindrome, 0 otherwise
*/

int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
	int size = 0, i = 0, j = 0;

	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	int arr[size];

	current = *head;
	while (current != NULL)
	{
		arr[i++] = current->n;
		current = current->next;
	}
	for (j = 0; j < size / 2; j++)
	{
		if (arr[j] != arr[size - j - 1])
		{
			return (0);
		}
	}
	return (1);
}
