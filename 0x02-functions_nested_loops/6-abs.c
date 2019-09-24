#include "holberton.h"
/**
 *_abs - absolute number
 *@f: 1 operand
 *Return: absolute number m
 */
int _abs(int m)
{
if (m > 0)
{
return (m);
}
else
m = (m * -1);
return (m);
}
