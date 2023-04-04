#include "main.h"

/**
 *_memset - fills mem with a constant byte
 *@s: memory area to be filled
 *@b: character to be copied
 *@n: times to copy b
 *Return:pointer to mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
