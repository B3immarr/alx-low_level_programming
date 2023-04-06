#include "main.h"

/**
 * _strlen_recursion - gets length of string
 * @s: string whose length is being calculated
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
return (*s ? (1 + _strlen_recursion(s++)) : 0);
}
