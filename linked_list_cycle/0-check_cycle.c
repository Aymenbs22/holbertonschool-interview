#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * check_cycle - function in C that checks if a singly linked list has a cycle in it
 * @list: list
 * @return: return
*/
int check_cycle(listint_t *list)
{
	listint_t *onestep = list;
	listint_t *twostep = list;

	while (onestep && twostep && onestep->next && twostep->next->next != NULL)
	{
		onestep = onestep->next;
		twostep = twostep->next->next;
		if (onestep == twostep)
			return(1);
}
	return(0);
}

