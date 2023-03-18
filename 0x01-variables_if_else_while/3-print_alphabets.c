#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52 ; i++)
	{
		putchar(x[i]);
	}

	putchar('\n');
	return (0);
}
