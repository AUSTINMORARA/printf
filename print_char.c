#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints characters.
 * @ap: list of character(s) to be printed.
 * Return: character.
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);
}

/**
 * print_str - print strings
 * @ap: list with string to be printed.
 * Return: string.
 */

int print_str(va_list ap)
{
	int i, count = 0;

	char *c = va_arg(ap, char*);

	count = 0;
	if (c == NULL)
		return (-1);
	for (count = 0; *(c + count) != '\0'; count++)
		;

	for (i = 0; i < count; i++)
	{
		_putchar(c[i]);
	}
	return (count);
}
