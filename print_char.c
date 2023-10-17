#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints characters.
 * @ap: list of character(s) to be printed.
 * @count: counts the characters printed.
 * Return: character.
 */

int print_char(va_list ap, int count)
{
	char c = va_arg(ap, int);

	count = 0;

	_putchar(c);
	count++;
	_putchar('\n');
	return (count);
}

/**
 * print_str - print strings
 * @ap: list with string to be printed.
 * @count: counts the characters printed.
 * Return: string.
 */

int print_str(va_list ap, int count)
{
	int i = 0;

	char *c = va_arg(ap, char*);

	count = 0;
	if (c == NULL)
		return (-1);
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		count++;
		i++;
	}
	_putchar('\n');
	return (count);
}
