#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * Return: On Sucess 1
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
