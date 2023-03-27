#include "main.h"

/**
*swap_int - swaps two integers
*@a: swaps and stores value of b
*@b: swaps and stores value of a
*Return: none
*/
void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
