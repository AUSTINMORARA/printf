#include "main.h"

/**
 * print_int - prints an integer
 * @count: counts arguments printed
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

/**
 * print_binary - convert number to binary.
 * @count: count arguments.
 * @ap: number of argumants.
 * Return: count;
 */

int print_binary(va_list ap)
{
	int n, i, count;
	char bin[65];
	int index = 0;

	n = va_arg(ap, int);
	if (n == 0)
	{
		_putchar('0');
		return (-1);
	}
	while (n > 0)
	{
		bin[index++] = (n % 2) ? '1' : '0';
		n /= 2;
	}
	bin[index] = '\0';
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(bin[i]);
	}
	count += 1;
	return (count);
}
