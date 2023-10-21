#include "main.h"

/**
 * print_unint - prints unsigned integer;
 * @ap: list of unsigned integers.
 *
 * Return: length.
 */

int print_unint(va_list ap)
{
	unsigned int u, count = 1, i = 0;

	u = va_arg(ap, unsigned int);

	while (u > 9)
	{
		u /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar(((i / count) % 10) + '0');
		count = count / 10;
		i++;
	}
	return (i);
}
