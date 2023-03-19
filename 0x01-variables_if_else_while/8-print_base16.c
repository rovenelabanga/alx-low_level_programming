#include <stdio.h>
/**
 * main - A program that prints all the hexadecimals in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(y[i]);
	}
	putchar('\n');
	return (0);
}
