#include "holberton.h"
/**
* swap_int - swap variable values
* @a: pointer 1
* @b: pointer 2
* Return: void
*/
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
