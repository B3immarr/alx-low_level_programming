#include "main.h"
/**
 *_strpbrk - searches a string s of any of the bytes in the string accept
 *@s:string to be searched
 *@accept: set of bytes to be searched for
 *Return: If a set is matched - a pointer to matched byte
 *if no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
	if (*s == accept[index])
		return (s);
}
s++;
}
return ('\0');
}
