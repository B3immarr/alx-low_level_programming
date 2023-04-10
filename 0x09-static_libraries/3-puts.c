#include "main.h"

/**
* _puts - function that prints string
* @str:- string pointer
* Return - string and new line
*/

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
