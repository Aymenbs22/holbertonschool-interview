#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: the head of the listable list
 * Return: Null or hd.
*/
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	listint_t *slow = head;
	listint_t *fast = head;
	listint_t *hd = head;

	slow = slow->next;
	fast = fast->next->next;

	while (fast->next && fast->next->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			while (slow != hd)
			{
			slow = slow->next;
			hd = hd->next;
	}
		return (hd);
	}
}
	return (NULL);
}
