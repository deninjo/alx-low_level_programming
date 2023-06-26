#include <stdio.h>
/**
* main - prints all single digit numbers starting from 0 using putchar
*
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');


return (0);
}
