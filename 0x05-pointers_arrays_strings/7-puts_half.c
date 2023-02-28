#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: inut
 */
void puts_half(char *str)
{
	int len = 0

		while (*str != '\0')
		{
			len++;
			str++;
		}

		str -= (len / 2);
		while (*str != '\0')
		{
			_puchar(*str);
			str++;
		}

		_putchar('\n');

}
