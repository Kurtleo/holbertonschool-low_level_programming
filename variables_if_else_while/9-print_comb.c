#include <stdio.h>

/**
 * main - Print all posible combinations of single-digit numbers
 *
 * Return:0
 */
int main(void)
{
	int i;

	for (i = 0; i <=0 9; ++i)
	{
	putchar(i + '0');

	if (i < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);

}
