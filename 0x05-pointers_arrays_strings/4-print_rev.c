#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be printed
 * Return: void
 */
void print_rev(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
for (len -= 1; len >= 0; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
