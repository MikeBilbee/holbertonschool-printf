#include "main.h"

/**
 * print_c - function
 * @c: Char
 * description: print char
 * Return: 1, always
 */

int print_c(va_list c)
{
char ch = (char)va_arg(c, int);
_putchar(ch);
return (1);
}

/**
 * print_s - function
 * @s: string
 * description: prints string
 * Return: numbers and characters printed
 */

int print_s(va_list s)
{
int count;
char *str = va_arg(s, char *);

if (!str)
str = "(null)";
for (count = 0; str[count]; count++)
{
_putchar(str[count]);
}
return (count);
}

/**
 * print_p - function
 * @p: arguments
 * description: prints percent symbol
 * Return: characters printed
 */

int print_p(va_list p)
{
(void)p;
_putchar('%');
return (1);
}
