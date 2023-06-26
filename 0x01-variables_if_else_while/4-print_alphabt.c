#include <stdio.h>
/**
* main - prints the alphabet in lowercase except q and e
*
*
* Return: Always 0 (Success)
*/
int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'e')
		continue;
	if (c == 'q')
		continue;

	putchar(c);
	}

	putchar('\n');
return (0);
}

