#include "holberton.h"
/**
*_strlen_recursion - length of a string
*@s: pointer of string
*Return: int
*/
int _strlen_recursion(char *s)
{
int n = 0;

if (*s > '\0')
{
n += _strlen_recursion(s + 1) + 1;
}
return (n);
}