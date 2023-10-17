#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *name = "AUSTIN";
	int len = _printf("Lets try to print a simple sentence");
	_printf("My name is %s", name);
	printf("length = %d\n", len);
	return (0);
}
