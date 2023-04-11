#include "search_algos.h"

/**
*@array: is a pointer to the first element of the array to search in
*@size: is the number of elements in array
*@value: is the value to search for
*return: the index of value if true and -1 else
*/

void print_array(int *array, int size)
{
int i;
if (array == NULL || size == 0)
{
return;
}
printf("Searching in array: ");
for (i = 0; i < size; i++)
{
if (i == 0)
{
printf("%d", array[i]);
}
else
{
printf(", %d", array[i]);
}
}
printf("\n");
}

int binary_search(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
{
return (-1);
}
size_t left = 0;
size_t right = size - 1;

while (left < rigth)
{
size_t midle = (left + right)/2;
print_array(&array[left], (right - left) + 1);
if (array[midle] < value)
{
left = midle + 1;
}
else if (array[midle] > value)
{
right = midle - 1;
}
else
{
return midle;
}
}
return (-1);
}
