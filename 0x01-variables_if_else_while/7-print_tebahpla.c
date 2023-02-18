#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 * Return: Always 0 (success)
 */

int main(void)

{
	int low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);

}
