#include "holberton.h"
/**
 *print_sign - prints sings
 *@n: 1 operand
 *Return: 1 if is greater than zero, zero and -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
{
return (0);
}
}
else
_putchar('-');
return (-1);
}
