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
	_printf("Let's print a simple sentence.\n");
	_printf("My name is %s", name);
	printf("length = %d\n", len);
	_printf("%c", 'S');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("%d", 1024);
	return (0);
}
