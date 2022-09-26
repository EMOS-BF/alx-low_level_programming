#include "main.h"
/**
*_memset fills memory with a constant byte.
*@s address to memory
*@b char to be use
*@n number to be used
*/
char *_memset(char *s, char b, unsigned int n)
{
while(n)
{
s[n - 1] = b;
n--;
}
return (s);
}
