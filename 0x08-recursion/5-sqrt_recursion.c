#include "main.h"
/**
 * squ_rt - Finds the squarerooot
 * @a: number 1
 * @b: number 2
 * Return: square root
 */

int squ_rt(int a, int b)
{
if (b * b > a)
	return (-1);
else if (b * b == a)
	return (b);
			else
				return (squ_rt(a, b + 1));
			return (1);
}


/**
 * _sqrt_recursion - returns the natural square root
 * @n: number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
if (n == 0)
	return (0);
return (squ_rt(n, 1));
}
