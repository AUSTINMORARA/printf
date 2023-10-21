#include "main.h"

/**
 * print_int - prints an integer
 * @ap: argument list.
 * Return: count.
 */

int print_int(va_list ap)
{
	int number = va_arg(ap, int);
	int div, count = 0;

	if (number < 0)
	{
		number = -number;
	}

	div = 1;
	while (number / div > 9)
	{
		div *= 10;
	}

	while (div != 0)
	{
		_putchar(number / div + '0');
		number %= div;
		div /= 10;
		count += 1;
	}
	return (count);
}
