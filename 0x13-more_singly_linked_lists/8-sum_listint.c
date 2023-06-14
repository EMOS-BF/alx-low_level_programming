#include "lists.h"
#include <stdlib.h>
/**
* sum_listint - Sum all of the data (n) in a list.
* @head: Address of the first node of the list.
* Return: Integer.
**/
int sum_listint(listint_t *head)
{
listint_t *current = head;
unsigned int sum = 0;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
