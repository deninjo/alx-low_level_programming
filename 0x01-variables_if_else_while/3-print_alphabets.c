#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and uppercase.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c, C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
return (0);
}
