#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to pointer of first node of listint_t list
 * @number: integer to be included in new node
 * Return: address of the new element or NULL if it fails
*/
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *NewNode = NULL;
    listint_t *current;

    current = *head;

    NewNode = malloc(sizeof(listint_t));
    if (NewNode == NULL)
    {
        return (NULL);
    }
    else
    {
        NewNode->n = number;
        NewNode->next = NULL;
    }

    if (*head == NULL)
        *head = NewNode;
    else
    {
        while (current->next != NULL && current->next->n < number)
            current = current->next;
        NewNode->next = current->next;
        current->next = NewNode;
    }
    return (NewNode);
}