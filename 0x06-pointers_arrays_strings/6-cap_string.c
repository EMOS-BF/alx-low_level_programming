#include "main.h"
/**
* cap_string - Write a function that capitalizes all words of a string.
*
* @entry: This is the input string
*
* Return: String capitalized
*/
char *cap_string(char *entry)
{
while (entry[i] != '\0')
{
if (entry[i]  >= 97 &&  entry[i] <= 122)
{
entry[i] = entry[i] - 32; 
i++;
}
return entry;
}
