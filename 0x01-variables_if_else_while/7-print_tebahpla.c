#include <stdio.h>
/**
 * main - a program that prints lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');
	return (0);
}
