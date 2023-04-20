#include "function_pointers.h"

/**
 * int_index - searches for a n integer n an array of integers
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: if no element matches/size <= 0 - -1
 * Otherwise - index of first element for which
 * cmp function does not return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
	return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
	return (index);
}
return (-1);
}
