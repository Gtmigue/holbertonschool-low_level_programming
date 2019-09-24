#include "holberton.h"
/**
 *print_last_digit - prints last digit
 *@e: 1 operand
 *Return: #
 */
int print_last_digit(int e)
{
e = e % 10;
if (e < 0)
{
e = (e * -1);
}
_putchar('0' + e);
return (e);
}
