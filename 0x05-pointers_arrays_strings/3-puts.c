#include"main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 * @str: string parameter to print
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
