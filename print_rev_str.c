#include "main.h"

/**
 * print_rev_str - prints string in reverse.
 * @ap: list of str arguments.
 *
 * Return: length.
 */

int print_rev_str(va_list ap)
{
	char *string;
	int count = 0, i = 0;

	string = va_arg(ap, char*);
	if (string == NULL)
		return (-1);

	while (string[i] != '\0')
		;
	while (i >= 0)
	{
		_putchar(string[i]);
		count++;
		i--;
	}
	return (count);
}
