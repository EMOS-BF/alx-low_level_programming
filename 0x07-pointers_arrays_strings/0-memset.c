#include "main.h"
/**
*_memset fills memory with a constant byte.
*@s address to memory
*@b char to be use
*@n number to be used
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
return (s);
}
