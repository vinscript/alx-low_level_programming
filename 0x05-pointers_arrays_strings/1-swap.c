#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;

}
