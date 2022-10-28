#include "main.h"
/**
* set_bit - Entry Point
* @n: input
* @index: index
* Return: 1 if work and 0 if not
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int temp;
if (index > 63)
{
return (-1);
}
temp = 1 << index;
*n = (*n | temp);
return (1);
}
