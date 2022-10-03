#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - function that creates an array of chars, and initializes it
*with a specific char.
* @size: This is the length of the array
* @c: This is the input character
* Return: An Array Initialized with the specific char
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
p = (char *) malloc(size * sizeof(char));
if (p == NULL)
	return (NULL);
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (s);
}
