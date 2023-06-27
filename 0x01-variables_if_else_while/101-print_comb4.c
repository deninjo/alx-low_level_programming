#include <stdio.h>

/**
* main - prints all possible different combinations of three digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int hundr, tens, ones;

	for (hundr = '0'; hundr <= '9'; hundr++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (hundr < tens && tens < ones) /* Avoid repeating digits */
				{
					putchar(hundr);
					putchar(tens);
					putchar(ones);

					if (hundr < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
