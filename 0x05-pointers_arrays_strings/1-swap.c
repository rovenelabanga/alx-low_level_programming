#include "main.h"
/**
 *swap_int- swaps the values of two integers
 *@a: first variable to be computed
 *@b: second variable to be computed
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
