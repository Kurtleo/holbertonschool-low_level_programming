#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 10; i <= 99; ++i)
	{
	putchar (i + 10);
	if (i < 99)
	{

	putchar (',');
	putchar (' ');
	}
	}
	putchar('\n');
	return (0);

}
