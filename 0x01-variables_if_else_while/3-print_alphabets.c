#include <stdio.h>
/**
* main - prints the alphabet in lowercase and uppercase.
*
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;

<<<<<<< HEAD
for (c = 'a'; c <= 'z'; c++)
{
    putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
    putchar(c);
}
    putchar('\n');
=======
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
>>>>>>> d65050328da06a60df6adc2e0cbee98bfea8fced
return (0);
}
