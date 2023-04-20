#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter
 * on each element of array
 * @array: the array
 * @size: size of array
 * @action: a pointer to function being executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
	return;
while (size-- > 0)
{
action(*array);
array++
}
}
