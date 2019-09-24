#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int mig;
for (mig = 'a'; mig <= 'z'; mig++)
{
_putchar(mig);
}
_putchar('\n');
return;
}
