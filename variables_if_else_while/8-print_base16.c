#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	putchar(n  + '0');

	for (n = 'a' ; n < 'f' ; n++)
	putchar(n);	
	putchar('\n');

	return (0);

}
