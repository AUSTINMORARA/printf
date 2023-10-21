#include "main.h"

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
