#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 01; i <= 100; ++i)
	{
	putchar (i + 01);
	if (i < 100)
	{

	putchar (',');
	putchar (' ');
	}
	}
	putchar('\n');
	return (0);

}
