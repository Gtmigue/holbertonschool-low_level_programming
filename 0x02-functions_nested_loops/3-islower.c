#include "holberton.h"
/**
 *_islower - prints letter in lowercase
 *@c: 1 operand
 *Return: 1 if c is uppercase and 0 if is lowercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
