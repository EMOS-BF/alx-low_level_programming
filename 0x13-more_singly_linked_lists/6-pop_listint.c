#include <stdio.h>
#include <stdlib.h>
/**
* pop_listint-deletes the head node of a listint_t
*@head: Adress of the first node
* Return: Integer if success.
*/
int pop_listint(listint_t **head)
{
    listint_t *current = *head;
    listint_t *previous = *head;
    int temp;
    if (*head == NULL)
    {
        return (0);
    }
    else
    {
        *head =current->next;
        temp = current->n;
        free(current);
        current = NULL;
        return (temp);
    }
}
