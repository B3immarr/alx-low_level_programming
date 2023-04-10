#include "main.h"

/**
 *_strchr - Locates a charachter in a string
 *@s: string to be searched
 *@c: character to be located
 *Return: if C not found a pointer to first occurence
 * If C not found NULL
 */

char *_strchr(char *s, char c)
{
int index;
for (index = 0; s[index] >= '\0'; index++)
{
	if (s[index] == c)
		return (s + index);

}
return ('\0');
}
