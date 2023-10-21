#include "main.h"

/**
 * print_str - print strings
 * @ap: list with string to be printed.
 * Return: string.
 */

int print_str(va_list ap)
{
	char *s;
	int count, i;

	s = va_arg(ap, char *);

	if (s == NULL)
		return (-1);

	for (count = 0; *(s + count) != '\0'; count++)
		;

	for (i = 0; i < count; i++)
	{
		_putchar(*(s + i));
	}

	return (count);
}
