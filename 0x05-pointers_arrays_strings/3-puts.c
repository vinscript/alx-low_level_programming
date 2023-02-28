#include "main.h"

/**
 * _puts - prints a new line
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str++);
	}

	_putchar('\n');

}
